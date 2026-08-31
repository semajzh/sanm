#include "buff4110220.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

bool Buff41102201::run(Ground* ground, int obj)
{
    if (!check020(ground, obj))
    {
        return false;
    }
    if (qrand() % 100 + 1 <= 100 - 40)
    {
        return false;
    }

    return true;
}

void Buff41102201::run(Ground* ground, float point)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        float point1 = Ground::pointbystar(ground, 25, src, method);
        point = (int)point % J02_FLAG_1;
        point = point * Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]) / 100;
        Ground::hlo(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}

bool Buff41102201::check020(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 20)
        {
            return true;
        }
    }
    return false;
}

void Buff41102202::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 20, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        int point = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]) * 1000;

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41102205(des, obj, id, 1, point));
        Ground::addBuff(ground, ground->buff[6][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff41102204(des, des, id, 1, point));
        Ground::addBuff(ground, ground->buff[6][des], buff2);
    }
}

void Buff41102203::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 90, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        float point = Ground::pointbyh0(ground, point1, des, obj);
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}

void Buff41102204::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float ii0 = meta / 1000.0f;
    float ii2 = meta / 1000.0f;
    i0 += ii0;
    i2 += ii2;
    ground->m_group[des/10].m_item[des%10].i[0] += ii0;
    ground->m_group[des/10].m_item[des%10].i[2] += ii2;
}

void Buff41102204::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
}

void Buff41102204::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float ii0 = buff->meta / 1000.0f;
    float ii2 = buff->meta / 1000.0f;
    i0 += ii0;
    i2 += ii2;
    ground->m_group[des/10].m_item[des%10].i[0] += ii0;
    ground->m_group[des/10].m_item[des%10].i[2] += ii2;
}

void Buff41102205::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i0 = meta / 1000.0f;
    i0 = Ground::addin(ground, des, 0, -i0);
    i2 = meta / 1000.0f;
    i2 = Ground::addin(ground, des, 0, -i2);
    Buff020::check020(ground, src, des, true);
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
    check4110121(ground);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff41102205::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff41102205::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff41102205::check4110121(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 41101212)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

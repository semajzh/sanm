#include "buff1010721.h"
#include "ground.h"
#include "log/logger.h"

void Buff1010721::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    int obj = -1;
    int hlo = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (item1.strategys[i] == 101071)
        {
            QVector<int> objs = Ground::selectObjN(ground, des, 0x3010);
            if (objs.size() > 0)
            {
                obj = objs.front();
            }
            hlo = 14;
            break;
        }
        else if (item1.strategys[i] == 101072)
        {
            QVector<int> objs = Ground::selectObjN(ground, des, 0x1010);
            if (objs.size() > 0)
            {
                obj = objs.front();
            }
            hlo = 14;
            break;
        }
    }
    if (obj == -1)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 0x0211);
        if (objs.size() > 0)
        {
            obj = objs.front();
        }
        hlo = 0;
    }
    float point1 = Ground::pointbystar(ground, 140, src, method);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10107212(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::hloi1(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point1 + hlo);
    }
    Ground::hloi1(ground, &item1, &item1, 1010721, point1 + hlo);
}

int Buff1010721::selectObjg1(Ground* ground, int pos1)
{
    QVector<int> objs;
    int g = pos1 / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[0] == pos1)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].g[1] == 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    if (objs.size() <= 0)
    {
        for (int i = 0; i < 3; ++i)
        {
            if (ground->m_group[g].m_item[i].g[0] == pos1)
            {
                continue;
            }
            if (ground->m_group[g].m_item[i].h[0] <= 0)
            {
                continue;
            }
            objs.append(g*10+i);
        }
    }
    if (objs.size() <= 0)
    {
        return -1;
    }
    return objs[qrand() % objs.size()];
}

void Buff10107212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 25, src, method);
    j02 = true;
    k0 = Ground::addkn(ground, des, 0, point1);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff10107212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    j02 = false;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff10107212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    j02 = true;
}

bool Buff10107212::run(Ground* , int method)
{
    if (method == 2223)
    {
        return false;
    }
    if (j02)
    {
        j02 = false;
        return true;
    }
    return false;
}

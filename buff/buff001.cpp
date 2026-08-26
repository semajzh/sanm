#include "buff001.h"
#include "buff302011.h"
#include "ground.h"
#include "log/logger.h"

Buff001::Buff001(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 1;
    unsigned char ch[] = {0xe7, 0x81, 0xab, 0xe6, 0x94, 0xbb};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff001::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    data = (ground->m_group[des/10].m_item[des%10].i[1] < 15) ? ground->m_group[des/10].m_item[des%10].i[1] : 15;
    ground->m_group[des/10].m_item[des%10].i[1] -= data;
    Ground::exenter(ground, src, des, id);
    check015(ground);
}

void Buff001::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].i[1] += data;
    Ground::exexit(ground, src, des, id);
}

void Buff001::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff001::check015(Ground* ground)
{
    bool b = false;
    for (QSharedPointer<Buff> buff : ground->buff[6][src])
    {
        if (buff->id == 302011)
        {
            QSharedPointer<Buff302011> pbuff = qSharedPointerCast<Buff302011>(buff);
            pbuff->run(ground, des);
            b = true;
            break;
        }
    }
    return b;
}

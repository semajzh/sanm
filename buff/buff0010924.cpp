#include "buff0010924.h"
#include "ground.h"
#include "log/logger.h"

void Buff0010924::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j0 = Ground::pointbystar(ground, 20, src, method);
    ground->m_group[des/10].m_item[des%10].j[0] += j0;
}

void Buff0010924::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= j0;
}

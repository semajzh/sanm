#include "buff001660.h"
#include "ground.h"
#include "log/logger.h"

float Buff001660::run(Ground* ground, int obj)
{
    if (ground->m_group[des/10].m_item[des%10].i[2] > ground->m_group[obj/10].m_item[obj%10].i[2])
    {
        return 5.5f;
    }
    return 0;
}

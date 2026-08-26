#include "method9999999.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method9999999::Method9999999()
{
    type = 2224;
    id = 9999999;
    luck = 50;
}

Method9999999::~Method9999999()
{

}

int Method9999999::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj < 0 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 1;
    }

    return 1;
}


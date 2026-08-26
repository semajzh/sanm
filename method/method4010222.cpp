#include "method4010222.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method4010222::Method4010222()
{
    type = 2222;
    id = 4010222;
    luck = 40;
}

Method4010222::~Method4010222()
{

}

int Method4010222::getLuck(Ground* , Item* item1)
{
    luck = 40 + item1->star;
    return luck;
}

int Method4010222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int g = 1 - item1->g[0] / 10;
    for (int i = 0; i < 3; ++i)
    {
        Item& item2 = ground->m_group[g].m_item[i];
        Ground::run2223(ground, item1->g[0], item2.g[0], true, true);
        Ground::run2223(ground, item2.g[0], item1->g[0], true, true);
        if (item1->h[0] > 0 && item2.h[0] > 0 && item1->i[0] > item2.i[0])
        {
            Ground::actbr(ground, item1, &item2, id, 100);
        }
    }

    return 1;
}

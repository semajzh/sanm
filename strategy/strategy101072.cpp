#include "strategy101072.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff101072.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101072::Strategy101072()
{
    id = 101072;
}

Strategy101072::~Strategy101072()
{

}

bool Strategy101072::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}


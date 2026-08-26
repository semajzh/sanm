#include "strategy404021.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff404021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy404021::Strategy404021()
{
    id = 404021;
}

Strategy404021::~Strategy404021()
{

}

bool Strategy404021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}


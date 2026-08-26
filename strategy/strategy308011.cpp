#include "strategy308011.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff308011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy308011::Strategy308011()
{
    id = 308011;
}

Strategy308011::~Strategy308011()
{

}

bool Strategy308011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}

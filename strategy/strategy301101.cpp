#include "strategy301101.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff301101.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301101::Strategy301101()
{
    id = 301101;
}

Strategy301101::~Strategy301101()
{

}

bool Strategy301101::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}


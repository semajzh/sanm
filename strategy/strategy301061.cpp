#include "strategy301061.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff301061.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301061::Strategy301061()
{
    id = 301061;
}

Strategy301061::~Strategy301061()
{

}

bool Strategy301061::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}


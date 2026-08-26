#include "strategy101071.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff101071.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy101071::Strategy101071()
{
    id = 101071;
}

Strategy101071::~Strategy101071()
{

}

bool Strategy101071::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    return true;
}


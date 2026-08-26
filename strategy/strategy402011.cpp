#include "strategy402011.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy402011::Strategy402011()
{
    id = 402011;
}

Strategy402011::~Strategy402011()
{

}

bool Strategy402011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);
    item1->j[5] += 10;
    return true;
}


#include "method6000120.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Method6000120::Method6000120()
{
    type = 20;
    id = 6000120;
}

Method6000120::~Method6000120()
{

}

int Method6000120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    return 1;
}

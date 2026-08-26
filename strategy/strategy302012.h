#ifndef STRATEGY302012_H
#define STRATEGY302012_H
#include "strategy.h"

class Strategy302012 : public Strategy
{
public:
    Strategy302012();
    virtual ~Strategy302012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY302012_H

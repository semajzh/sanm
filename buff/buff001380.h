#ifndef BUFF001380_H
#define BUFF001380_H
#include "buff.h"

class Buff001380 : public BuffR
{
public:
    Buff001380() {}
    Buff001380(int s, int d, int m) : BuffR(s, d, m) { id = 1380; }
    virtual ~Buff001380() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l2 = 0.0f;
};

#endif // BUFF001380_H

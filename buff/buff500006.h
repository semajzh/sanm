#ifndef BUFF500006_H
#define BUFF500006_H
#include "buff.h"

class Buff500006 : public BuffR
{
public:
    Buff500006() {}
    Buff500006(int s, int d, int m) : BuffR(s, d, m) { id = 500006; }
    virtual ~Buff500006() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int& );
};

#endif // BUFF500006_H

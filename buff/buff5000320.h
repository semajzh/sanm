#ifndef BUFF5000320_H
#define BUFF5000320_H
#include "buff.h"

class Buff5000320 : public BuffR
{
public:
    Buff5000320() {}
    Buff5000320(int s, int d, int m) : BuffR(s, d, m) { id = 5000320; }
    virtual ~Buff5000320() {}

    virtual void run(Ground* ) {}
    void run(Ground* , float );
    bool run(Ground* , int );

private:
    int qi = 0.0f;
};

#endif // BUFF5000320_H

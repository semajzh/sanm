#ifndef BUFF5000120_H
#define BUFF5000120_H
#include "buff.h"

class Buff5000120 : public BuffR
{
public:
    Buff5000120() {}
    Buff5000120(int s, int d, int m) : BuffR(s, d, m) { id = 5000120; }
    virtual ~Buff5000120() {}

    virtual void run(Ground* ) {}
    void run(Ground* , float );
    bool run(Ground* , int );

private:
    int qi = 0.0f;
};

#endif // BUFF5000120_H

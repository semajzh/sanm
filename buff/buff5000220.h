#ifndef BUFF5000220_H
#define BUFF5000220_H
#include "buff.h"

class Buff5000220 : public BuffR
{
public:
    Buff5000220() {}
    Buff5000220(int s, int d, int m) : BuffR(s, d, m) { id = 5000220; }
    virtual ~Buff5000220() {}

    virtual void run(Ground* ) {}
    void run(Ground* , float );
    bool run(Ground* , int );

private:
    int qi = 0.0f;
};

#endif // BUFF5000220_H

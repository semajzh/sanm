#ifndef BUFF2010520_H
#define BUFF2010520_H
#include "buff.h"

class Buff2010520 : public BuffR
{
public:
    Buff2010520() {}
    Buff2010520(int s, int d, int m) : BuffR(s, d, m) { id = 2010520; }
    virtual ~Buff2010520() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    int round = 0;
    int count = 0;
    float j0 = 0.0f;
};

#endif // BUFF2010520_H

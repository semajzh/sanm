#ifndef BUFF001410_H
#define BUFF001410_H
#include "buff.h"

class Buff001410 : public BuffR
{
public:
    Buff001410() {}
    Buff001410(int s, int d, int m) : BuffR(s, d, m) { id = 1410; }
    virtual ~Buff001410() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001410_H

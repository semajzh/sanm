#ifndef BUFF001830_H
#define BUFF001830_H
#include "buff.h"

class Buff001830 : public BuffR
{
public:
    Buff001830() {}
    Buff001830(int s, int d, int m) : BuffR(s, d, m) { id = 1830; }
    virtual ~Buff001830() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001830_H

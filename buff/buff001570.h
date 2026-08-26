#ifndef BUFF001570_H
#define BUFF001570_H
#include "buff.h"

class Buff001570 : public BuffR
{
public:
    Buff001570() {}
    Buff001570(int s, int d, int m) : BuffR(s, d, m) { id = 1570; }
    virtual ~Buff001570() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l2 = 0.0f;
};

#endif // BUFF001570_H

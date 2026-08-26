#ifndef BUFF201061_H
#define BUFF201061_H
#include "buff.h"

class Buff201061 : public BuffR
{
public:
    Buff201061() {}
    Buff201061(int s, int d, int m) : BuffR(s, d, m) { id = 201061; }
    virtual ~Buff201061() {}
};

#endif // BUFF201061_H

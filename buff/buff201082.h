#ifndef BUFF201082_H
#define BUFF201082_H
#include "buff.h"

class Buff201082 : public BuffR
{
public:
    Buff201082() {}
    Buff201082(int s, int d, int m) : BuffR(s, d, m) { id = 201082; }
    virtual ~Buff201082() {}
};

#endif // BUFF201082_H

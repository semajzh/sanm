#ifndef BUFF9999999_H
#define BUFF9999999_H
#include "buff.h"

class Buff9999999 : public BuffR
{
public:
    Buff9999999() {}
    Buff9999999(int s, int d, int m) : BuffR(s, d, m) { id = 9999999; }
    virtual ~Buff9999999() {}
};

#endif // BUFF9999999_H

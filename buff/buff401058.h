#ifndef BUFF401058_H
#define BUFF401058_H
#include "buff.h"

class Buff401058 : public BuffR
{
public:
    Buff401058() {}
    Buff401058(int s, int d, int m) : BuffR(s, d, m) { id = 401058; }
    virtual ~Buff401058() {}
};


#endif // BUFF401058_H

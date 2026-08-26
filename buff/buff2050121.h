#ifndef BUFF2050121_H
#define BUFF2050121_H
#include "buff.h"

class Buff2050121 : public BuffR
{
public:
    Buff2050121() {}
    Buff2050121(int s, int d, int m) : BuffR(s, d, m) { id = 2050121; }
    virtual ~Buff2050121() {}

    virtual void run(Ground* ground);

private:
    int count = 0;
};

#endif // BUFF2050121_H

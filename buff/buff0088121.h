#ifndef BUFF0088121_H
#define BUFF0088121_H
#include "buff.h"

class Buff0088121 : public BuffR
{
public:
    Buff0088121() {}
    Buff0088121(int s, int d, int m) : BuffR(s, d, m) { id = 88121; }
    virtual ~Buff0088121() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int round = 0;
    int count = 0;
    float i[4] = {0};
    int getmaxi(Ground* ground);
};

#endif // BUFF0088121_H

#ifndef BUFF401041_H
#define BUFF401041_H
#include "buff.h"

class Buff401041 : public BuffR
{
public:
    Buff401041() {}
    Buff401041(int s, int d, int m) : BuffR(s, d, m) { id = 401041; }
    virtual ~Buff401041() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float j2 = 0.0f;
    float k2 = 0.0f;
};

#endif // BUFF401041_H

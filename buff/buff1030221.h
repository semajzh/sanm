#ifndef BUFF1030221_H
#define BUFF1030221_H
#include "buff.h"

class Buff1030221 : public BuffC
{
public:
    Buff1030221() {}
    Buff1030221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1030221; }
    virtual ~Buff1030221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float i3 = 0.0f;
    float k0 = 0.0f;
    float l0 = 0.0f;
    float ii3 = 0.0f;
    float kk0 = 0.0f;
    float ll0 = 0.0f;
    bool sub = false;
};

#endif // BUFF1030221_H

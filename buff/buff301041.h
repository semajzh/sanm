#ifndef BUFF301041_H
#define BUFF301041_H
#include "buff.h"

class Buff301041 : public BuffR
{
public:
    Buff301041() {}
    Buff301041(int s, int d, int m) : BuffR(s, d, m) { id = 301041; }
    virtual ~Buff301041() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l2 = 0.0f;
    float i1 = 0.0f;
};

#endif // BUFF301041_H

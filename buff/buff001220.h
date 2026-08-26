#ifndef BUFF001220_H
#define BUFF001220_H
#include "buff.h"

class Buff001220 : public BuffR
{
public:
    Buff001220() {}
    Buff001220(int s, int d, int m) : BuffR(s, d, m) { id = 1220; }
    virtual ~Buff001220() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k1 = 0.0f;
};

#endif // BUFF001220_H

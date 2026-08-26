#ifndef BUFF101021_H
#define BUFF101021_H
#include "buff.h"

class Buff101021 : public BuffR
{
public:
    Buff101021() {}
    Buff101021(int s, int d, int m) : BuffR(s, d, m) { id = 101021; }
    virtual ~Buff101021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l4 = 0.0f;
    float l5 = 0.0f;
};

#endif // BUFF101021_H

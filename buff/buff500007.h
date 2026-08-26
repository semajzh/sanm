#ifndef BUFF500007_H
#define BUFF500007_H
#include "buff.h"

class Buff500007 : public BuffR
{
public:
    Buff500007() {}
    Buff500007(int s, int d, int m) : BuffR(s, d, m) { id = 500007; }
    virtual ~Buff500007() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i[4] = {0};
};

#endif // BUFF500007_H

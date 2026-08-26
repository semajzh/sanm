#ifndef BUFF001640_H
#define BUFF001640_H
#include "buff.h"

class Buff001640 : public BuffR
{
public:
    Buff001640() {}
    Buff001640(int s, int d, int m) : BuffR(s, d, m) { id = 1640; }
    virtual ~Buff001640() {}

    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    float j2 = 0.0f;
};

#endif // BUFF001640_H

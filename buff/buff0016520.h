#ifndef BUFF0016520_H
#define BUFF0016520_H
#include "buff.h"

class Buff0016520 : public BuffR
{
public:
    Buff0016520() {}
    Buff0016520(int s, int d, int m) : BuffR(s, d, m) { id = 16520; }
    virtual ~Buff0016520() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0016520_H

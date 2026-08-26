#ifndef BUFF6000221_H
#define BUFF6000221_H
#include "buff.h"

class Buff6000221 : public BuffR
{
public:
    Buff6000221() {}
    Buff6000221(int s, int d, int m) : BuffR(s, d, m) { id = 6000221; }
    virtual ~Buff6000221() {}

    virtual void run(Ground* );

};

#endif // BUFF6000221_H

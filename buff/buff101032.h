#ifndef BUFF101032_H
#define BUFF101032_H
#include "buff.h"

class Buff101032 : public BuffR
{
public:
    Buff101032() {}
    Buff101032(int s, int d, int m) : BuffR(s, d, m) { id = 101032; }
    virtual ~Buff101032() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj2);

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF101032_H

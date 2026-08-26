#ifndef BUFF3030120_H
#define BUFF3030120_H
#include "buff.h"

class Buff3030120 : public BuffR
{
public:
    Buff3030120() {}
    Buff3030120(int s, int d, int m) : BuffR(s, d, m) { id = 3030120; }
    virtual ~Buff3030120() {}
    virtual void run(Ground* ) {}
    bool run(Ground* ground, float point);
    bool run(Ground* ground, int& obj, float& point);

private:
    bool check303012(Ground* ground, int obj);
    int round = 0;
    int count[3] = {0};
    int over = 0;
};

#endif // BUFF3030120_H

#ifndef BUFF0120321_H
#define BUFF0120321_H
#include "buff.h"

class Buff0120321 : public BuffR
{
public:
    Buff0120321() {}
    Buff0120321(int s, int d, int m) : BuffR(s, d, m) { id = 120321; }
    virtual ~Buff0120321() {}

    virtual void exit(Ground* );
    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    bool check002(Ground *ground, int obj);
    int round = 0;
    QVector<int> objs;
    float k1 = 0.0f;
};

#endif // BUFF0120321_H

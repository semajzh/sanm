#ifndef BUFF3010221_H
#define BUFF3010221_H
#include "buff.h"
#include <QVector>

class Buff3010221 : public BuffR
{
public:
    Buff3010221() {}
    Buff3010221(int s, int d, int m) : BuffR(s, d, m) { id = 3010221; }
    virtual ~Buff3010221() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj, int exid);

private:
    void zhisheng(Ground* ground);
    bool check301021(Ground* ground, int obj, int exid);
    int round = 0;
    int count = 0;
    int hlocount = 0;
};

#endif // BUFF3010221_H

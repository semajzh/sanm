#ifndef BUFF401022_H
#define BUFF401022_H
#include "buff.h"

class Buff401022 : public BuffC
{
public:
    Buff401022() {}
    Buff401022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401022; }
    virtual ~Buff401022() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF401022_H

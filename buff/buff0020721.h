#ifndef BUFF0020721_H
#define BUFF0020721_H
#include "buff.h"
#include <QVector>

class Buff0020721 : public BuffR
{
public:
    Buff0020721() {}
    Buff0020721(int s, int d, int m) : BuffR(s, d, m) { id = 20721; }
    virtual ~Buff0020721() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float i2 = 0.0f;
};

#endif // BUFF0020721_H

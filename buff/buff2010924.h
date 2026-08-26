#ifndef BUFF2010924_H
#define BUFF2010924_H
#include "buff.h"
#include <QSharedPointer>

class Buff2010924 : public BuffC
{
public:
    Buff2010924() {}
    Buff2010924(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2010924; }
    virtual ~Buff2010924() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float i0 = 0.0f;
    float i3 = 0.0f;
};

#endif // BUFF2010924_H

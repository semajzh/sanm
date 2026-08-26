#ifndef BUFF0014621_H
#define BUFF0014621_H
#include "buff.h"
#include <QVector>

class Buff00146211: public BuffR
{
public:
    Buff00146211() {}
    Buff00146211(int s, int d, int m) : BuffR(s, d, m) { id = 146211; }
    virtual ~Buff00146211() {}

    virtual void run(Ground* ground);
};

class Buff00146212 : public BuffR
{
public:
    Buff00146212() {}
    Buff00146212(int s, int d, int m) : BuffR(s, d, m) { id = 146212; }
    virtual ~Buff00146212() {}

    virtual void run(Ground* ground);

private:
    QVector<int> selectObj015(Ground* ground);
};

#endif // BUFF0014621_H

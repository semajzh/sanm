#ifndef BUFF001_H
#define BUFF001_H
#include "buff.h"

class Buff001 : public BuffC
{
public:
    Buff001() {}
    Buff001(int s, int d, int m, int r);
    virtual ~Buff001() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int data = 0;
    bool check015(Ground* ground);
};

#endif // BUFF001_H

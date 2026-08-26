#ifndef BUFF001730_H
#define BUFF001730_H
#include "buff.h"

class Buff001730 : public BuffR
{
public:
    Buff001730() {}
    Buff001730(int s, int d, int m) : BuffR(s, d, m) { id = 1730; }
    virtual ~Buff001730() {}

    virtual void run(Ground* );
};

class Buff001731 : public BuffR
{
public:
    Buff001731() {}
    Buff001731(int s, int d, int m) : BuffR(s, d, m) { id = 1731; }
    virtual ~Buff001731() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float j6 = 0.0f;
};

#endif // BUFF001730_H

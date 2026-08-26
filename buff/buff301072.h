#ifndef BUFF301072_H
#define BUFF301072_H
#include "buff.h"

class Buff301072 : public BuffR
{
public:
    Buff301072() {}
    Buff301072(int s, int d, int m) : BuffR(s, d, m) { id = 301072; }
    virtual ~Buff301072() {}
    virtual void run(Ground* ground);

private:
    int round = 0;
};

class Buff3010722 : public BuffC
{
public:
    Buff3010722() {}
    Buff3010722(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3010722; }
    virtual ~Buff3010722() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l2 = 0.0f;
};

#endif // BUFF301072_H

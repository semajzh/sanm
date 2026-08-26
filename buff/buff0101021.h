#ifndef BUFF0101021_H
#define BUFF0101021_H
#include "buff.h"

class Buff0101021 : public BuffR
{
public:
    Buff0101021() {}
    Buff0101021(int s, int d, int m) : BuffR(s, d, m) { id = 101021; }
    virtual ~Buff0101021() {}

    virtual void run(Ground* ) {}
    void run(Ground* , float );
};

class Buff01010212 : public BuffR
{
public:
    Buff01010212() {}
    Buff01010212(int s, int d, int m) : BuffR(s, d, m) { id = 1010212; }
    virtual ~Buff01010212() {}

    virtual void run(Ground* );

private:
    int check0101021(Ground* ground, int obj);
};

class Buff01010213 : public BuffR
{
public:
    Buff01010213() {}
    Buff01010213(int s, int d, int m) : BuffR(s, d, m) { id = 1010213; }
    virtual ~Buff01010213() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float k0 = 0.0f;
};

class Buff01010214 : public BuffR
{
public:
    Buff01010214() {}
    Buff01010214(int s, int d, int m) : BuffR(s, d, m) { id = 1010214; }
    virtual ~Buff01010214() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float k0 = 0.0f;
};

#endif // BUFF0101021_H

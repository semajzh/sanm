#ifndef BUFF0088324_H
#define BUFF0088324_H
#include "buff.h"

class Buff0088324 : public BuffR
{
public:
    Buff0088324() {}
    Buff0088324(int s, int d, int m) : BuffR(s, d, m) { id = 88324; }
    virtual ~Buff0088324() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int sizeoflayouts();
    int add(int );
    void addlayout(Ground* ground);
    void dellayout(Ground* ground, int r);
    bool check111(Ground* ground);
    int layouts[9] = {0};
};

class Buff00883242 : public BuffR
{
public:
    Buff00883242() {}
    Buff00883242(int s, int d, int m) : BuffR(s, d, m) { id = 883242; }
    virtual ~Buff00883242() {}

    virtual void run(Ground* ) {}
    bool run(Ground* ground, int& obj);

private:
    bool check017(Ground* ground);
};

#endif // BUFF0088324_H

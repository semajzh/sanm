#ifndef BUFF1030122_H
#define BUFF1030122_H
#include "buff.h"

class Buff1030122 : public BuffR
{
public:
    Buff1030122() {}
    Buff1030122(int s, int d, int m) : BuffR(s, d, m) { id = 1030122; }
    virtual ~Buff1030122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    int sizeoflayouts();

private:
    void addlayout(Ground* ground);
    void dellayout(Ground* ground, int r);
    bool check111(Ground* ground);
    bool check102(Ground* ground);
    int add(int );
    bool check103011(Ground* ground);
    int layouts[9] = {0};
    float k2 = 0.0f;
};

#endif // BUFF1030122_H

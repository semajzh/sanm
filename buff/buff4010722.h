#ifndef BUFF4010722_H
#define BUFF4010722_H
#include "buff.h"

class Buff4010722 : public BuffC
{
public:
    Buff4010722() {}
    Buff4010722(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010722; }
    virtual ~Buff4010722() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int);

private:
    bool check006(Ground* ground, int obj);
};

#endif // BUFF4010722_H

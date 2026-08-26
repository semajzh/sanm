#ifndef BUFF181_H
#define BUFF181_H
#include "buff.h"

class Buff181 : public BuffR
{
public:
    Buff181() {}
    Buff181(int s, int d, int m) : BuffR(s, d, m) { id = 181; }
    virtual ~Buff181() {}

    virtual void run(Ground* ground);

private:
    int round = 0;
};

#endif // BUFF181_H

#ifndef BUFF2010420_H
#define BUFF2010420_H
#include "buff.h"

class Buff2010420 : public BuffR
{
public:
    Buff2010420() {}
    Buff2010420(int s, int d, int m) : BuffR(s, d, m) { id = 2010420; }
    virtual ~Buff2010420() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    void run(Ground* ground);

private:
    int m_round = 0;
    int m_count = 0;
    float j9 = 0.0f;
};

#endif // BUFF2010420_H

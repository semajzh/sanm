#ifndef BUFF4110121_H
#define BUFF4110121_H
#include "buff.h"

class Buff41101211 : public BuffR
{
public:
    Buff41101211() {}
    Buff41101211(int s, int d, int m) : BuffR(s, d, m) { id = 41101211; }
    virtual ~Buff41101211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    
private:
    float l1 = 0.0f;
};

class Buff41101212 : public BuffR
{
public:
    Buff41101212() {}
    Buff41101212(int s, int d, int m) : BuffR(s, d, m) { id = 41101212; }
    virtual ~Buff41101212() {}

    virtual void run(Ground* );
};

#endif // BUFF4110121_H

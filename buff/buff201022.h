#ifndef BUFF201022_H
#define BUFF201022_H
#include "buff.h"
#include <QVector>

class Buff201022 : public BuffR
{
public:
    Buff201022() {}
    Buff201022(int s, int d, int m) : BuffR(s, d, m) { id = 201022; }
    virtual ~Buff201022() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);
    void run(Ground* ground, int obj, float& k0);

private:
    bool check004(Ground* ground, int obj);
};

#endif // BUFF201022_H

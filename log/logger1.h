#ifndef LOGGER1_H
#define LOGGER1_H
#include "logger.h"

class Logger1 : public Logger
{
public:
    Logger1();
    virtual ~Logger1();
    virtual void print22(Ground* );
    virtual void print222(Ground* , int );
    virtual void print223(Ground* );
    virtual void printmethod(Ground* , Item* , Method* , int );
    virtual void printmethodzb(Ground* , Item* , Method*, int );
    virtual void printrelation(Ground* , QVector<int>& , Relation*);
    virtual void printstrategy(Ground* , Item* , Strategy*);
    virtual void printact(Ground* , Item* , Item* , int , int , int );
    virtual void printactmiss(Ground* , Item* item1, Item* item2);
    virtual void printhlo(Ground* , Item* , Item* , int , int );
    virtual void printbuff(Ground* , Item* , Item* , Buff* );
    virtual void printbuffenter(Ground* , int , int , Buff* );
    virtual void printbuffexit(Ground* , int , int , Buff* );
    virtual void printbuffupdate(Ground* , int , int , Buff* );
    virtual void printbuffrun(Ground* , int , int , Buff* );
    virtual void printresult(Ground* );
    virtual void printcustom(const char* , ...);
    virtual void printcustom(Ground* ground, int id, QVariant p1 = 0, QVariant p2 = 0, QVariant p3 = 0, QVariant p4 = 0);
};

#endif // LOGGER1_H

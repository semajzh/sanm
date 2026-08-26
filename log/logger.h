#ifndef LOGGER_H
#define LOGGER_H
#include <QString>
#include <QVector>
#include <QVariant>

class Ground;
class Item;
class Method;
class Relation;
class Strategy;
class Buff;
class Logger
{
public:
    static Logger& H();
    virtual void print21() {}
    virtual void print22(Ground* ) {}
    virtual void print222(Ground* , int ) {}
    virtual void print223(Ground* ) {}
    virtual void printmethod(Ground* , Item* , Method*, int ) {}
    virtual void printmethodzb(Ground* , Item* , Method*, int ) {}
    virtual void printrelation(Ground* , QVector<int>& , Relation*) {}
    virtual void printstrategy(Ground* , Item* , Strategy*) {}
    virtual void printact(Ground* , Item* , Item* , int , int , int ) {}
    virtual void printactmiss(Ground* , Item* , Item* ) {}
    virtual void printhlo(Ground* , Item* , Item* , int , int ) {}
    virtual void printbuff(Ground* , Item* , Item* , Buff* ) {}
    virtual void printbuffenter(Ground* , int , int , Buff* ) {}
    virtual void printbuffexit(Ground* , int , int , Buff* ) {}
    virtual void printbuffupdate(Ground* , int , int , Buff* ) {}
    virtual void printbuffrun(Ground* , int , int , Buff* ) {}
    virtual void printresult(Ground* ) {}
    virtual void printover(Ground* , Item* ) {}
    virtual void printcustom(const char* , ...) {}
    virtual void printcustom(Ground* , int , QVariant p1 = 0, QVariant p2 = 0, QVariant p3 = 0, QVariant p4 = 0) { p1 = 0; p2 = 0; p3 = 0; p4 = 0; }

    void printname(const QString& name);
    void printname(unsigned char ch[], int size, int id, int b = 0);

    inline void setlevel(int l) {level = l;}

    void enableVTMode();
    bool inittable(int row, int col);
    void printtable(int r, int c, int value);

protected:
    Logger();
    virtual ~Logger();
    int level;
    int m_row = 0;
    int m_col = 0;
};

#endif // LOGGER_H

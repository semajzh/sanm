#ifndef METHOD_H
#define METHOD_H
#include <QSharedPointer>
#include <QVector>


class Ground;
class Item;
class Buff;
class Method
{
public:
    Method();
    virtual ~Method();
    virtual int getLuck(Ground* , Item* ) { return luck; }
    virtual int run(Ground* , Item* );
    virtual int run(Ground* , Item* , int );

public:
    static QSharedPointer<Method> getMethod(int id);
    int type = 0;
    int id = 0;
    int luck = 100;
    char name[20] = {0};
    bool zb = false;
};

class ZBMethod : public Method
{
public:
    ZBMethod() { zb = true; }
    virtual int run(Ground* , Item* );

protected:
    virtual bool checkzb(Ground* ground, int obj);

private:
    bool check101(Ground* ground, int obj);
};

#endif // METHOD_H

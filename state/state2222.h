#ifndef STATE2222_H
#define STATE2222_H

#include <QSharedPointer>

class Item;
class Method;
class Ground;
class State2222
{
public:
    State2222();
    virtual ~State2222();
    virtual void run(Ground* ground, int current);

private:
    int methodrun(Ground* ground, Item* item, QSharedPointer<Method> method, float luck);
    bool check011(Ground* ground, int obj);
    bool check012(Ground* ground, int obj);
    bool check001290(Ground* ground, int obj);
    bool check301011(Ground* ground, int obj);
    bool check301071(Ground* ground, int obj);
    bool check301072(Ground* ground, int obj);
    bool check301111(Ground* ground, int obj);
    bool check301112(Ground* ground, int obj);
    bool check401041(Ground* ground, int obj);
    bool check407022(Ground* ground, int obj);

    bool check1010221(Ground* ground, int obj, int method);
    bool check0013320(Ground* ground, int obj);
    bool check2040120(Ground* ground, int obj);
    bool check4040121(Ground* ground, int obj, int method);
    bool check4070221(Ground* ground, int obj, int n);
    bool check4091221(Ground* ground, int obj);
    bool check4091221(Ground* ground, int obj, int );
    bool check4091321(Ground* ground, int obj, int method);
    bool check0102021(Ground* ground, int obj, int );
    bool check0104021(Ground* ground, int obj);
    bool check3120121(Ground* ground, int obj);
    bool check4130122(Ground* ground, int obj, int method);
    bool check4130220(Ground* ground, int obj);
    bool check0150120(Ground* ground, int obj);
};

#endif // STATE2222_H

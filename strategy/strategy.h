#ifndef STRATEGY_H
#define STRATEGY_H
#include <QSharedPointer>

class Ground;
class Item;
class Strategy
{
public:
    Strategy();
    virtual ~Strategy();
    virtual bool run(Ground*, Item*);
    virtual bool run(Ground*, Item*, int);

public:
    static QSharedPointer<Strategy> getStrategy(int id);
    int type;
    int id = 0;
    char name[20] = {0};
};

#endif // STRATEGY_H

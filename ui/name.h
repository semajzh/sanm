#ifndef NAME_H
#define NAME_H
#include <QSharedPointer>

class Ground;
class Group;
class Item;
class Method;
class Strategy;
class Relation;
class Buff;
class Name
{
public:
    Name();
    static void hName(int );
    static void iName(int );
    static void jName(int );
    static void formationName(int id, Ground *ground , int obj);
    static void groupName(int id, Group* );
    static void itemName(int id, Item* );
    static void methodName(int id, QSharedPointer<Method> );
    static void strategyName(int id, QSharedPointer<Strategy> );
    static void relationName(int id, QSharedPointer<Relation> );
    static void buffName(int id, Buff* buff);
};

#endif // NAME_H

#ifndef ITEM_H
#define ITEM_H
#include <QVector>
#include <QString>
#include <QSharedPointer>

//#define CCZ 1
#define XYX 1

class Buff;
class Item
{
public:
    Item();
    static bool getItem(int id, Item& item);

    int id;
    int star = 0;
    int f[8] = {0};
    int g[8] = {0};
    int h[8] = {0};
    float i[20] = {0};
    float j[20] = {0};
    float k[20] = {0};
    float l[20] = {0};
    int methods[4] = {0};
    int strategys[8] = {0};
    char name[20] = {0};
};

#endif // ITEM_H

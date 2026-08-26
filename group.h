#ifndef GROUP_H
#define GROUP_H
#include "item.h"

class Group
{
public:
    Group();

    Item m_item[3];
    int faction = 0;
    int formation = 0;
    int star = 0;
    int reserve = 0;
    char name[20] = {0};

public:
    static bool getGroup(int id, Group&);
    static bool getGroupF(int id, Group& group);
};

#endif // GROUP_H

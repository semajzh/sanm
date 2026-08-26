#include "method4040222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff004.h"
#include "buff/buff112.h"
#include "buff/buff4040222.h"
#include "log/logger.h"

Method4040222::Method4040222()
{
    type = 2222;
    id = 4040222;
    luck = 55;
}

Method4040222::~Method4040222()
{

}

int Method4040222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 120, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x0131 + 0x0100 * item1->g[1], item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        op(ground, item1, obj);
    }
//    op(ground, item1, item1->g[0]);
//    objs = Ground::selectObj(ground, item1->g[0], 5, 1, item1->g[0]);
//    for (int o = 0; o < objs.size(); ++o)
//    {
//        int obj = objs[o];
//        if (o == objs.size() - 1 || item1->g[1] == ground->m_group[obj/10].m_item[obj%10].g[1])
//        {
//            op(ground, item1, objs.front());
//        }
//    }

    return 1;
}

bool Method4040222::op(Ground* ground, Item* item1, int obj)
{
    float point1 = Ground::pointbystar(ground, 200, item1->g[0], id);

    int c = 6; //c31+c32=3+3=6
    if (item1->strategys[0] == 404021 || item1->strategys[1] == 404021 || item1->strategys[2] == 404021)
    {
        c = 3;
    }
    int r = qrand() % c + 1;

    //1=op12, 2=op23, 3=op13, 4=op1, 5=op2, 6=op3

    // op1
    if (r == 1 || r == 3 || r == 4)
    {
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    // op2
    if (r == 1 || r == 2 || r == 5)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff112(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    // op3
    if (r == 2 || r == 3 || r == 6)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4040222(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return true;
}

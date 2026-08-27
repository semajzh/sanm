#include "state21.h"
#include "ground.h"
#include "method/method.h"
#include "relation/relation.h"
#include "strategy/strategy.h"
#ifdef S6
#include "buff/buffs600.h"
#include "buff/buffs602.h"
#endif
#include "buff/buff2080121.h"
#include "log/logger.h"
#include <QDebug>

State21::State21()
{

}

State21::~State21()
{

}

void State21::run(Ground* ground)
{
    Logger::H().print21();

    prepare(ground);
    formation(ground);
    faction(ground);
    star(ground);
    kind(ground);
    technology(ground);
    relation(ground);
    strategy(ground);
    speed(ground);
    method(ground);
}

void State21::prepare(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                ground->m_group[g].m_item[i].i[j] += ground->m_group[g].m_item[i].i[j+4];
				ground->m_group[g].m_item[i].i[j+8] = ground->m_group[g].m_item[i].i[j];
            }
        }
    }
}

void State21::formation(Ground* ground)
{
    for (int g = 0, i = 0; g < 2; ++g)
    {
        float f20801 = 1.0f;
        for (i = 0; i < 3; ++i)
        {
            if (ground->m_group[g].m_item[i].methods[0] == 2080121)
            {
                float point1 = Ground::pointbystar(ground, 70, g*10+i, 2080121);
                f20801 = 1 + point1/100 + ground->m_group[g].m_item[i].i[1] / 720; //0.391666,310.75-28.25=282.5,12,13.10,8,8.73
                break;
            }
        }

        switch (ground->m_group[g].formation)
        {
        case 1: {
            ground->m_group[g].m_item[0].g[1] = 0;
            ground->m_group[g].m_item[1].g[1] = 0;
            ground->m_group[g].m_item[2].g[1] = 0;
            ground->m_group[g].m_item[0].g[2] = 33;
            ground->m_group[g].m_item[0].g[3] = 33;
            ground->m_group[g].m_item[1].g[2] = 34;
            ground->m_group[g].m_item[1].g[3] = 34;
            ground->m_group[g].m_item[2].g[2] = 33;
            ground->m_group[g].m_item[2].g[3] = 33;
            ground->m_group[g].m_item[0].l[0] -= 8 * f20801;
            ground->m_group[g].m_item[1].l[0] -= 8 * f20801;
            ground->m_group[g].m_item[2].l[0] -= 8 * f20801;
        } break;

        case 2: {
            ground->m_group[g].m_item[0].g[1] = 0;
            ground->m_group[g].m_item[1].g[1] = 1;
            ground->m_group[g].m_item[2].g[1] = 1;
            ground->m_group[g].m_item[0].g[2] = 60;
            ground->m_group[g].m_item[0].g[3] = 20;
            ground->m_group[g].m_item[1].g[2] = 20;
            ground->m_group[g].m_item[2].g[2] = 20;
            ground->m_group[g].m_item[0].l[0] -=  6 * f20801;
            ground->m_group[g].m_item[1].k[0] += 12 * f20801;
            ground->m_group[g].m_item[2].k[0] += 12 * f20801;
        } break;

        case 3: {
            ground->m_group[g].m_item[0].g[1] = 1;
            ground->m_group[g].m_item[1].g[1] = 0;
            ground->m_group[g].m_item[2].g[1] = 0;
            ground->m_group[g].m_item[0].g[2] = 20;
            ground->m_group[g].m_item[1].g[2] = 40;
            ground->m_group[g].m_item[1].g[3] = 20;
            ground->m_group[g].m_item[2].g[2] = 40;
            ground->m_group[g].m_item[2].g[3] = 20;
            ground->m_group[g].m_item[0].k[0] += 15 * f20801;
            ground->m_group[g].m_item[1].i[2] += 20 * f20801;
            ground->m_group[g].m_item[2].i[2] += 20 * f20801;
        } break;

        case 4: {
            ground->m_group[g].m_item[0].g[1] = 0;
            ground->m_group[g].m_item[1].g[1] = 0;
            ground->m_group[g].m_item[2].g[1] = 1;
            ground->m_group[g].m_item[0].g[2] = 40;
            ground->m_group[g].m_item[0].g[3] = 20;
            ground->m_group[g].m_item[1].g[2] = 40;
            ground->m_group[g].m_item[1].g[3] = 20;
            ground->m_group[g].m_item[2].g[2] = 20;
            ground->m_group[g].m_item[0].l[0] -=  5 * f20801;
            ground->m_group[g].m_item[1].l[0] -=  5 * f20801;
            ground->m_group[g].m_item[2].j[7] += 40 * f20801;
        } break;

        case 5: {
            ground->m_group[g].m_item[0].g[1] = 1;
            ground->m_group[g].m_item[1].g[1] = 0;
            ground->m_group[g].m_item[2].g[1] = 1;
            ground->m_group[g].m_item[0].g[2] = 20;
            ground->m_group[g].m_item[1].g[2] = 60;
            ground->m_group[g].m_item[1].g[3] = 20;
            ground->m_group[g].m_item[2].g[2] = 20;
            ground->m_group[g].m_item[0].l[0] -=  5 * f20801;
            ground->m_group[g].m_item[1].k[0] += 16 * f20801;
            ground->m_group[g].m_item[2].l[0] -=  5 * f20801;
        } break;

        case 6: {
            ground->m_group[g].m_item[0].g[1] = 0;
            ground->m_group[g].m_item[1].g[1] = 1;
            ground->m_group[g].m_item[2].g[1] = 1;
            ground->m_group[g].m_item[0].g[2] = 60;
            ground->m_group[g].m_item[0].g[3] = 20;
            ground->m_group[g].m_item[1].g[2] = 20;
            ground->m_group[g].m_item[2].g[2] = 20;
            ground->m_group[g].m_item[0].j[9] += 12 * f20801;
            ground->m_group[g].m_item[1].j[0] +=  8 * f20801;
            ground->m_group[g].m_item[1].j[2] +=  8 * f20801;
            ground->m_group[g].m_item[2].j[0] +=  8 * f20801;
            ground->m_group[g].m_item[2].j[2] +=  8 * f20801;
        } break;

        case 7: {
            ground->m_group[g].m_item[0].g[1] = 1;
            ground->m_group[g].m_item[1].g[1] = 1;
            ground->m_group[g].m_item[2].g[1] = 0;
            ground->m_group[g].m_item[0].g[2] = 20;
            ground->m_group[g].m_item[1].g[2] = 20;
            ground->m_group[g].m_item[2].g[2] = 60;
            ground->m_group[g].m_item[2].g[3] = 20;
            ground->m_group[g].m_item[0].j[7] += 25 * f20801;
            ground->m_group[g].m_item[1].j[7] += 25 * f20801;
            ground->m_group[g].m_item[2].l[0] -=  8 * f20801;
        } break;

        case 8: {
            ground->m_group[g].m_item[0].g[1] = 0;
            ground->m_group[g].m_item[1].g[1] = 1;
            ground->m_group[g].m_item[2].g[1] = 0;
            ground->m_group[g].m_item[0].g[2] = 40;
            ground->m_group[g].m_item[0].g[3] = 20;
            ground->m_group[g].m_item[1].g[2] = 20;
            ground->m_group[g].m_item[2].g[2] = 40;
            ground->m_group[g].m_item[2].g[3] = 20;
            ground->m_group[g].m_item[0].k[0] += 14 * f20801;
            ground->m_group[g].m_item[1].l[0] -=  5 * f20801;
            ground->m_group[g].m_item[2].k[0] += 14 * f20801;
        } break;

        default:
            break;
        }
    }
}

void State21::faction(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        int f[5] = {0};
        for (int i = 0; i < 3; ++i)
        {
            ++f[ground->m_group[g].m_item[i].f[0]];
        }
        float faction = 0;
        if (f[1] > 2 || f[2] > 2 || f[3] > 2 || f[4] > 2)
        {
            faction = 10;
        }
        else if (f[1] > 1 || f[2] > 1 || f[3] > 1 || f[4] > 1)
        {
            faction = 5;
        }
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[g].m_item[i].i[0] *= 1 + faction/100.0f;
            ground->m_group[g].m_item[i].i[1] *= 1 + faction/100.0f;
            ground->m_group[g].m_item[i].i[2] *= 1 + faction/100.0f;
            ground->m_group[g].m_item[i].i[3] *= 1 + faction/100.0f;
        }
    }
}

void State21::star(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[g].m_item[i].k[0] += ground->m_group[g].m_item[i].star + (ground->m_group[g].m_item[i].star > 0 ? qrand() % 5 : 0);
            ground->m_group[g].m_item[i].l[0] -= ground->m_group[g].m_item[i].star;
        }
    }
}

void State21::kind(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        int n[4] = {0};
        for (int i = 0; i < 3; ++i)
        {
            ++n[ground->m_group[g].m_item[i].g[4]];
        }
        for (int i = 0; i < 3; ++i)
        {
            if (n[0] > 1) //g
            {
                ground->m_group[g].m_item[i].k[0] += 0.5f*(n[0]*3+1); //0 or 0.5*7 o r0.5*10
            }
            else if (n[1] > 1) //d
            {
                ground->m_group[g].m_item[i].l[0] += Ground::addln(ground, g*10+i, 0, -0.5f*(n[1]*3+1));
            }
            else if (n[2] > 1) //q
            {
                ground->m_group[g].m_item[i].k[0] += 0.2f*(n[2]*3+1);
                ground->m_group[g].m_item[i].l[0] += Ground::addln(ground, g*10+i, 0, -0.3f*(n[2]*3+1));
            }
            else if (n[3] > 1) //j
            {
                ground->m_group[g].m_item[i].k[0] += 0.3f*(n[3]*3+1);
                ground->m_group[g].m_item[i].l[0] += Ground::addln(ground, g*10+i, 0, -0.2f*(n[3]*3+1));
            }
        }

#ifdef S6
        if (ground->m_group[g].m_item[0].kind == 0 || ground->m_group[g].m_item[1].kind == 0 || ground->m_group[g].m_item[2].kind == 0)
        {
            int pos = (ground->m_group[g].m_item[0].kind == 0) ? g*10 : ((ground->m_group[g].m_item[1].kind == 0) ? g*10+1 : g*10+2);
            QVector<int> objs = Ground::selectObjN(ground, pos, 0x13);
            for (int obj : objs)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new BuffS600A(pos, obj, 600));
                Ground::addBuff(ground, ground->buff[3][obj], buff);
                Logger::H().printbuff(ground, &ground->m_group[pos/10].m_item[pos%10], &ground->m_group[obj/10].m_item[obj%10], buff.data());
            }
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new BuffS600B(pos, pos, 600));
            Ground::addBuff(ground, ground->buff[3][pos], buff);
            Logger::H().printbuff(ground, &ground->m_group[pos/10].m_item[pos%10], &ground->m_group[pos/10].m_item[pos%10], buff.data());
        }
        else if (ground->m_group[g].m_item[0].kind == 1 || ground->m_group[g].m_item[1].kind == 1 || ground->m_group[g].m_item[2].kind == 1)
        {
            ;
        }
        else if (ground->m_group[g].m_item[0].kind == 2 || ground->m_group[g].m_item[1].kind == 2 || ground->m_group[g].m_item[2].kind == 2)
        {
            int pos = (ground->m_group[g].m_item[0].kind == 0) ? g*10 : ((ground->m_group[g].m_item[1].kind == 0) ? g*10+1 : g*10+2);
            QVector<int> objs = Ground::selectObjN(ground, pos, 0x13);
            for (int obj : objs)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new BuffS602(pos, obj, 602));
                Ground::addBuff(ground, ground->buff[3][obj], buff);
                Logger::H().printbuff(ground, &ground->m_group[pos/10].m_item[pos%10], &ground->m_group[obj/10].m_item[obj%10], buff.data());
            }
        }
        else if (ground->m_group[g].m_item[0].kind == 3 || ground->m_group[g].m_item[1].kind == 3 || ground->m_group[g].m_item[2].kind == 3)
        {
            ;
        }
#endif
    }
}

void State21::technology(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[g].m_item[i].i[0] += 20;
            ground->m_group[g].m_item[i].i[1] += 20;
            ground->m_group[g].m_item[i].i[2] += 20;
            ground->m_group[g].m_item[i].i[3] += 20;
            ground->m_group[g].m_item[i].k[0] += 10;
            ground->m_group[g].m_item[i].l[0] -= 10;
        }
    }
}

void State21::relation(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int r = 100; r < 600; ++r)
        {
            QSharedPointer<Relation> relation = Relation::getRelation(r);
            if (!relation.isNull())
            {
                relation->run(ground, g);
            }
        }
    }
}

void State21::strategy(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            Item& item = ground->m_group[g].m_item[i];
            if (item.h[0] <= 0)
            {
                continue;
            }
            for (int s : item.strategys)
            {
                QSharedPointer<Strategy> strategy = Strategy::getStrategy(s);
                if (!strategy.isNull() && strategy->id > 0)
                {
                    strategy->run(ground, &item);
                }
            }
        }
    }
}

void State21::speed(Ground* ground)
{
    int speed[6] = {0};
    for (int i = 0; i < 3; ++i)
    {
        speed[i] = ground->m_group[0].m_item[i].i[3];
    }
    for (int i = 0; i < 3; ++i)
    {
        speed[i+3] = ground->m_group[1].m_item[i].i[3];
    }
    QString str;
    for (int i = 0; i < 6; ++i)
    {
        bool f = true;
        for (int j = 0; j < str.length(); ++j)
        {
            if (speed[i] > speed[str.mid(j, 1).toInt()])
            {
                str.insert(j, QString::number(i));
                f = false;
                break;
            }
        }
        if (f)
        {
            str.append(QString::number(i));
        }
    }
    for (int i = 0; i < 6; ++i)
    {
        int n = str.mid(i, 1).toInt();
        ground->m_sort[i] = (n >= 3) ? (10+n-3) : (n);
    }
}

void State21::method(Ground* ground)
{
    for (int obj : ground->m_sort)
    {
        Item& item = ground->m_group[obj/10].m_item[obj%10];
        if (item.h[0] <= 0)
        {
            continue;
        }
        for (int m : item.methods)
        {
            if (m == 88324)
            {
                item.j[7] += 10;
            }
            if (m % 100 == 20 || m % 100 == 21)
            {
                QSharedPointer<Method> method = Method::getMethod(m);
                if (!method.isNull() && method->id > 0)
                {
                    method->run(ground, &item);
                }
            }
        }
    }
}

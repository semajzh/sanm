#include "logger1.h"
#include "../ui/name.h"
#include "ground.h"
#include "group.h"
#include "item.h"
#include "method/method.h"
#include "relation/relation.h"
#include "strategy/strategy.h"
#include "buff/buff.h"
#include "QFile"

Logger1::Logger1()
{
    level = 3;
}

Logger1::~Logger1()
{

}

void Logger1::print22(Ground* ground)
{
    if (level < 2)
    {
        return;
    }
    printf("r%d\n", ground->m_round);
    if (level < 3)
    {
        return;
    }

//    for (int j = 0; j < 6; ++j)
    for (int g = 0; g < 2; ++g)
        for (int i = 0; i < 3; ++i)
    {
        int c = g*10+i;
//            int c = ground->m_sort[j];
//            int g = c / 10;
//            int i = c % 10;
        printf("%02d:", c);
        for (int k = 0; k < 4; ++k)
        {
                printf(" %.02f", ground->m_group[g].m_item[i].i[k]);
        }
        printf(" %.02f(%.02f)(%.02f) %.02f(%.02f)(%.02f) ",
                ground->m_group[g].m_item[i].k[0], ground->m_group[g].m_item[i].k[1], ground->m_group[g].m_item[i].k[2],
                ground->m_group[g].m_item[i].l[0], ground->m_group[g].m_item[i].l[1], ground->m_group[g].m_item[i].l[2]);
//        printf(" %.02f", ground->m_group[g].m_item[i].j[7]);
        printf(" %d\n", ground->m_group[g].m_item[i].h[0]);
    }
}

void Logger1::print222(Ground* , int current)
{
    if (level < 3)
    {
        return;
    }

    printf("%02d\n", current);
}

void Logger1::print223(Ground* )
{
    if (level < 3)
    {
        return;
    }

    printf("223\n");
}

void Logger1::printmethod(Ground* , Item* item, Method* method, int reason)
{
    if (level < 3)
    {
        return;
    }

//    if (method->type != 2222)
//        return;
    printf("%02d METHOD-%d %d\n", item->g[0], method->id, reason);
}

void Logger1::printmethodzb(Ground* , Item* item, Method* method, int reason)
{
    if (level < 3)
    {
        return;
    }

    if (reason == 0)
    {
        printf("%02d METHOD-%d CACHE\n", item->g[0], method->id);
    }
    else if (reason == 1)
    {
        printf("%02d METHOD-%d SKIP\n", item->g[0], method->id);
    }
}

void Logger1::printrelation(Ground *, QVector<int>& objs, Relation* relation)
{
    if (level < 3)
    {
        return;
    }

    printf("RELATION-%03d:", relation->id);
    for (int obj : objs)
    {
        printf(" %02d", obj);
    }
    printf("\n");
}

void Logger1::printstrategy(Ground *, Item* item, Strategy* strategy)
{
    if (level < 3)
    {
        return;
    }

    printf("%02d STRATEGY-%d\n", item->g[0], strategy->id);
}

void Logger1::printact(Ground* , Item* item1, Item* item2, int method, int point, int bj02)
{
    if (level < 2)
    {
        return;
    }

//    if (method != 2223)
//        return;
    printf("[%d] - ", method);
    printf("%02d %02d %d%s (%d)\n", item1->g[0], item2->g[0], point, (bj02 > 0) ? "!" : "", item2->h[0]);
}

void Logger1::printactmiss(Ground* , Item* item1, Item* item2)
{
    if (level < 3)
    {
        return;
    }

//    if (method != 2223)
//        return;
    printf("%02d %02d miss\n", item1->g[0], item2->g[0]);
}

void Logger1::printhlo(Ground* , Item* item1, Item* item2, int method, int point)
{
    if (level < 2)
    {
        return;
    }

    printf("[%d] + ", method);
    printf("%02d %02d %d %d/%d/%d/%d\n", item1->g[0], item2->g[0], point, item2->h[0], item2->h[1], item2->h[2], item2->h[0]+item2->h[1]+item2->h[2]);
}

void Logger1::printbuff(Ground* , Item* item1, Item* item2, Buff* buff)
{
    if (level < 3)
    {
        return;
    }

    return;
    printf("%02d-%s-%02d\n", item1->g[0], typeid(*buff).name(), item2->g[0]);
}

void Logger1::printbuffenter(Ground* , int src, int des, Buff* buff)
{
    if (level < 3)
    {
        return;
    }

    Name::buffName(buff->id, buff);
    printf("%02d %02d BUFF-%d enter\n", src, des, buff->id);
}

void Logger1::printbuffexit(Ground* , int src, int des, Buff* buff)
{
    if (level < 3)
    {
        return;
    }

    printf("%02d %02d BUFF-%d exit\n", src, des, buff->id);
}

void Logger1::printbuffupdate(Ground* , int src, int des, Buff* buff)
{
    if (level < 3)
    {
        return;
    }

    printf("%02d %02d BUFF-%d update\n", src, des, buff->id);
}

void Logger1::printbuffrun(Ground* , int src, int des, Buff* buff)
{
    if (level < 3)
    {
        return;
    }

    printf("%02d BUFF-%d %02d run\n", src, buff->id, des);
}

void Logger1::printresult(Ground* ground)
{
    if (level == 1)
    {
        static const int ROW = 10;
        static const int COL = 7;
        static bool binit = Logger::H().inittable(ROW, COL-1);
        if (!binit)
        {
            return;
        }
        static int vs[ROW][COL] = {
            {  1, 0, 0, 0, 0, 0, 0},
            {  2, 0, 0, 0, 0, 0, 0},
            {  3, 0, 0, 0, 0, 0, 0},
            {  4, 0, 0, 0, 0, 0, 0},
            {  5, 0, 0, 0, 0, 0, 0},
            {  6, 0, 0, 0, 0, 0, 0},
            {  7, 0, 0, 0, 0, 0, 0},
            {  8, 0, 0, 0, 0, 0, 0},
            {'+', 0, 0, 0, 0, 0, 0},
            {'=', 0, 0, 0, 0, 0, 0}
        };
        int row = (ground->vs > 0) ? 8 : (ground->m_round);
        int col = 0;

        if (ground->m_group[0].m_item[0].h[0] == 0 && ground->m_group[0].m_item[1].h[0] == 0 && ground->m_group[0].m_item[2].h[0] == 0)
        {
            if (ground->m_group[1].m_item[0].h[0] + ground->m_group[1].m_item[1].h[0] + ground->m_group[1].m_item[2].h[0] > 25000)
            {
                col = 6;
            }
            else if (ground->m_group[1].m_item[0].h[0] + ground->m_group[1].m_item[1].h[0] + ground->m_group[1].m_item[2].h[0] < 10000)
            {
                col = 4;
            }
            else
            {
                col = 5;
            }
        }
        else if (ground->m_group[1].m_item[0].h[0] == 0 && ground->m_group[1].m_item[1].h[0] == 0 && ground->m_group[1].m_item[2].h[0] == 0)
        {
            if (ground->m_group[0].m_item[0].h[0] + ground->m_group[0].m_item[1].h[0] + ground->m_group[0].m_item[2].h[0] > 25000)
            {
                col = 1;
            }
            else if (ground->m_group[0].m_item[0].h[0] + ground->m_group[0].m_item[1].h[0] + ground->m_group[0].m_item[2].h[0] < 10000)
            {
                col = 3;
            }
            else
            {
                col = 2;
            }
        }
        else
        {
            if (ground->m_group[0].m_item[0].h[0] + ground->m_group[0].m_item[1].h[0] + ground->m_group[0].m_item[2].h[0] -
                ground->m_group[1].m_item[0].h[0] + ground->m_group[1].m_item[1].h[0] + ground->m_group[1].m_item[2].h[0] > 20000)
            {
//                ++v1;
            }
            else if (ground->m_group[1].m_item[0].h[0] + ground->m_group[1].m_item[1].h[0] + ground->m_group[1].m_item[2].h[0] -
                     ground->m_group[0].m_item[0].h[0] + ground->m_group[0].m_item[1].h[0] + ground->m_group[0].m_item[2].h[0] > 20000)
            {
//                ++v3;
            }
            else
            {
//                ++v2;
            }
        }
//        printf("\r%04d/%04d/%04d_%04d/%04d/%04d_%04d/%04d/%04d=%04d", w1, w2, w3, v1, v2, v3, l3, l2, l1, w1+w2+w3+v1+v2+v3+l3+l2+l1);
//        printf("\r%04d/%04d/%04d<%d>%04d/%04d/%04d=%05d ", w1, w2, w3, ground->vs, l3, l2, l1, w1+w2+w3+l3+l2+l1);
        if (col != 0)
        {
            Logger::H().printtable(row, col, ++vs[row-1][col]);
            Logger::H().printtable(ROW, col, ++vs[ROW-1][col]);
        }
    }
    else
    {
#if 1
    for (int i = 0; i < 6; ++i)
    {
        int pos = i/3*10+i%3;
        int act = 0, hlo = 0;
        printf("%02d[%d]", pos, ground->data[pos].round);
        {
            printf("\th[0]\t------\t");
            QString str = QString::asprintf("\th[0]\t------\t");
            if (str.length() < 14)
            {
                printf("\t");
            }
            printf("%5d %5d %5d %5d %5d %5d %5d %5d \n",
                    ground->data[pos].h0[1], ground->data[pos].h0[2], ground->data[pos].h0[3], ground->data[pos].h0[4],
                    ground->data[pos].h0[5], ground->data[pos].h0[6], ground->data[pos].h0[7], ground->data[pos].h0[8]);
        }
        QMapIterator<int, int> j(ground->data[pos].act[0]);
        while (j.hasNext())
        {
            j.next();
            act += j.value();
            printf("\tact\t%d(%d)\t", j.key(), ground->data[pos].actcount[j.key()]);
            QString str = QString::asprintf("\tact\t%d(%d)\t", j.key(), ground->data[pos].actcount[j.key()]);
            if (str.length() < 14)
            {
                printf("\t");
            }
            printf("%5d %5d %5d %5d %5d %5d %5d %5d = %d\n",
                    ground->data[pos].act[1].value(j.key()), ground->data[pos].act[2].value(j.key()), ground->data[pos].act[3].value(j.key()), ground->data[pos].act[4].value(j.key()),
                    ground->data[pos].act[5].value(j.key()), ground->data[pos].act[6].value(j.key()), ground->data[pos].act[7].value(j.key()), ground->data[pos].act[8].value(j.key()),
                    j.value());
        }
        QMapIterator<int, int> l(ground->data[pos].hlo[0]);
        while (l.hasNext())
        {
            l.next();
            hlo += l.value();
            printf("\thlo\t%d(%d)\t", l.key(), ground->data[pos].hlocount[l.key()]);
            QString str = QString::asprintf("\thlo\t%d(%d)\t", l.key(), ground->data[pos].hlocount[l.key()]);
            if (str.length() < 14)
            {
                printf("\t");
            }
            printf("%5d %5d %5d %5d %5d %5d %5d %5d = %d\n",
                    ground->data[pos].hlo[1].value(l.key()), ground->data[pos].hlo[2].value(l.key()), ground->data[pos].hlo[3].value(l.key()), ground->data[pos].hlo[4].value(l.key()),
                    ground->data[pos].hlo[5].value(l.key()), ground->data[pos].hlo[6].value(l.key()), ground->data[pos].hlo[7].value(l.key()), ground->data[pos].hlo[8].value(l.key()),
                    l.value());
        }
        printf("\t%d/%d\n", act, hlo);
    }

    int a0, a1, b0, b1, c0, c1;
    a0 = ground->m_group[0].m_item[0].h[0] + ground->m_group[0].m_item[1].h[0] + ground->m_group[0].m_item[2].h[0];
    a1 = ground->m_group[1].m_item[0].h[0] + ground->m_group[1].m_item[1].h[0] + ground->m_group[1].m_item[2].h[0];
    b0 = ground->m_group[0].m_item[0].h[1] + ground->m_group[0].m_item[1].h[1] + ground->m_group[0].m_item[2].h[1];
    b1 = ground->m_group[1].m_item[0].h[1] + ground->m_group[1].m_item[1].h[1] + ground->m_group[1].m_item[2].h[1];
    c0 = ground->m_group[0].m_item[0].h[2] + ground->m_group[0].m_item[1].h[2] + ground->m_group[0].m_item[2].h[2];
    c1 = ground->m_group[1].m_item[0].h[2] + ground->m_group[1].m_item[1].h[2] + ground->m_group[1].m_item[2].h[2];
    printf("[%d] %d/%d/%d %c %d/%d/%d\n\n", ground->m_round, a0, b0, c0, (c0<c1) ? '>' : '<', a1, b1, c1);
#endif
    }
}

void Logger1::printcustom(const char* format, ...)
{
    if (level < 3)
    {
        return;
    }

    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void Logger1::printcustom(Ground* , int id, QVariant p1, QVariant p2, QVariant p3, QVariant )
{
    if (level < 3)
    {
        return;
    }

    switch (id)
    {
    case 102: {
        printf("[B102] %02d(%d)\n", p1.toInt(), p2.toInt());
    } break;

    case 106: {
        printf("[B106] %02d(%d)\n", p1.toInt(), p2.toInt());
    } break;

    case 2223: {
        printf("[2223] double\n");
    } break;

    case 3332: {
        printf("%02d METHOD-3332\n", p1.toInt());
    } break;

    case 16120: {
        printf("[16120] 2223\n");
    } break;

    case 17822: {
        printf("%02d %02d BUFF-17822 (%d)\n", p1.toInt(), p2.toInt(), p3.toInt());
    } break;

    case 50220: {
        printf("[50220] 2223\n");
    } break;

    case 70124: {
        printf("[70124] double\n");
    } break;

    case 88324: {
        printf("%02d BUFF-88324 (%d)\n", p1.toInt(), p2.toInt());
    } break;

    case 401058: {
        printf("[401058] %d try 2223\n", p1.toInt());
    } break;

    case 1010221:
    case 4091321:
    case 4130122: {
        printf("!! METHOD-%d again\n", id);
    } break;

    case 2050121: {
        Logger::H().printcustom("[2050121] %d\n", p2.toInt());
    } break;

    case 30301201: {
        Logger::H().printcustom("[3030120] %d 0->1\n", p1.toInt());
    } break;

    case 30301202: {
        Logger::H().printcustom("[3030120] %d -> %d\n", p1.toInt(), p2.toInt());
    } break;

    case 4060121: {
        printf("[4060121] 2223\n");
    } break;


    case 9070124: {
        printf("[9070124] double\n");
    } break;

    default:
        break;
    }
}


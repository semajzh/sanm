#ifndef GROUND_H
#define GROUND_H
#include "group.h"
#include <QMap>
#include <QSet>
#include <QString>
#include <QDebug>
#include <QByteArray>

#define J02_FLAG_1 100000
#define J02_FLAG_2 200000

class Data
{
public:
    QMap<int, int> act[9];
    QMap<int, int> actcount;
    QMap<int, int> hlo[9];
    QMap<int, int> hlocount;
    int h0[9];
    int acted;
    int actedcount;
    int round = 8;

    int actrc; //2050121
};

class Ground
{
public:
    Ground();

    int vs = 0;
    int m_round = 0;
    int team[2] = {0};
    Group m_group[2];
    int m_sort[6] = {0};
    int target2223 = -1;
    QMap<int, Data> data;
    /*
     *            enter    exit        run    info
     * buff[0]    +        -           x      i,j,k,l
     * buff[1]    +(r)     -/2221(r=0) *
     * buff[3]    +        -           *      check
     * buff[5]    +        -           221
     * buff[2]    +        -           2221
     * buff[9]    +        -           2225
     * buff[4]    +        -           223
     * buff[6]    +        -/223       *
     * buff[7]    221      -           223
     * buff[8]    +        -/223       2225
     */
    QMap<int, QVector<QSharedPointer<Buff>>> buff[10];
    QMap<int, QSet<int>> exceptions;

public:
    bool isover();

public:
    static float getMaxi(Ground* ground, int pos);
    static int getMaxiIndex(Ground* ground, int pos);
//    static int selectObjMaxh0(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMaxi0(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMaxi1(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMaxi2(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMaxi3(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMinh0(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMini0(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMini1(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMini2(Ground* ground, int pos, int fof, bool b017 = false);
//    static int selectObjMini3(Ground* ground, int pos, int fof, bool b017 = false);
    static QVector<int> selectObjN(Ground* ground, int obj, int criteria, int except = -1);
//    static QVector<int> selectObj(Ground* ground, int pos, int n, int fof, int except = -1);
//    static QVector<int> selectObjIn(Ground* ground, int pos, int n, int except = -1);
//    static QVector<int> selectObjEx(Ground* ground, int pos, int n, int except = -1);
//    static QVector<int> selectObjg1(Ground* ground, int obj, int g1, int n, int fof, int except = -1);
//    static QVector<int> selectObjAll(Ground* ground, int pos, int n, int except = -1);
//    static QVector<int> selectObjImpl(QVector<Item>& objs1, int n);
    static int actbr(Ground* ground, Item* item1, Item* item2, int method, float point, bool bi2 = false, float j0 = 0, float k12 = 0, float l12 = 0);
    static int actml(Ground* ground, Item* item1, Item* item2, int method, float point, float j2 = 0, float k12 = 0, float l12 = 0);
    static int acttb(Ground* ground, Item* item1, Item* item2, int method, float ix, float point = 0.0f);
    static int actcd(Ground* ground, Item* item1, Item* item2, int method, float point);
    static int hloi1(Ground* ground, Item* item1, Item* item2, int method, float point);
    static int hloi(Ground* ground, Item* item1, Item* item2, int method, float point, float i);
    static int hlo(Ground* ground, Item* item1, Item* item2, int method, float point);
    static void addBuff(Ground* ground, QVector<QSharedPointer<Buff>> &buffs, QSharedPointer<Buff> &buff);
//    static void addBuff(Ground* ground, QVector<QSharedPointer<Buff>> &buffs, QSharedPointer<Buff> &buff);
    static void exenter(Ground* ground, int src, int des, int id);
    static void exexit(Ground* ground, int src, int des, int id);
    static void exupdate(Ground* ground, int src, int des, int id);
    static bool excheck(Ground* ground, int src, int des, int id);
    static int exsize(Ground* ground, int obj, int type = 0);
    static void exremove(Ground* ground, int obj, int n);
    static float addin(Ground* ground, int obj, int n, float point);
    static void addi2(Ground* ground, int obj, float point);
    static float addj9(Ground* ground, int obj, int n, float point);
    static float addj17(Ground* ground, int obj, int n, float point);
    static float addjn(Ground* ground, int obj, int n, float point);
    static float addkn(Ground* ground, int obj, int n, float point);
    static float addln(Ground* ground, int obj, int n, float point);
    static float addbyix(Ground* ground, float base, float ix, float d = 643.75);
    static float pointbystar(Ground* ground, float base, int obj, int method, int op = 1);
    static float pointbyh0(Ground* ground, float base, int obj1, int obj2);
    static bool run2223(Ground* ground, int obj1, int obj2, bool b2224, bool b113);
    static bool run3332(Ground* ground, int obj1, int obj2, bool b113);
    static bool run2224(Ground* ground, Item* item1, int method);
    static void checkbuff(Ground* ground, int index, int obj, void (*func)(Ground*, QSharedPointer<Buff>));
    static void clearbuff(Ground* ground, int pos, int count);
    static float getDataHlo(Ground* ground, int obj);
};

#endif // GROUND_H

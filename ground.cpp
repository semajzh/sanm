#include "ground.h"
#include "method/method.h"
#include "method/method2223.h"
#include "method/method3332.h"
#include "buff/buff016.h"
#include "buff/buff020.h"
#include "buff/buff102.h"
#include "buff/buff106.h"
#include "buff/buff001020.h"
#include "buff/buff001100.h"
#include "buff/buff001300.h"
#include "buff/buff001440.h"
#include "buff/buff001450.h"
#include "buff/buff001650.h"
#include "buff/buff001660.h"
#include "buff/buff009000.h"
#include "buff/buff009010.h"
#include "buff/buff009020.h"
#include "buff/buff009030.h"
#include "buff/buff201022.h"
#include "buff/buff201023.h"
#include "buff/buff201072.h"
#include "buff/buff201081.h"
#include "buff/buff301026.h"
#include "buff/buff301091.h"
#include "buff/buff301131.h"
#include "buff/buff303012.h"
#include "buff/buff303018.h"
#include "buff/buff401031.h"
#include "buff/buff401037.h"
#include "buff/buff401056.h"
#include "buff/buff403012.h"
#include "buff/buff407021.h"
#include "buff/buff409011.h"
#include "buff/buff411021.h"
#include "buff/buff0010320.h"
#include "buff/buff0016620.h"
#include "buff/buff0011721.h"
#include "buff/buff0013221.h"
#include "buff/buff0016420.h"
#include "buff/buff0020820.h"
#include "buff/buff0030120.h"
#include "buff/buff0050220.h"
#include "buff/buff0070124.h"
#include "buff/buff0088324.h"
#include "buff/buff0100120.h"
#include "buff/buff0100220.h"
#include "buff/buff0100320.h"
#include "buff/buff0101021.h"
#include "buff/buff0102021.h"
#include "buff/buff0110120.h"
#include "buff/buff0110321.h"
#include "buff/buff0120321.h"
#include "buff/buff0130121.h"
#include "buff/buff0150221.h"
#include "buff/buff1010121.h"
#include "buff/buff1010620.h"
#include "buff/buff1010721.h"
#include "buff/buff1010821.h"
#include "buff/buff1011021.h"
#include "buff/buff1011320.h"
#include "buff/buff1020120.h"
#include "buff/buff1020221.h"
#include "buff/buff1040121.h"
#include "buff/buff1080121.h"
#include "buff/buff1091321.h"
#include "buff/buff1100121.h"
#include "buff/buff2010321.h"
#include "buff/buff2010420.h"
#include "buff/buff2010520.h"
#include "buff/buff2011020.h"
#include "buff/buff2020222.h"
#include "buff/buff2030221.h"
#include "buff/buff2091121.h"
#include "buff/buff2160121.h"
#include "buff/buff3010221.h"
#include "buff/buff3011221.h"
#include "buff/buff3030120.h"
#include "buff/buff3091120.h"
#include "buff/buff3091220.h"
#include "buff/buff3120121.h"
#include "buff/buff3120221.h"
#include "buff/buff3150121.h"
#include "buff/buff3150221.h"
#include "buff/buff4010520.h"
#include "buff/buff4010722.h"
#include "buff/buff4010920.h"
#include "buff/buff4020221.h"
#include "buff/buff4040121.h"
#include "buff/buff4070121.h"
//#include "buff/buff4070221.h"
#include "buff/buff4090121.h"
#include "buff/buff4110220.h"
#include "buff/buff9070124.h"
#include "buff/buffs600.h"
#include "buff/buffs602.h"
#include "log/logger.h"
#include <cmath>

static void selectObj0001(Ground* ground, QVector<int>& objs, int );
static void selectObj0010(Ground* ground, QVector<int>& objs, int , int );
static void selectObj0100(Ground* ground, QVector<int>& objs, int );
static void selectObj1000(Ground* ground, QVector<int>& objs, int );
//static QVector<int> selectObjRange(Ground* ground, int pos, int fof, bool b017);
//static int actedbefore(Ground* ground, Item* item1, Item* item2, int method, float &point);
static int act(Ground* ground, Item* item1, Item* item2, int method, float &point, int j02, bool tb = false);
//static int actedafter(Ground* ground, Item* item1, Item* item2, int method, float &point);
static void actclear(Ground* ground, Item* item);
static QVector<int> Cmn(QVector<int> m, int n);

static bool checkj8(Ground* ground, int obj1, int obj2);
static bool checkj9(Ground* ground, Item* item1, Item* item2);
static bool check011(Ground* ground, int obj);
static bool check015(Ground* ground, int obj, float &point);
static bool check016(Ground* ground, int obj, float& point);
static bool check017(Ground* ground, int obj);
static bool check102(Ground* ground, int obj, float& point);
static bool check103(Ground* ground, int obj);
static bool check104(Ground* ground, int obj);
static bool check106(Ground* ground, int obj1, int obj2, float& point);
//static float check600(Ground* ground, int pos1, int pos2);
//static bool check600B(Ground* ground, int obj);
//static float check602(Ground* ground, int obj, int method);

// strategy
static bool check001020(Ground* ground, int obj);
static float check001100(Ground* ground, int pos1, int pos2);
static bool check001210(Ground* ground, int obj);
static bool check001300(Ground* ground, int obj);
static bool check001420(Ground* ground, int obj);
static bool check001440(Ground* ground, int obj1, int obj2);
static bool check001450(Ground* ground, int obj);
static bool check001490(Ground* ground, int obj);
static bool check001610(Ground* ground, int obj);
static float check001650(Ground* ground, int , int );
static float check001660(Ground* ground, int , int );
static bool check001690(Ground* ground, int obj);
static bool check001700(Ground* ground, int obj);
static bool check001730(Ground* ground, int obj);
static bool check001740(Ground* ground, int obj);
static bool check001750(Ground* ground, int obj);
static bool check001770(Ground* ground, int obj);
static bool check009000(Ground* ground, int obj1, int obj2, int method, float point);
static bool check009010(Ground* ground, int obj, int point);
static bool check009020(Ground* ground, int obj);
static float check009030(Ground* ground, int obj);

static bool check106011(Ground* ground, int obj);
static bool check201011(Ground* ground, int obj);
static bool check201021(Ground* ground, int obj);
static bool check201022(Ground* ground, int obj1, int obj2);
static float check201022(Ground* ground, int obj1, int obj2, int );
static float check201023(Ground* ground, int obj1, int obj2);
static bool check201072(Ground* ground, int obj1, int obj2);
static float check201081(Ground* ground, int obj, int );
static bool check301026(Ground* ground, int obj);
static bool check301081(Ground* ground, int obj);
static bool check301082(Ground* ground, int obj);
static float check301091(Ground* ground, int obj1, int obj2);
static bool check301102(Ground* ground, int obj);
static bool check301121(Ground* ground, int obj);
static bool check301131(Ground* ground, int obj1, int obj2);
static float check303012(Ground* ground, int obj);
static bool check303012(Ground* ground, int obj, float );
static bool check303016(Ground* ground, int obj);
static float check303018(Ground* ground, int obj);
static bool check401031(Ground* ground, int obj1, int obj2);
static float check401037(Ground* ground, int pos1, int pos2);
static bool check401056(Ground* ground, int obj, int method, float point);
static bool check401131(Ground* ground, int obj);
static bool check401151(Ground* ground, int obj);
static bool check402021(Ground* ground, int obj);
static bool check403012(Ground* ground, int obj);
static bool check407021(Ground* ground, int obj1, int obj2);
static float check409011(Ground* ground, int obj1, int obj2);
static float check411021(Ground* ground, int obj1, int obj2);

// method
static bool check0010320(Ground* ground, int obj1, int obj2, float point);
static bool check0011721(Ground* ground, int obj, float& point);
static bool check0012620(Ground* ground, int obj);
static bool check0013221(Ground* ground, int obj);
static bool check0014120(Ground* ground, int obj);
static bool check0014220(Ground* ground, int);
static bool check0014321(Ground* ground, int);
static bool check0014420(Ground* ground, int);
static bool check0016120(Ground* ground, int);
static bool check0016220(Ground* ground, int);
static bool check0016420(Ground* ground, int);
static bool check0016620(Ground* ground, int obj, float point);
static bool check0020820(Ground* ground, int obj, int type);
static bool check0030120(Ground* ground, int);
static bool check0050220(Ground* ground, int obj);
static bool check0050220(Ground* ground, int , int );
static bool check0070124(Ground* ground, int obj, int );
static bool check0088121(Ground* ground, int obj);
static bool check0088324(Ground* ground, int obj, Item** item2);
static bool check0100120(Ground* ground, int obj1, int obj2);
static bool check0100220(Ground* ground, int obj1, int obj2);
static bool check0100320(Ground* ground, int obj, int );
static bool check0101021(Ground* ground, int obj, float point);
static bool check01010212(Ground* ground, int obj);
static bool check0102021(Ground* ground, int obj, int );
static bool check0104021(Ground* ground, int obj);
static bool check0110120(Ground* ground, int obj);
static bool check0110321(Ground* ground, int obj1, int obj2, int type);
static bool check0120321(Ground* ground, int obj1, int obj2);
static bool check0130121(Ground* ground, int obj1, int obj2, int method);
static bool check0140221(Ground* ground, int obj);
static bool check0150221(Ground* ground, int obj, int method);

static bool check1010121(Ground* ground, int obj);
static bool check1010320(Ground* ground, int obj);
static bool check1010420(Ground* ground, int obj);
static bool check1010620(Ground* ground, int pos1, int pos2);
static bool check1010721(Ground* ground, int obj, int method);
static bool check1010821(Ground* ground, int obj, float& point);
static float check1011021(Ground* ground, int obj1, int obj2);
static bool check1011320(Ground* ground, int obj1, int obj2);
static bool check1020120(Ground* ground, int obj1, int obj2, float point);
static bool check1020221(Ground* ground, int pos1, int pos2, float& point);
static bool check1040121(Ground* ground, int obj);
static bool check1060120(Ground* ground, int obj);
static bool check1080121(Ground* ground, int obj1, int obj2);
static bool check1091120(Ground* ground, int obj);
static bool check1091321(Ground* ground, int obj1, int obj2);
static bool check1100121(Ground* ground, int obj, float point);
static bool check2010321(Ground* ground, int obj);
static bool check2010420(Ground* ground, int obj);
static bool check2010520(Ground* ground, int obj1, int obj2);
static bool check2020222(Ground* ground, int obj1, int obj2, int method);
static bool check2030221(Ground* ground, int obj, float point);
static bool check2091121(Ground* ground, int obj, Item** item2, float& point);
static bool check2011020(Ground* ground, int obj1, int obj2);
static bool check2160121(Ground* ground, Item** item2);
static bool check21601213(Ground* ground, int obj);
static bool check3010221(Ground* ground, int obj2, int);
static bool check3010520(Ground* ground, int obj);
static bool check30105202(Ground* ground, int obj);
static bool check3010820(Ground* ground, int obj);
static bool check3010921(Ground* ground, int obj);
static bool check3011221(Ground* ground, int obj, int a);
static bool check3030120(Ground* ground, int obj);
static bool check3030120(Ground* ground, Item** item2, float& point);
static bool check3091120(Ground* ground, int obj, int method, float& point);
static bool check3091220(Ground* ground, int obj);
static bool check3120121(Ground* ground, int obj);
static bool check3120221(Ground* ground, int obj, int method);
static bool check31501211(Ground* ground, Item** item2, float& point);
static bool check31501212(Ground* ground, int obj, int method);
static bool check3150221(Ground* ground, int obj1, int obj2, int method, float& point);
static bool check4010520(Ground* ground, int obj1, int obj2);
static bool check4010722(Ground* ground, int obj1, int obj2);
static bool check4010920(Ground* ground, int obj);
static bool check4020221(Ground* ground, int obj);
static bool check4040121(Ground* ground, int obj, float& point);
static bool check4070121(Ground* ground, int , int );
static bool check4070121(Ground* ground, int obj);
//static bool check4070221(Ground* ground, int pos1, int pos2, float point);
static bool check4090121(Ground* ground, int obj, float point);
static bool check4110220(Ground* ground, int obj1, int obj2);
static bool check4110220(Ground* ground, int obj, float point);
static bool check9070124(Ground* ground, int obj, int );

// CCZ
#ifdef CCZ
#include "buff/buff500005.h"
#include "buff/buff500008.h"
#include "buff/buff5000120.h"
#include "buff/buff5000220.h"
#include "buff/buff5000320.h"
static bool check500003(Ground* ground, int obj);
static bool check500005(Ground* ground, int obj1, int obj2);
static bool check500008(Ground* ground, int obj1, int obj2);
static bool check5000120(Ground* ground, int obj, float point);
static bool check5000220(Ground* ground, int obj, float point);
static bool check5000320(Ground* ground, int obj, float point);
#endif

#ifdef XYX
#include "buff/buff6000121.h"
#include "buff/buff7000121.h"
#include "buff/buff7000221.h"
#include "buff/buff7000321.h"
static bool check6000121(Ground* ground, int obj1, int obj2, int method);
static bool check7000121(Ground* ground, int obj);
static bool check7000221(Ground* ground, int obj1, int obj2);
static bool check7000321(Ground* ground, int obj);
#endif

Ground::Ground()
{

}

bool Ground::isover()
{
    int ret = -1;
    for (int i = 0; i < 2; ++i)
    {
        if (m_group[i].m_item[0].h[0] <=0 && m_group[i].m_item[1].h[0] <=0 && m_group[i].m_item[2].h[0] <=0)
        {
            ret = i;
            break;
        }
    }
    return (ret != -1);
}

float Ground::getMaxi(Ground* ground, int pos)
{
    float max = 0;
    int g = pos/10;
    int i = pos%10;
    for (int j = 0; j < 4; ++j)
    {
        if (ground->m_group[g].m_item[i].i[j] > max)
        {
            max = ground->m_group[g].m_item[i].i[j];
        }
    }
    return max;
}

int Ground::getMaxiIndex(Ground* ground, int pos)
{
    int index = -1;
    float max = 0;
    int g = pos/10;
    int i = pos%10;
    for (int j = 0; j < 4; ++j)
    {
        if (ground->m_group[g].m_item[i].i[j] > max)
        {
            max = ground->m_group[g].m_item[i].i[j];
            index = j;
        }
    }
    return index;
}

//int Ground::selectObjMaxh0(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, max = 0;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].h[0] > max)
//        {
//            max = ground->m_group[obj1/10].m_item[obj1%10].h[0];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMaxi0(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, max = 0;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[0] > max)
//        {
//            max = ground->m_group[obj1/10].m_item[obj1%10].i[0];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMaxi1(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, max = 0;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[1] > max)
//        {
//            max = ground->m_group[obj1/10].m_item[obj1%10].i[1];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMaxi2(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, max = 0;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[2] > max)
//        {
//            max = ground->m_group[obj1/10].m_item[obj1%10].i[2];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMaxi3(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, max = 0;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[3] > max)
//        {
//            max = ground->m_group[obj1/10].m_item[obj1%10].i[3];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMinh0(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, min = 100000;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].h[0] < min)
//        {
//            min = ground->m_group[obj1/10].m_item[obj1%10].h[0];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMini0(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, min = 1000;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[0] < min)
//        {
//            min = ground->m_group[obj1/10].m_item[obj1%10].i[0];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMini1(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, min = 1000;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[1] < min)
//        {
//            min = ground->m_group[obj1/10].m_item[obj1%10].i[1];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMini2(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, min = 1000;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[2] < min)
//        {
//            min = ground->m_group[obj1/10].m_item[obj1%10].i[2];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//int Ground::selectObjMini3(Ground* ground, int pos, int fof, bool b017)
//{
//    int obj = -1, min = 1000;
//    QVector<int> objs = selectObjRange(ground, pos, fof, b017);
//    for (int obj1 : objs)
//    {
//        if (ground->m_group[obj1/10].m_item[obj1%10].i[3] < min)
//        {
//            min = ground->m_group[obj1/10].m_item[obj1%10].i[3];
//            obj = obj1;
//        }
//    }
//    return obj;
//}

//QVector<int> selectObjRange(Ground* ground, int pos, int fof, bool b017)
//{
//    b017 = b017 && !check017(ground, pos);
//    int g1, g2;
//    if (!b017 && fof > 0)
//    {
//        g1 = pos / 10;
//        g2 = pos / 10 + 1;
//    }
//    else if (!b017 && fof < 0)
//    {
//        g1 = 1 - pos / 10;
//        g2 = 1 - pos / 10 + 1;
//    }
//    else /*if (b017 || fof == 0)*/
//    {
//        g1 = 0;
//        g2 = 2;
//    }
//    QVector<int> objs;
//    for (int g = g1; g < g2; ++g)
//    {
//        for (int i = 0; i < 3; ++i)
//        {
//            if (ground->m_group[g].m_item[i].h[0] <= 0)
//            {
//                continue;
//            }
//            if (fof < 0 && ground->m_group[g].m_item[i].g[0] == pos)
//            {
//                continue;
//            }
//            objs.append(ground->m_group[g].m_item[i].g[0]);
//        }
//    }
//    return objs;
//}

//QVector<int> Ground::selectObj(Ground* ground, int pos, int n, int fof, int except)
//{
//    bool b017 = check017(ground, pos);
//    if (fof > 0 && b017)
//    {
//        return selectObjIn(ground, pos, n, except);
//    }
//    else if (fof < 0 && b017)
//    {
//        return selectObjEx(ground, pos, n, except);
//    }
//    else
//    {
//        return selectObjAll(ground, pos, n, except);
//    }
//}

//QVector<int> Ground::selectObjIn(Ground* ground, int pos, int n, int except)
//{
//    QVector<int> objs;
//    int g = pos / 10;
//    for (int i = 0; i < 3; ++i)
//    {
//        if (ground->m_group[g].m_item[i].h[0] > 0 && except != g*10+i)
//        {
//            objs.append(ground->m_group[g].m_item[i].g[0]);
//        }
//    }
//    int size = objs.size();
//    for (int i = 0; i < size - n; ++i)
//    {
//        objs.takeAt(qrand() % objs.size());
//    }
//    return objs;
//}

//QVector<int> Ground::selectObjEx(Ground* ground, int obj, int n, int except)
//{
//    QVector<Item> objs1;
//    int g = 1 - obj/10;
//    for (int i = 0; i < 3; ++i)
//    {
//        if (ground->m_group[g].m_item[i].h[0] > 0 && except != g*10+i)
//        {
//            objs1.append(ground->m_group[g].m_item[i]);
//        }
//    }
//    return selectObjImpl(objs1, n);
//}

//QVector<int> Ground::selectObjg1(Ground* ground, int obj, int g1, int n, int fof, int except)
//{
//    QVector<int> objs;
//    int g = (fof > 0) ? (obj/10) : (1-obj/10);
//    for (int t = 0; t < 2 && objs.size() == 0; ++t)
//    {
//        for (int i = 0; i < 3; ++i)
//        {
//            if (ground->m_group[g].m_item[i].h[0] <= 0)
//            {
//                continue;
//            }
//            if (ground->m_group[g].m_item[i].g[0] == except)
//            {
//                continue;
//            }
//            if (t == 0 && ground->m_group[g].m_item[i].g[1] != g1)
//            {
//                continue;
//            }
//            objs.append(g*10+i);
//        }
//    }

//    int size = objs.size();
//    for (int i = 0; i < size - n; ++i)
//    {
//        objs.takeAt(qrand() % objs.size());
//    }
//    return objs;
//}

//QVector<int> Ground::selectObjAll(Ground* ground, int , int n, int except)
//{
//    QVector<Item> objs1;
//    for (int g = 0; g < 2; ++g)
//    {
//        for (int i = 0; i < 3; ++i)
//        {
//            if (ground->m_group[g].m_item[i].h[0] > 0 && except != g*10+i)
//            {
//                objs1.append(ground->m_group[g].m_item[i]);
//            }
//        }
//    }
//    return selectObjImpl(objs1, n);
//}

//QVector<int> Ground::selectObjImpl(QVector<Item>& objs1, int n)
//{
//    QVector<int> objs;
//    while (objs.size() < n && objs1.size() > 0)
//    {
//        int g2[3] = {0};
//        for (int i = 0; i < objs1.size(); ++i)
//        {
//            int g = objs1.at(i).g[2];
//            if (objs1.at(i).g[3] > 0)
//            {
//                g = objs1.at(i).g[3] + ((float)objs1.at(i).h[0] / objs1.at(i).h[3]) * (objs1.at(i).g[2] - objs1.at(i).g[3]);
//            }
//            g2[i] = g;
//        }
//        int r = qrand() % (g2[0] + g2[1] + g2[2]) + 1;
//        for (int i = 0, row = 0; i < objs1.size(); ++i)
//        {
//            row += g2[i];
//            if (r <= row)
//            {
//                objs.append(objs1.at(i).g[0]);
//                objs1.takeAt(i);
//                break;
//            }
//        }
//    }

//    return objs;
//}

QVector<int> Ground::selectObjN(Ground* ground, int obj, int criteria, int except)
{
    QVector<int> objs = {0, 1, 2, 10, 11, 12};

    // except or h0=0
    for (int obj : objs)
    {
        if ((except >= 0 && except == obj) || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
        {
            objs.removeOne(obj);
        }
    }

    // [0x0010]all=0,in=1,out=2,b17+in=3,b17+out=4
    if ((criteria & 0xf0) > 0)
    {
        selectObj0010(ground, objs, (criteria & 0xf0) >> 4, obj);
    }

    // [0x1000]maxi0=1,mini0=2,maxi1=3,mini1=4,maxi2=5,mini2=6,maxi3=7,mini3=8,maxh0=9,minh0=a
    if ((criteria & 0xf000) > 0)
    {
        selectObj1000(ground, objs, (criteria & 0xf000) >> 12);
        return objs;
    }

    // [0x0100]g1=0=1,g1=1=2
    if ((criteria & 0xf00) > 0)
    {
        selectObj0100(ground, objs, (criteria & 0xf00) >> 8);
    }

    // [0x0001]n=1~6,g23
    if ((criteria & 0xf) > 0)
    {
        selectObj0001(ground, objs, criteria & 0xf);
    }

    return objs;
}

// [0x0001]n=1~6,g23
void selectObj0001(Ground* ground, QVector<int>& objs, int n)
{
    QVector<int> objs1;
    while (objs1.size() < n && objs.size() > 0)
    {
        int g2[6] = {0};
        for (int i = 0; i < objs.size(); ++i)
        {
            Item& item = ground->m_group[objs[i]/10].m_item[objs[i]%10];
            int g = item.g[2];
            if (item.g[3] > 0)
            {
                g = item.g[3] + ((float)item.h[0] / item.h[3]) * (item.g[2] - item.g[3]);
            }
            g2[i] = g;
        }
        int r = qrand() % (g2[0] + g2[1] + g2[2] + g2[3] + g2[4] + g2[5]) + 1;
        for (int i = 0, row = 0; i < objs.size(); ++i)
        {
            row += g2[i];
            if (r <= row)
            {
                objs1.append(objs.at(i));
                objs.takeAt(i);
                break;
            }
        }
    }
    objs.swap(objs1);
}

// [0x0100]g1=0=1,g1=1=2
void selectObj0100(Ground* ground, QVector<int>& objs, int g1)
{
    QVector<int> objs1;
    for (int obj : objs)
    {
        Item& item = ground->m_group[obj/10].m_item[obj%10];
        if (item.g[1] != g1 - 1)
        {
            continue;
        }
        objs1.append(obj);
    }
    if (objs1.size() > 0)
    {
        objs.swap(objs1);
    }
}

// [0x0010]all=0,in=1,out=2,b17+in=3,b17+out=4
void selectObj0010(Ground* ground, QVector<int>& objs, int fof, int obj)
{
    bool b017 = check017(ground, obj);
    if (b017 && (fof == 3 || fof == 4))
    {
        return;
    }

    int g = !((obj / 10) ^ (fof % 2));
    QVector<int> objs1;
    for (int obj : objs)
    {
        if (obj/10 != g)
        {
            continue;
        }
        objs1.append(obj);
    }
    objs.swap(objs1);
}

// [0x1000]maxi0=1,mini0=2,maxi1=3,mini1=4,maxi2=5,mini2=6,maxi3=7,mini3=8,maxh0=9,minh0=a
void selectObj1000(Ground* ground, QVector<int>& objs, int ic)
{
    int min = 99999, max = 0, obj1 = -1;
    for (int obj : objs)
    {
        float ix = 0;
        switch (ic)
        {
        case 1:
        case 2:
            ix = ground->m_group[obj/10].m_item[obj%10].i[0];
            break;
        case 3:
        case 4:
            ix = ground->m_group[obj/10].m_item[obj%10].i[1];
            break;
        case 5:
        case 6:
            ix = ground->m_group[obj/10].m_item[obj%10].i[2];
            break;
        case 7:
        case 8:
            ix = ground->m_group[obj/10].m_item[obj%10].i[3];
            break;
        case 9:
        case 10:
            ix = ground->m_group[obj/10].m_item[obj%10].h[0];
            break;
        }

        if (ic % 2 == 0)
        {
            if (ix < min)
            {
                min = ix;
                obj1 = obj;
            }
        }
        else
        {
            if (ix > max)
            {
                max = ix;
                obj1 = obj;
            }
        }
    }
    QVector<int>().swap(objs);
    if (obj1 >= 0)
    {
        objs.append(obj1);
    }
}

int act(Ground* ground, Item* item1, Item* item2, int method, float& point, int bj02, bool tb)
{
    if (item1->h[0] <= 0 || item2->h[0] <= 0)
    {
        return -1;
    }
    if (check011(ground, item1->g[0]))
    {
        return -1;
    }
    if (!tb && checkj9(ground, item1, item2))
    {
        check0110120(ground, item2->g[0]);
        check403012(ground, item2->g[0]);
        return -1;
    }

    // before
    check0012620(ground, item2->g[0]);
    check3010921(ground, item2->g[0]);
    check1020221(ground, item1->g[0], item2->g[0], point);
    check3030120(ground, &item2, point);
    check31501211(ground, &item2, point);
    check3150221(ground, item2->g[0], item1->g[0], method, point);
    check4040121(ground, item2->g[0], point);
    check0088324(ground, item1->g[0], &item2);
    check2160121(ground, &item2);
    if (method % 100 == 24)
    {
        check2091121(ground, item1->g[0], &item2, point);
    }
    if (!tb)
    {
        check016(ground, item1->g[0], point);
        check106(ground, item2->g[0], item1->g[0], point);
    }
    check102(ground, item2->g[0], point);
#ifdef XYX
    if (check6000121(ground, item2->g[0], item1->g[0], method))
    {
        return -1;
    }
#endif

    // act
    int p = point;
    if (p < 0)
    {
        p = 0;
    }
    p = (item2->h[0] > p) ? p : item2->h[0];
    item2->h[0] -= p;
    item2->h[1] += p - p / 5;
    item2->h[2] += p / 5;
    Logger::H().printact(ground, item1, item2, method, p, bj02);
    if (item2->h[0] <= 0 && !check3030120(ground, item2->g[0]))
    {
        Logger::H().printover(ground, item2);
        ground->data[item2->g[0]].round = ground->m_round;
        actclear(ground, item2);
    }
    ground->data[item1->g[0]].act[0][method] += p;
    ground->data[item1->g[0]].act[ground->m_round][method] += p;
    ground->data[item1->g[0]].actcount[method] += 1;
    ground->data[item2->g[0]].acted += p;
    ground->data[item2->g[0]].actedcount += 1;
    ground->data[item1->g[0]].actrc += 1;

    // after
    if (method == 2223 || method == 3332)
    {
        check0010320(ground, item1->g[0], item2->g[0], point);
        check0016620(ground, item1->g[0], point);
    }
    check001730(ground, item1->g[0]);
    check001740(ground, item1->g[0]);
    check001770(ground, item1->g[0]);
    check001020(ground, item1->g[0]);
    check301121(ground, item2->g[0]);
    check301131(ground, item2->g[0], item1->g[0]);
    check303016(ground, item2->g[0]);
    check407021(ground, item1->g[0], item2->g[0]);
    check009000(ground, item1->g[0], item2->g[0], method, p);
    check303012(ground, item1->g[0], p);
    check401056(ground, item1->g[0], method, p);
    check201072(ground, item2->g[0], item1->g[0]);

    check1010121(ground, item2->g[0]);
    check1010320(ground, item2->g[0]);
    check1010620(ground, item1->g[0], item2->g[0]);
    check1011320(ground, item2->g[0], item1->g[0]);
    check0014321(ground, item2->g[0]);
    check2010321(ground, item1->g[0]);
    check2010321(ground, item2->g[0]);
    check2030221(ground, item2->g[0], p);
    check4010520(ground, item2->g[0], item1->g[0]);
    check1020120(ground, item1->g[0], item2->g[0], p);
    check2020222(ground, item1->g[0], item2->g[0], method);
    check4070121(ground, item1->g[0], item2->g[0]);
    check0088121(ground, item1->g[0]);
    check0088121(ground, item2->g[0]);
    check4090121(ground, item2->g[0], p);
    check0100120(ground, item2->g[0], item1->g[0]);
    check0100220(ground, item2->g[0], item1->g[0]);
    check0100320(ground, item1->g[0], method);
    check0101021(ground, item1->g[0], p);
    check1100121(ground, item2->g[0], p);
    check3120121(ground, item1->g[0]);
    check3120221(ground, item1->g[0], method);
    check0120321(ground, item1->g[0], item2->g[0]);
    check0140221(ground, item2->g[0]);
    check0150221(ground, item1->g[0], method);
    check4010920(ground, item2->g[0]);
    check21601213(ground, item2->g[0]);

#ifdef CCZ
    check500005(ground, item1->g[0], item2->g[0]);
    check5000120(ground, item2->g[0], p);
    check5000220(ground, item2->g[0], p);
    check5000320(ground, item2->g[0], p);
#endif

    return p + (bj02 > 0 ? J02_FLAG_1 : 0);
}

void actclear(Ground* ground, Item* item)
{
    int size = sizeof(ground->buff) / sizeof(QMap<int, QVector<QSharedPointer<Buff>>>);
    for (int i = 0; i < size; ++i)
    {
        for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[i])
        {
            for (int n = buffs.size() - 1; n >= 0; --n)
            {
                if (buffs.at(n)->src == item->g[0] || buffs.at(n)->des == item->g[0])
                {
                    buffs.at(n)->exit(ground);
                    buffs.remove(n);
                }
            }
        }
        ground->buff[i].remove(item->g[0]);
    }
    ground->exceptions.remove(item->g[0]);
}

int Ground::actbr(Ground* ground, Item* item1, Item* item2, int method, float point, bool bi2, float j0, float k12, float )
{
    // before
    check201022(ground, item1->g[0], item2->g[0]);
    if (check3091120(ground, item1->g[0], method, point))
    {
        bi2 = true;
        j0 = -999;
    }
    check0110321(ground, item2->g[0], item1->g[0], 1);

    // cal
    float f = 0.0f;
    float i2 = item2->i[2] * (1 - item1->j[13]/100);
    i2 = bi2 ? 0 : i2;
#if 0
//    f = /*0.7 * */(4.3607 * item1->i[0] + 53.57) / (1 + i2 / 70);
    f = 0.03 * std::pow(item1->i[0], 1.53) / (1 + 0.0019 * std::pow(i2, 1.1));
#else
    f = item1->i[0] / std::sqrt(i2 + 55);
#endif
//    f = (f < 0) ? 1.0f : f;
    j0 += item1->j[0];
    float j1 = 0.0f;
    j0 = check0011721(ground, item1->g[0], j1) ? 100 : j0;
    j0 = check1010721(ground, item1->g[0], method) ? 100 : j0;
    bool b4110220 = check4110220(ground, item1->g[0], item2->g[0]);
    j0 = b4110220 ? 100 : j0;
    bool bj0 = (qrand() % 100 + 1 > 100 - j0);
    f *= bj0 ? ((j1 + item1->j[1])/100) : 1;
    f *= point / 100;
    float k = 1.0f;
    k += item1->k[0]/100;
    k += item1->k[1]/100;
    k += (method == 2223) ? item1->k[3]/100 : 0;
    k += (method%100 == 22) ? item1->k[4]/100 : 0;
    k += (method%100 == 24) ? item1->k[5]/100 : 0;
    k += (method%100 == 21) ? item1->k[6]/100 : 0;
    k += (method%100 == 20) ? item1->k[7]/100 : 0;
    k += (method == 3332) ? (item1->k[3] + item1->k[8])/100 : 0;
    k += (method == 3332) ? check009030(ground, item1->g[0])/100 : 0;
    k += (Ground::exsize(ground, item2->g[0]) > 0) ? item1->k[9]/100 : 0;
    k += (item1->f[1] != item2->f[1]) ? item1->k[10]/100 : 0;
    k += (item2->g[1] == 0) ? item1->k[11]/100 : 0;
    k += k12/100;
    k += check001650(ground, item1->g[0], item2->g[0])/100;
    k += check001660(ground, item1->g[0], item2->g[0])/100;
    k += check201022(ground, item1->g[0], item2->g[0], 0)/100;
    k += check201081(ground, item1->g[0], 0)/100;
    k += check303018(ground, item1->g[0])/100;
    k += check401037(ground, item1->g[0], item2->g[0])/100;
    k += check303012(ground, item1->g[0])/100;
    k += check201023(ground, item1->g[0], item2->g[0])/100;
    k += check411021(ground, item1->g[0], item2->g[0])/100;
    f *= k;
    f *= 1 + item2->l[0]/100;
    f *= 1 + item2->l[1]/100;
    f *= 1 + (method == 2223 ? item2->l[3]/100 : 0);
    f *= 1 + (method%100 == 22 ? item2->l[4]/100 : 0);
    f *= 1 + (method%100 == 24 ? item2->l[5]/100 : 0);
    f *= 1 + (method%100 == 21 ? item2->l[6]/100 : 0);
    f *= 1 + (method%100 == 20 ? item2->l[7]/100 : 0);
    f *= 1 + (method == 3332 ? item2->l[8]/100 : 0);
    f *= 1 + (item1->f[1] != item2->f[1] ? item2->l[10]/100 : 0);
    f *= 1 + check301091(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + check409011(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + check1011021(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + ((item2->g[4] - item1->g[4] + 4) % 4 - 2) % 2 * 0.15;
#if 0
    f *= 0.5 + (float)item1->h[0] / item1->h[3] / 2;
    f *= std::pow(item1->h[0], 0.1566);
#else
    f *= 0.283 * std::sqrt(item1->h[0]);
#endif

    // act
    int p = act(ground, item1, item2, method, f, bj0);
    if (p < 0)
    {
        return -1;
    }

    // after
    if (b4110220)
    {
        check4110220(ground, item1->g[0], (float)p);
    }
    if (item1->j[11] > 0)
    {
        hlo(ground, item1, item1, 11, f * item1->j[11] / 100);
    }
    check001210(ground, item1->g[0]);
    check001440(ground, item1->g[0], item2->g[0]);
    if (bj0)
    {
        check001610(ground, item1->g[0]);
    }

    check0020820(ground, item1->g[0], 0);
    if (bj0)
    {
        check2010520(ground, item1->g[0], item2->g[0]);
    }
    check2011020(ground, item1->g[0], item2->g[0]);
    check3011221(ground, item1->g[0], 0);
    check4010722(ground, item1->g[0], item2->g[0]);
    check4010920(ground, item2->g[0]);

    return p;
}

int Ground::actml(Ground* ground, Item* item1, Item* item2, int method, float point, float j2, float k12, float l12)
{
    // before
    check1091321(ground, item2->g[0], item1->g[0]);
    check0110321(ground, item2->g[0], item1->g[0], 2);
    check31501212(ground, item1->g[0], method);

    // cal
    float f = 0.0f;
    float i1 = item2->i[1] * (1 - item1->j[14]/100);
    float i2 = item2->i[2] * (1 - item1->j[13]/100);
#if 0
//    f = /*0.7 * */(4.3607 * item1->i[1] + 53.57) / (1 + (i1 + i2) / 2 / 70);
    f = 0.03 * std::pow(item1->i[1], 1.53) / (1 + 0.0019 * std::pow((i1+i2)/2, 1.1));
#else
    f = item1->i[1] / std::sqrt((i1+i2)/2 + 55);
#endif
    f = (f < 0) ? 1.0f : f;
    j2 += item1->j[2];
    float j3 = 0.0f;
    j2 = check0011721(ground, item1->g[0], j3) ? 100 : j2;
    j2 = check1010721(ground, item1->g[0], method) ? 100 : j2;
    bool bj2 = (qrand() % 100 + 1 <= 100 - j2) ? false : true;
    f *= bj2 ? ((j3 + item1->j[3])/100) : 1;
    f *= point / 100;
    float k = 1.0f;
    k += item1->k[0]/100;
    k += item1->k[2]/100;
    k += (method%100 == 22) ? item1->k[4]/100 : 0;
    k += (method%100 == 24) ? item1->k[5]/100 : 0;
    k += (method%100 == 21) ? item1->k[6]/100 : 0;
    k += (method%100 == 20) ? item1->k[7]/100 : 0;
    k += (Ground::exsize(ground, item2->g[0]) > 0) ? item1->k[9]/100 : 0;
    k += (item1->f[1] != item2->f[1]) ? item1->k[10]/100 : 0;
    k += item2->g[1] == 0 ? item1->k[11]/100 : 0;
    k += k12/100;
    k += check001100(ground, item1->g[0], item2->g[0])/100;
    k += check001650(ground, item1->g[0], item2->g[0])/100;
    k += check001660(ground, item1->g[0], item2->g[0])/100;
    k += check303018(ground, item1->g[0])/100;
    k += check401037(ground, item1->g[0], item2->g[0])/100;
    k += check303012(ground, item1->g[0])/100;
    k += check201023(ground, item1->g[0], item2->g[0])/100;
    k += check411021(ground, item1->g[0], item2->g[0])/100;
    f *= k;
    f *= 1 + item2->l[0]/100;
    f *= 1 + item2->l[2]/100;
    f *= 1 + (method%100 == 22 ? item2->l[4]/100 : 0);
    f *= 1 + (method%100 == 24 ? item2->l[5]/100 : 0);
    f *= 1 + (method%100 == 21 ? item2->l[6]/100 : 0);
    f *= 1 + (method%100 == 20 ? item2->l[7]/100 : 0);
    f *= 1 + (item1->f[1] != item2->f[1] ? item2->l[10]/100 : 0);
    f *= 1 + l12/100;
    f *= 1 + check301091(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + check409011(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + check1011021(ground, item2->g[0], item1->g[0])/100;
    f *= 1 + ((item2->g[4] - item1->g[4] + 4) % 4 - 2) % 2 * 0.15;
#if 0
    f *= 0.5 + (float)item1->h[0] / item1->h[3] / 2;
    f *= std::pow(item1->h[0], 0.1566);
#else
    f *= 0.283 * std::sqrt(item1->h[0]);
#endif

    // act
    int p = act(ground, item1, item2, method, f, bj2);
    if (p < 0)
    {
        return -1;
    }

    // after
    if (item1->j[12] > 0)
    {
        float j9 = f * item1->j[12] / 100;
        hlo(ground, item1, item1, 12, j9);
    }
    check103(ground, item1->g[0]);
    check001450(ground, item2->g[0]);
    check201021(ground, item2->g[0]);
    check201081(ground, item1->g[0], 1);
    check301026(ground, item1->g[0]);

    check0014420(ground, item1->g[0]);
    check0016120(ground, item1->g[0]);
    check3011221(ground, item1->g[0], 1);
    check4010722(ground, item1->g[0], item2->g[0]);
    check0020820(ground, item1->g[0], 1);
    check0050220(ground, item1->g[0], item2->g[0]);
//    check4070221(ground, item1->g[0], item2->g[0], f);

    return p;
}

int Ground::acttb(Ground* ground, Item* item1, Item* item2, int method, float ix, float point)
{
    float f = ix;

    // 422.82, 606.35, 46.13 = 2088 1029.17
    // 438.82, 606.35, 46.13 = 2143 1045.17 16/55

    // 460.74, 607.84, 46.04 = 2224
    // 460.74, 607.84, 46.04 = 2224 1068.58

    // 492.70, 575.82, 39.59 = 2220 1068.52
    // 492.70, 607.82, 39.59 = 2333 1100.52 32/113

    // 525.46, 604.61, 44.61 = 2444 1130.07 62/224

    // =0.0024*G2*G2-1.6525*G2+1246.6
//    f = 360 + float(item1->i[0] + item1->i[1]) / 2;
//    f *= 3;

    if (f == 0)
    {
        f = point;
    }
    else
    {
        f = 0.0016f * f * f + 0.1424 * f + 279.42f;
        f *= 1 + point/100;
    }
    f *= 1 + item2->l[9]/100;

    int p = act(ground, item1, item2, method, f, false, true);
#ifdef XYX
    check7000221(ground, item1->g[0], item2->g[0]);
#endif
    return p;
}

int Ground::actcd(Ground* ground, Item* item1, Item* item2, int method, float point)
{
    point *= 1 + item2->l[11]/100;

    int p = point;
    p = (item2->h[0] > p) ? p : item2->h[0];
    item2->h[0] -= p;
    item2->h[1] += p - p / 5;
    item2->h[2] += p / 5;
    Logger::H().printact(ground, item1, item2, method, p, false);
    if (item2->h[0] <= 0 && !check3030120(ground, item2->g[0]))
    {
        ground->data[item2->g[0]].round = ground->m_round;
        actclear(ground, item2);
    }
    ground->data[item1->g[0]].act[0][method] += p;
    ground->data[item1->g[0]].act[ground->m_round][method] += p;
    ground->data[item1->g[0]].actcount[method] += 1;
    ground->data[item2->g[0]].acted += p;
    ground->data[item2->g[0]].actedcount += 1;
    ground->data[item1->g[0]].actrc += 1;

    return true;
}

int Ground::hlo(Ground* ground, Item* item1, Item* item2, int method, float point)
{
    if (item1->h[0] <= 0 || item2->h[0] <= 0)
    {
        return -1;
    }

    // before
    check1010821(ground, item1->g[0], point);
    check015(ground, item2->g[0], point);

    // cal
    point *= (1 + item1->j[15]/100 + item2->j[16]/100);

    // hlo
    if (item2->h[1] < point)
    {
        point = item2->h[1];
    }
    int p = point;
    item2->h[0] += p;
    item2->h[1] -= p;
    Logger::H().printhlo(ground, item1, item2, method, p);
    ground->data[item1->g[0]].hlo[0][method] += p;
    ground->data[item1->g[0]].hlo[ground->m_round][method] += p;
    ground->data[item1->g[0]].hlocount[method] += 1;

    // after
    check001420(ground, item2->g[0]);
    check201011(ground, item1->g[0]);
    check301102(ground, item1->g[0]);
    check401031(ground, item1->g[0], item2->g[0]);
    check009010(ground, item1->g[0], p);
    check0130121(ground, item1->g[0], item2->g[0], method);
#ifdef XYX
    check7000121(ground, item1->g[0]);
#endif

    return p;
}

int Ground::hloi1(Ground* ground, Item* item1, Item* item2, int method, float point)
{
//    float f = 0.0f;
//    f = item1->i[1] * point / 100;
//    return hlo(ground, item1, item2, method, f);
    return hloi(ground, item1, item2, method, point, item1->i[1]);
}

int Ground::hloi(Ground* ground, Item* item1, Item* item2, int method, float point, float i)
{
    float f = 0.0f;
#if 0
    f = std::pow(i, 1.06) * point / 100;
    // f = point * (1 + i / 100)  //比pow算法低20%
#else
    f = (0.930094206017815 + 0.0055332101979583 * std::pow(item1->h[0], 0.274780014559044)) *
        (point / 100) *
        (0.00257413709518457 * std::pow(i, 2) + 0.0558280362334805 * i + 117.637581883191);
#endif
    return hlo(ground, item1, item2, method, f);
}

void Ground::addBuff(Ground* ground, QVector<QSharedPointer<Buff>>& buffs, QSharedPointer<Buff> &buff)
{
    int pos = -1;
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs[i]->id == buff->id)
        {
            pos = i;
            break;
        }
    }
    if (pos < 0)
    {
        buffs.append(buff);
        buff->enter(ground);
    }
    else
    {
        buffs[pos]->update(ground, buff);
    }
}

void Ground::exenter(Ground* ground, int src, int des, int id)
{
    ground->exceptions[des].insert(id);
    excheck(ground, src, des, id);
}

void Ground::exexit(Ground* ground, int , int des, int id)
{
    ground->exceptions[des].remove(id);
}

void Ground::exupdate(Ground* ground, int src, int des, int id)
{
    excheck(ground, src, des, id);
}

bool Ground::excheck(Ground* ground, int src, int des, int id)
{
    if (id > 0 && id < 20)
    {
#ifdef S6
        check600B(ground, src);
#endif
        check3010221(ground, des, id);
    }
    check0014120(ground, src);
    check0016420(ground, des);
    check0102021(ground, src, id);
#ifdef XYX
    check7000321(ground, src);
#endif
    return true;
}

int Ground::exsize(Ground* ground, int des)
{
    return ground->exceptions[des].size();
}

void Ground::exremove(Ground* ground, int obj, int n)
{
    QVector<int> m;
    for (int e : ground->exceptions[obj])
    {
        m.append(e);
    }
    m = Cmn(m, n);

    int size = sizeof(ground->buff) / sizeof(QMap<int, QVector<QSharedPointer<Buff>>>);
    for (int i = 0; m.size() > 0 && i < size; ++i)
    {
        for (int j = ground->buff[i][obj].size() - 1; m.size() > 0 && j >= 0; --j)
        {
            int id = ground->buff[i][obj][j]->id;
            if (m.contains(id))
            {
                m.removeOne(id);
                ground->buff[i][obj][j]->exit(ground);
                ground->buff[i][obj].remove(j);
            }
        }
    }
}

QVector<int> Cmn(QVector<int> m, int n)
{
    if (n <= 0)
    {
        return {};
    }
    int size = m.size();
    if (n >= size)
    {
        n = size;
    }

    for (int i = 0, j; i < n; ++i)
    {
        j = i + qrand() % (size - i);

        if (i != j)
        {
            int t = m[i];
            m[i] = m[j];
            m[j] = t;
        }
    }

    m.resize(n);
    return m;
}

bool checkj8(Ground* ground, int obj1, int obj2)
{
    Item& item1 = ground->m_group[obj1/10].m_item[obj1%10];
    Item& item2 = ground->m_group[obj2/10].m_item[obj2%10];
    if (item1.h[0] <= 0 || item2.h[0] <= 0)
    {
        return false;
    }
    if (qrand() % 100 + 1 <= 100 - item2.j[8])
    {
        return false;
    }
    Ground::run3332(ground, obj2, obj1, false);
    return true;
}

bool checkj9(Ground* ground, Item* item1, Item* item2)
{
    if (check104(ground, item1->g[0]))
    {
        return false;
    }
    if (check001300(ground, item1->g[0]))
    {
        return false;
    }
    if (qrand() % 100 + 1 <= 100 - item2->j[9])
    {
        return false;
    }
    Logger::H().printactmiss(ground, item1, item2);
    check2010420(ground, item2->g[0]);
    return true;
}

bool check011(Ground* ground, int obj)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 11)
        {
            b = true;
        }
    }
    return b;
}

bool check015(Ground* ground, int obj, float& point)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 15)
        {
            b = true;
        }
    }
    if (b)
    {
        point *= 0.3f;
    }
    return b;
}

bool check016(Ground* ground, int obj, float& point)
{
    int index = -1;
    for (int n = 1; n < 7; n = n + 5)
    {
        QVector<QSharedPointer<Buff>>& buffs = ground->buff[n][obj];
        for (int i = 0; i < buffs.size(); ++i)
        {
            if (buffs.at(i)->id == 111)
            {
                return true;
            }
            if (buffs.at(i)->id == 16)
            {
                index = i;
            }
        }
        if (index >= 0)
        {
            QSharedPointer<Buff016> buff = qSharedPointerCast<Buff016>(buffs.at(index));
            buff->run(ground, point);
            return false;
        }
    }
    return (index < 0);
}

bool check017(Ground* ground, int obj)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 17)
        {
            b = true;
        }
    }
//    if (!b && qrand() % 100 + 1 <= 100 - 50)
//    {
//        b = true;
//    }
    return b;
}

bool check102(Ground* ground, int obj, float& point)
{
    QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][obj];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 102)
        {
            QSharedPointer<Buff102> buff = qSharedPointerCast<Buff102>(buffs.at(i));
            if (buff->run(ground, point) <= 0)
            {
                buffs.remove(i);
            }
            break;
        }
    }
    return true;
}

bool check103(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 103)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check104(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 104)
        {
            return true;
        }
    }
    return false;
}

bool check106(Ground* ground, int obj1, int obj2, float& point)
{
    QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][obj1];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 106)
        {
            QSharedPointer<Buff106> buff = qSharedPointerCast<Buff106>(buffs.at(i));
            if (buff->run(ground, obj2, point) <= 0)
            {
                buffs.remove(i);
            }
            return true;
        }
    }
    return false;
}

bool check001020(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1020)
        {
            QSharedPointer<Buff001020> buff = qSharedPointerCast<Buff001020>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

float check001100(Ground* ground, int pos1, int pos2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos1])
    {
        if (pbuff->id == 1100)
        {
            QSharedPointer<Buff001100> buff = qSharedPointerCast<Buff001100>(pbuff);
            return buff->run(ground, pos2);
        }
    }
    return 0.0f;
}

bool check001210(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1210)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001300(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1300)
        {
            QSharedPointer<Buff001300> buff = qSharedPointerCast<Buff001300>(pbuff);
            return buff->run(ground, obj);
        }
    }
    return false;
}

bool check001420(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1420)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001440(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 1440)
        {
            QSharedPointer<Buff001440> buff = qSharedPointerCast<Buff001440>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return true;
}

bool check001450(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1450)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001490(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1490)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001610(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1610)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

float check001650(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 1650)
        {
            QSharedPointer<Buff001650> buff = qSharedPointerCast<Buff001650>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

float check001660(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 1660)
        {
            QSharedPointer<Buff001660> buff = qSharedPointerCast<Buff001660>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

bool check001690(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1690)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001700(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1700)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001730(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1730)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001740(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1740)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001750(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1750)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check001770(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1770)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check009000(Ground* ground, int obj1, int obj2, int method, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 9000)
        {
            QSharedPointer<Buff009000> buff = qSharedPointerCast<Buff009000>(pbuff);
            buff->run(ground, obj2, method, point);
            break;
        }
    }
    return true;
}

bool check009010(Ground* ground, int obj, int point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 9010)
        {
            QSharedPointer<Buff009010> buff = qSharedPointerCast<Buff009010>(pbuff);
            buff->run(ground, point);
            break;
        }
    }
    return true;
}

bool check009020(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 9020)
        {
            QSharedPointer<Buff009020> buff = qSharedPointerCast<Buff009020>(pbuff);
            return buff->run(ground, obj);
        }
    }
    return false;
}

float check009030(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 9030)
        {
            QSharedPointer<Buff009030> buff = qSharedPointerCast<Buff009030>(pbuff);
            return buff->run(ground, obj);
        }
    }
    return 0.0f;
}

bool check106011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 106011)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check201011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201011)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check201021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201021)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check201022(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 201022)
        {
            QSharedPointer<Buff201022> buff = qSharedPointerCast<Buff201022>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

float check201022(Ground* ground, int obj1, int obj2, int)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 201022)
        {
            float k0 = 0;
            QSharedPointer<Buff201022> buff = qSharedPointerCast<Buff201022>(pbuff);
            buff->run(ground, obj2, k0);
            return k0;
        }
    }
    return 0;
}

float check201023(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 201023)
        {
            QSharedPointer<Buff201023> buff = qSharedPointerCast<Buff201023>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0;
}

bool check201072(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 201072)
        {
            QSharedPointer<Buff201072> buff = qSharedPointerCast<Buff201072>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

float check201081(Ground* ground, int obj, int b)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 201081)
        {
            QSharedPointer<Buff201081> buff = qSharedPointerCast<Buff201081>(pbuff);
            return buff->run(ground, b);
        }
    }
    return 0;
}

bool check301026(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301026)
        {
            QSharedPointer<Buff301026> buff = qSharedPointerCast<Buff301026>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check301081(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301081)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check301082(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[9][obj])
    {
        if (pbuff->id == 301082)
        {
            return true;
        }
    }
    return false;
}

float check301091(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj1])
    {
        if (pbuff->id == 3010912)
        {
            QSharedPointer<Buff3010912> buff = qSharedPointerCast<Buff3010912>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

bool check301102(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301102)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check301121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301121)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check301131(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 301131)
        {
            QSharedPointer<Buff301131> buff = qSharedPointerCast<Buff301131>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

float check303012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3030122)
        {
            QSharedPointer<Buff3030122> buff = qSharedPointerCast<Buff3030122>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return 0.0f;
}

bool check303012(Ground* ground, int obj, float point)
{
    QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][obj];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 3030122)
        {
            QSharedPointer<Buff3030122> buff = qSharedPointerCast<Buff3030122>(buffs.at(i));
            buffs.remove(i);
            buff->run(ground, point);
            buff->exit(ground);
            return true;
        }
    }
    return false;
}

bool check303016(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 303016)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

float check303018(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 303018)
        {
            QSharedPointer<Buff303018> buff = qSharedPointerCast<Buff303018>(pbuff);
            return buff->run(ground, obj);
        }
    }
    return 0.0f;
}

bool check401031(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 401031)
        {
            QSharedPointer<Buff401031> buff = qSharedPointerCast<Buff401031>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

float check401037(Ground* ground, int pos1, int pos2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos1])
    {
        if (pbuff->id == 401037)
        {
            QSharedPointer<Buff401037> buff = qSharedPointerCast<Buff401037>(pbuff);
            return buff->run(ground, pos2);
        }
    }
    return 0.0f;
}

bool check401056(Ground* ground, int obj, int method, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 401056)
        {
            QSharedPointer<Buff401056> buff = qSharedPointerCast<Buff401056>(pbuff);
            buff->run(ground, method, point);
            return true;
        }
    }
    return false;
}

bool check401131(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401131)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check401151(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401151)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check402021(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 402021)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check403012(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 403012)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4030122(obj, obj, 403012));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
            return true;
        }
    }
    return false;
}

bool check407021(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 407021)
        {
            QSharedPointer<Buff407021> buff = qSharedPointerCast<Buff407021>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

float check409011(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 409011)
        {
            QSharedPointer<Buff409011> buff = qSharedPointerCast<Buff409011>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

float check411021(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 411021)
        {
            QSharedPointer<Buff411021> buff = qSharedPointerCast<Buff411021>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

bool check0010320(Ground* ground, int obj1, int obj2, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 10320)
        {
            QSharedPointer<Buff0010320> buff = qSharedPointerCast<Buff0010320>(pbuff);
            buff->run(ground, obj2, point);
            break;
        }
    }
    return true;
}

bool check0011721(Ground *ground, int obj, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 11721)
        {
            QSharedPointer<Buff0011721> buff = qSharedPointerCast<Buff0011721>(pbuff);
            return buff->run(ground, point);
        }
    }
    return false;
}

bool check0012620(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 12620)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0013221(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 132212)
        {
            QSharedPointer<Buff00132212> buff = qSharedPointerCast<Buff00132212>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check0014120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 14120)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0014220(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 14220)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0014321(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 143211 || pbuff->id == 143212 || pbuff->id == 143213)
        {
            pbuff->run(ground);
        }
    }
    return true;
}

bool check0014420(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 14420)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0016120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 16120)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check0016220(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 16220)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check0016420(Ground* ground, int des)
{
    for (Item& item : ground->m_group[1-des/10].m_item)
    {
        if (item.h[0] <= 0)
        {
            continue;
        }
        for (QSharedPointer<Buff> pbuff : ground->buff[3][item.g[0]])
        {
            if (pbuff->id == 16420)
            {
                QSharedPointer<Buff0016420> buff = qSharedPointerCast<Buff0016420>(pbuff);
                buff->run(ground);
                return true;
            }
        }
    }
    return true;
}

bool check0016620(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 16620)
        {
            QSharedPointer<Buff0016620> buff = qSharedPointerCast<Buff0016620>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return false;
}

bool check0020820(Ground* ground, int obj, int type)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 20820)
        {
            QSharedPointer<Buff0020820> buff = qSharedPointerCast<Buff0020820>(pbuff);
            buff->run(ground, type);
            break;
        }
    }
    return true;
}

bool check0030120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 30120)
        {
            QSharedPointer<Buff0030120> buff = qSharedPointerCast<Buff0030120>(pbuff);
            buff->run(ground, obj);
            break;
        }
    }
    return true;
}

bool check0050220(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 50220)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0050220(Ground* ground, int pos1, int pos2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos1])
    {
        if (pbuff->id == 50220)
        {
            QSharedPointer<Buff0050220> buff = qSharedPointerCast<Buff0050220>(pbuff);
            buff->run(ground, pos2);
            break;
        }
    }
    return true;
}

bool check0070124(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 70124)
        {
            QSharedPointer<Buff0070124> buff = qSharedPointerCast<Buff0070124>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

bool check0088121(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 88121)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check0088324(Ground* ground, int obj, Item** item2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 883242)
        {
            QSharedPointer<Buff00883242> buff = qSharedPointerCast<Buff00883242>(pbuff);
            int g0 = (*item2)->g[0];
            if (buff->run(ground, g0))
            {
                *item2 = &ground->m_group[g0/10].m_item[g0%10];
            }
            return true;
        }
    }
    return true;
}

bool check0100120(Ground *ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 100120)
        {
            QSharedPointer<Buff0100120> buff = qSharedPointerCast<Buff0100120>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check0100220(Ground *ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj1])
    {
        if (pbuff->id == 100220)
        {
            QSharedPointer<Buff0100220> buff = qSharedPointerCast<Buff0100220>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check0100320(Ground *ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 100320)
        {
            QSharedPointer<Buff0100320> buff = qSharedPointerCast<Buff0100320>(pbuff);
            buff->run(ground, method);
            return true;
        }
    }
    return false;
}

bool check0101021(Ground *ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 101021)
        {
            QSharedPointer<Buff0101021> buff = qSharedPointerCast<Buff0101021>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return false;
}

bool check01010212(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1010212)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check0102021(Ground *ground, int obj, int id)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 102021)
        {
            QSharedPointer<Buff0102021> buff = qSharedPointerCast<Buff0102021>(pbuff);
            buff->run(ground, id);
            return true;
        }
    }
    return false;
}

bool check0104021(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 104021)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check0110120(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[4][obj])
    {
        if (pbuff->id == 110120)
        {
            QSharedPointer<Buff0110120> buff = qSharedPointerCast<Buff0110120>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool check0110321(Ground* ground, int obj1, int obj2, int type)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 110321)
        {
            QSharedPointer<Buff0110321> buff = qSharedPointerCast<Buff0110321>(pbuff);
            buff->run(ground, obj2, type);
            return true;
        }
    }
    return false;
}

bool check0120321(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 120321)
        {
            QSharedPointer<Buff0120321> buff = qSharedPointerCast<Buff0120321>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check0130121(Ground* ground, int obj1, int obj2, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj1])
    {
        if (pbuff->id == 1301211)
        {
            QSharedPointer<Buff01301211> buff = qSharedPointerCast<Buff01301211>(pbuff);
            buff->run(ground, obj2, method);
            return true;
        }
    }
    return false;
}

bool check0140221(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 140221)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check0150221(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1502211)
        {
            QSharedPointer<Buff01502211> buff = qSharedPointerCast<Buff01502211>(pbuff);
            buff->run(ground, method);
            return true;
        }
    }
    return false;
}

bool check1010121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10101212)
        {
            QSharedPointer<Buff10101212> buff = qSharedPointerCast<Buff10101212>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check1010320(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1010320)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check1010420(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10104202)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check1010620(Ground* ground, int pos1, int pos2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos2])
    {
        if (pbuff->id == 1010620)
        {
            QSharedPointer<Buff1010620> buff = qSharedPointerCast<Buff1010620>(pbuff);
            buff->run(ground, pos1);
            break;
        }
    }
    return true;
}

bool check1010721(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 10107212)
        {
            QSharedPointer<Buff10107212> buff = qSharedPointerCast<Buff10107212>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

bool check1010821(Ground* ground, int obj, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10108212)
        {
            QSharedPointer<Buff10108212> buff = qSharedPointerCast<Buff10108212>(pbuff);
            return buff->run(ground, point);
        }
    }
    return false;
}

float check1011021(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj1])
    {
        if (pbuff->id == 1011021)
        {
            QSharedPointer<Buff1011021> buff = qSharedPointerCast<Buff1011021>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return 0.0f;
}

bool check1011320(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 1011320)
        {
            QSharedPointer<Buff1011320> buff = qSharedPointerCast<Buff1011320>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

bool check1020120(Ground* ground, int obj1, int obj2, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj1])
    {
        if (pbuff->id == 1020120)
        {
            QSharedPointer<Buff1020120> buff = qSharedPointerCast<Buff1020120>(pbuff);
            buff->run(ground, obj2, point);
            break;
        }
    }
    return true;
}

bool check1020221(Ground* ground, int pos1, int pos2, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos2])
    {
        if (pbuff->id == 10202212)
        {
            QSharedPointer<Buff10202212> buff = qSharedPointerCast<Buff10202212>(pbuff);
            buff->run(ground, pos1, point);
            break;
        }
    }
    return true;
}

bool check1040121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[2][obj])
    {
        if (pbuff->id == 1040121)
        {
            QSharedPointer<Buff1040121> buff = qSharedPointerCast<Buff1040121>(pbuff);
            buff->run(ground, 0);
            break;
        }
    }
    return true;
}

bool check1060120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1060120)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check1080121(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[9][obj1])
    {
        if (pbuff->id == 1080121)
        {
            QSharedPointer<Buff1080121> buff = qSharedPointerCast<Buff1080121>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

bool check1091120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10911202)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check1091321(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 10913211)
        {
            QSharedPointer<Buff10913211> buff = qSharedPointerCast<Buff10913211>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

bool check1100121(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 1100121)
        {
            QSharedPointer<Buff1100121> buff = qSharedPointerCast<Buff1100121>(pbuff);
            buff->run(ground, point);
            break;
        }
    }
    return true;
}

bool check2010321(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 2010321)
        {
            QSharedPointer<Buff2010321> buff = qSharedPointerCast<Buff2010321>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check2010420(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 2010420)
        {
            QSharedPointer<Buff2010420> buff = qSharedPointerCast<Buff2010420>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check2010520(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 2010520)
        {
            QSharedPointer<Buff2010520> buff = qSharedPointerCast<Buff2010520>(pbuff);
            buff->run(ground, obj2);
            break;
        }
    }
    return true;
}

bool check2020222(Ground* ground, int obj1, int obj2, int method)
{
    if (method == 2223 || method == 3332 || method == 3332)
    {
        return false;
    }
    QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][obj2];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 2020222)
        {
            QSharedPointer<Buff2020222> buff = qSharedPointerCast<Buff2020222>(buffs.at(i));
            buffs.remove(i);
            buff->run(ground, obj1);
            buff->exit(ground);
            return true;
        }
    }
    return false;
}

bool check2030221(Ground* ground, int obj, float point)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 20302212)
        {
            QSharedPointer<Buff20302212> buff = qSharedPointerCast<Buff20302212>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return b;
}

bool check2091121(Ground* ground, int obj, Item** item2, float& point)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 2091121)
        {
            QSharedPointer<Buff2091121> buff = qSharedPointerCast<Buff2091121>(pbuff);
            int obj = (*item2)->g[0];
            if (buff->run(ground, obj, point))
            {
                *item2 = &ground->m_group[obj/10].m_item[obj%10];
                b = true;
            }
            break;
        }
    }
    return b;
}

bool check2011020(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 2011020)
        {
            QSharedPointer<Buff2011020> buff = qSharedPointerCast<Buff2011020>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check2160121(Ground* ground, Item** item2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][(*item2)->g[0]])
    {
        if (pbuff->id == 21601211)
        {
            QSharedPointer<Buff21601211> buff = qSharedPointerCast<Buff21601211>(pbuff);
            int obj;
            if (buff->run(ground, obj))
            {
                *item2 = &ground->m_group[obj/10].m_item[obj%10];
            }
            return true;
        }
    }
    return false;
}

bool check21601213(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[4][obj])
    {
        if (pbuff->id == 21601213)
        {
            QSharedPointer<Buff21601213> buff = qSharedPointerCast<Buff21601213>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool check3010221(Ground* ground, int obj2, int id)
{
    for (int obj : ground->m_sort)
    {
        if (ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
        {
            continue;
        }
        for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
        {
            if (pbuff->id == 3010221)
            {
                QSharedPointer<Buff3010221> buff = qSharedPointerCast<Buff3010221>(pbuff);
                buff->run(ground, obj2, id);
                break;
            }
        }
    }
    return true;
}

bool check3010520(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj])
    {
        if (pbuff->id == 3010520)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check30105202(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 30105202)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool check3010820(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3010820)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check3010921(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 30109211)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool check3011221(Ground* ground, int obj, int a)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3011221)
        {
            QSharedPointer<Buff3011221> buff = qSharedPointerCast<Buff3011221>(pbuff);
            buff->run(ground, a);
            return true;
        }
    }
    return false;
}

bool check3030120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3030120)
        {
            QSharedPointer<Buff3030120> buff = qSharedPointerCast<Buff3030120>(pbuff);
            return buff->run(ground, 0.0f);
        }
    }
    return false;
}

bool check3030120(Ground* ground, Item** item2, float& point)
{
    for (const Item& item : ground->m_group[(*item2)->g[0]/10].m_item)
    {
        if (item.g[0] == (*item2)->g[0] || item.h[0] <= 0)
        {
            continue;
        }
        for (QSharedPointer<Buff> pbuff : ground->buff[3][item.g[0]])
        {
            if (pbuff->id == 3030120)
            {
                QSharedPointer<Buff3030120> buff = qSharedPointerCast<Buff3030120>(pbuff);
                int obj = (*item2)->g[0];
                if (buff->run(ground, obj, point))
                {
                    *item2 = &ground->m_group[obj/10].m_item[obj%10];
                }
                return true;
            }
        }
    }
    return true;
}

bool check3091120(Ground* ground, int obj, int method, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3091120)
        {
            QSharedPointer<Buff3091120> buff = qSharedPointerCast<Buff3091120>(pbuff);
            return buff->run(ground, method, point);
        }
    }
    return false;
}

bool check3091220(Ground* ground, int obj)
{
    QVector<int> objs = Ground::selectObjN(ground, obj, 0x23);
    for (int obj1 : objs)
    {
        for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
        {
            if (pbuff->id == 3091220)
            {
                QSharedPointer<Buff3091220> buff = qSharedPointerCast<Buff3091220>(pbuff);
                buff->run(ground, obj);
                return true;
            }
        }
    }
    return true;
}

bool check3120121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 31201214)
        {
            QSharedPointer<Buff31201214> buff = qSharedPointerCast<Buff31201214>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool check3120221(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 3120221)
        {
            QSharedPointer<Buff3120221> buff = qSharedPointerCast<Buff3120221>(pbuff);
            buff->run(ground, method);
            return true;
        }
    }
    return false;
}

bool check31501211(Ground* ground, Item** item2, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][(*item2)->g[0]])
    {
        if (pbuff->id == 31501211)
        {
            QSharedPointer<Buff31501211> buff = qSharedPointerCast<Buff31501211>(pbuff);
            int obj = buff->run(ground, point);
            *item2 = &ground->m_group[obj/10].m_item[obj%10];
            return true;
        }
    }
    return false;
}

bool check31501212(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 31501212)
        {
            QSharedPointer<Buff31501212> buff = qSharedPointerCast<Buff31501212>(pbuff);
            buff->run(ground, method);
            return true;
        }
    }
    return false;
}

bool check3150221(Ground* ground, int obj1, int obj2, int method, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj1])
    {
        if (pbuff->id == 31502211)
        {
            QSharedPointer<Buff31502211> buff = qSharedPointerCast<Buff31502211>(pbuff);
            buff->run(ground, obj2, method, point);
            return true;
        }
    }
    return false;
}

bool check4010520(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[4][obj1])
    {
        if (pbuff->id == 4010520)
        {
            QSharedPointer<Buff4010520> buff = qSharedPointerCast<Buff4010520>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check4010722(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj1])
    {
        if (pbuff->id == 4010722)
        {
            QSharedPointer<Buff4010722> buff = qSharedPointerCast<Buff4010722>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check4010920(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj])
    {
        if (pbuff->id == 4010920)
        {
            QSharedPointer<Buff4010920> buff = qSharedPointerCast<Buff4010920>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool check4020221(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4020221)
        {
            QSharedPointer<Buff4020221> buff = qSharedPointerCast<Buff4020221>(pbuff);
            buff->run(ground);
            break;
        }
    }
    return true;
}

bool check4040121(Ground* ground, int obj, float& point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4040121)
        {
            QSharedPointer<Buff4040121> buff = qSharedPointerCast<Buff4040121>(pbuff);
            buff->run(ground, obj, point);
            break;
        }
    }
    return true;
}

bool check4070121(Ground* ground, int pos1, int pos2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos2])
    {
        if (pbuff->id == 4070121)
        {
            QSharedPointer<Buff4070121> buff = qSharedPointerCast<Buff4070121>(pbuff);
            buff->run(ground, pos1);
            break;
        }
    }
    return true;
}

bool check4070121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4070121)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

//bool check4070221(Ground* ground, int pos1, int pos2, float point)
//{
//    for (QSharedPointer<Buff> pbuff : ground->buff[3][pos1])
//    {
//        if (pbuff->id == 4070221)
//        {
//            QSharedPointer<Buff4070221> buff = qSharedPointerCast<Buff4070221>(pbuff);
//            buff->run(ground, pos2, point);
//            break;
//        }
//    }
//    return true;
//}

bool check4090121(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4090121)
        {
            QSharedPointer<Buff4090121> buff = qSharedPointerCast<Buff4090121>(pbuff);
            buff->run(ground, point);
            break;
        }
    }
    return true;
}

bool check4110220(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 41102201)
        {
            QSharedPointer<Buff41102201> buff = qSharedPointerCast<Buff41102201>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return false;
}

bool check4110220(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 41102201)
        {
            QSharedPointer<Buff41102201> buff = qSharedPointerCast<Buff41102201>(pbuff);
            buff->run(ground, point);
            break;
        }
    }
    return true;
}

bool check9070124(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 9070124)
        {
            QSharedPointer<Buff9070124> buff = qSharedPointerCast<Buff9070124>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

#ifdef CCZ
bool check500003(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 500003)
        {
            return true;
        }
    }
    return false;
}

bool check500005(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 500005)
        {
            QSharedPointer<Buff500005> buff = qSharedPointerCast<Buff500005>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check500008(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 500008)
        {
            QSharedPointer<Buff500008> buff = qSharedPointerCast<Buff500008>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check5000120(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000120)
        {
            QSharedPointer<Buff5000120> buff = qSharedPointerCast<Buff5000120>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return false;
}

bool check5000220(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000220)
        {
            QSharedPointer<Buff5000220> buff = qSharedPointerCast<Buff5000220>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return false;
}

bool check5000320(Ground* ground, int obj, float point)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000320)
        {
            QSharedPointer<Buff5000320> buff = qSharedPointerCast<Buff5000320>(pbuff);
            buff->run(ground, point);
            return true;
        }
    }
    return false;
}
#endif

#ifdef XYX
bool check6000121(Ground* ground, int obj1, int obj2, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 6000121)
        {
            QSharedPointer<Buff6000121> buff = qSharedPointerCast<Buff6000121>(pbuff);
            return buff->run(ground, obj2, method);
        }
    }
    return false;
}

bool check7000121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 7000121)
        {
            QSharedPointer<Buff7000121> buff = qSharedPointerCast<Buff7000121>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool check7000221(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 7000221)
        {
            QSharedPointer<Buff7000221> buff = qSharedPointerCast<Buff7000221>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check7000321(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 7000321)
        {
            QSharedPointer<Buff7000321> buff = qSharedPointerCast<Buff7000321>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}
#endif

float Ground::addin(Ground* ground, int obj, int n, float point)
{
    if (point < 0)
    {
        point = (ground->m_group[obj/10].m_item[obj%10].i[n] + point) < 0 ? (0 - ground->m_group[obj/10].m_item[obj%10].i[n]) : point;
    }
    return point;
}

void Ground::addi2(Ground* ground, int obj, float point)
{
    ground->m_group[obj/10].m_item[obj%10].i[2] += point;
    if (point > 0.0f)
    {
        check4070121(ground, obj);
    }
}

float Ground::addj9(Ground* ground, int obj, int , float point)
{
    // y=point*(100-x)/100
    float j9 = ground->m_group[obj/10].m_item[obj%10].j[9];
    point *= (100 - j9) / 100;
    return point;
}

float Ground::addj17(Ground* ground, int obj, int , float point)
{
    float j17 = ground->m_group[obj/10].m_item[obj%10].j[17];
    point *= (100 - j17) / 100;
    return point;
}

float Ground::addjn(Ground* ground, int obj, int n, float point)
{
    point = (ground->m_group[obj/10].m_item[obj%10].j[n] + point) > 100 ? (100 - ground->m_group[obj/10].m_item[obj%10].j[n]) : point;
    return point;
}

float Ground::addkn(Ground* ground, int obj, int n, float point)
{
    if (n == 0 || n == 1 || n == 2)
    {
        point = (ground->m_group[obj/10].m_item[obj%10].k[n] + point) > 100 ? (100 - ground->m_group[obj/10].m_item[obj%10].k[n]) : point;
    }
    return point;
}

float Ground::addln(Ground* ground, int obj, int n, float point)
{
    // y=point*(100-x)/100
    float ln = ground->m_group[obj/10].m_item[obj%10].l[n];
    if (ln < 0 && point < 0)
    {
        point *= (100 + ln) / 100;
    }

    return point;
}

float Ground::addbyix(Ground* , float base, float ix, float d)
{
//    return std::pow(base, 1 + ix/1000);
//    return base * std::pow(1.0014, ix);
    return base * (1 + ix / d);
}

float Ground::pointbystar(Ground* ground, float base, int obj, int method, int op)
{
    int star = ground->m_group[obj/10].m_item[obj%10].star / ((method > 1000000 && method < 6000000) ? 2 : 1);
    float point = (base * 3 / 100) * star;
    return base + op * point;
}

float Ground::pointbyh0(Ground* ground, float base, int obj1, int obj2)
{
    return base * ground->m_group[obj1/10].m_item[obj1%10].h[0] / ground->m_group[obj2/10].m_item[obj2%10].h[0];
}

bool Ground::run2223(Ground* ground, int obj1, int obj2, bool b2224, bool b113)
{
    check301081(ground, obj1);
    check3010820(ground, obj1);

    QSharedPointer<Method2223> method = qSharedPointerCast<Method2223>(Method::getMethod(2223));
    int r = method->run(ground, obj1, obj2, b113);
    if (r == 1)
    {
        obj2 = ground->target2223;
        check001490(ground, obj2);
        check001690(ground, obj1);
        check001700(ground, obj1);
        check106011(ground, obj1);

        check0013221(ground, obj1);
        check0014220(ground, obj1);
        check0016220(ground, obj1);
        check0030120(ground, obj1);
        check1010420(ground, obj1);
        check1040121(ground, obj1);
        check0050220(ground, obj1);
        check1060120(ground, obj1);
        check1080121(ground, obj1, obj2);
        check1091120(ground, obj1);
        check01010212(ground, obj1);

        if (b2224)
        {
            Item& item1 = ground->m_group[obj1/10].m_item[obj1%10];
            Item& item2 = ground->m_group[obj2/10].m_item[obj2%10];
            for (int k = 0; k < 4; ++k)
            {
                if (item1.h[0] > 0 && item2.h[0] > 0 && item1.methods[k]%100 == 24)
                {
                    Ground::run2224(ground, &item1, item1.methods[k]);
                }
            }
        }
        checkj8(ground, obj1, obj2);
        check30105202(ground, obj1);
#ifdef CCZ
        check500008(ground, obj1, obj2);
#endif
    }
    else
    {
        check3010520(ground, obj1);
    }
    return (r > 0);
}

bool Ground::run3332(Ground* ground, int obj1, int obj2, bool b113)
{
    check301081(ground, obj1);
    check3010820(ground, obj1);

    QSharedPointer<Method3332> method = qSharedPointerCast<Method3332>(Method::getMethod(3332));
    if (method.isNull() || method->id == 0)
    {
        return false;
    }

    for (int n = 0; n < 2; ++n)
    {
        int p = method->run(ground, obj1, obj2, b113);
        if (p >= 0)
        {
            check001490(ground, obj2);
            check001690(ground, obj1);
            check001700(ground, obj1);
            check106011(ground, obj1);

            check0013221(ground, obj1);
            check0014220(ground, obj1);
            check0016220(ground, obj1);
            check0030120(ground, obj1);
            check1010420(ground, obj1);
            check1040121(ground, obj1);
            check0050220(ground, obj1);
            check1060120(ground, obj1);
            check1080121(ground, obj1, obj2);
            check1091120(ground, obj1);
            check01010212(ground, obj1);

            checkj8(ground, obj1, obj2);
#ifdef CCZ
            if (check500003(ground, obj1))
            {
                continue;
            }
#endif
        }
        else
        {
            check3010520(ground, obj1);
        }
        break;
    }
    return true;
}

bool Ground::run2224(Ground* ground, Item* item1, int m)
{
    if (check301082(ground, item1->g[0]))
    {
        return false;
    }

    auto methodrun = [](Ground* ground, Item* item, QSharedPointer<Method> method, float luck) -> int {
        int r = 0;
        luck += method->getLuck(ground, item);
        if (qrand() % 100 + 1 <= 100 - luck)
        {
            Logger::H().printmethod(ground, item, method.get(), false);
        }
        else
        {
            r = method->run(ground, item);
        }
        return r;
    };

    QSharedPointer<Method> method = Method::getMethod(m);
    if (method.isNull() || method->id == 0)
    {
        return false;
    }

    float jl = item1->j[6];
    for (int n = 0; n < 2; ++n)
    {
        if (n == 1)
        {
            Logger::H().printcustom(ground, m, item1->g[0]); //twice
        }

        int r = methodrun(ground, item1, method, jl);
        if (r == 0 && check009020(ground, item1->g[0]))
        {
            r = methodrun(ground, item1, method, jl);
        }
        if (r == 1)
        {
            check001750(ground, item1->g[0]);
            check401131(ground, item1->g[0]);
            check401151(ground, item1->g[0]);
            check402021(ground, item1->g[0]);

            check4020221(ground, item1->g[0]);
            check1060120(ground, item1->g[0]);
            check1091120(ground, item1->g[0]);
            check3091220(ground, item1->g[0]);
            check0104021(ground, item1->g[0]);

            if (check0070124(ground, item1->g[0], m) || check9070124(ground, item1->g[0], m))
            {
                jl = 999;
                continue;
            }
        }
        break;
    }
    return true;
}

void Ground::checkbuff(Ground* ground, int index, int obj, void (*func)(Ground*, QSharedPointer<Buff>))
{
    QSet<long long> set;
    for (bool b = false; !b; )
    {
        b = true;
        for (QSharedPointer<Buff> buff : ground->buff[index][obj])
        {
            if (set.contains(reinterpret_cast<long long>(buff.data())))
            {
                continue;
            }
            set.insert(reinterpret_cast<long long>(buff.data()));
            func(ground, buff);
            b = false;
            break;
        }
    }
}

void Ground::clearbuff(Ground* ground, int pos, int count)
{
    for (int c = 0; c < count; ++c)
    {
        int size = ground->exceptions[pos].size();
        if (size <= 0)
        {
            return;
        }

        int e = -1;
        int r = qrand() % size;
        QSetIterator<int> i(ground->exceptions[pos]);
        for (int j = 0; j <= r && i.hasNext(); ++j)
        {
            e = i.next();
        }
        if (e > 0)
        {
//            ground->exceptions[pos].remove(e);
            for (int k = 0; k < ground->buff[1][pos].size(); ++k)
            {
                if (ground->buff[1][pos].at(k)->id == e)
                {
                    ground->buff[1][pos][k]->exit(ground);
                    ground->buff[1][pos].remove(k);
                    break;
                }
            }
        }
    }
}

float Ground::getDataHlo(Ground* ground, int obj)
{
    float data = 0.0f;
    for (Item& item : ground->m_group[obj/10].m_item)
    {
        QMapIterator<int, int> l(ground->data[item.g[0]].hlo[0]);
        while (l.hasNext())
        {
            l.next();
            data += l.value();
        }
    }
    return data;
}

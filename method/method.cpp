#include "method.h"
#include "ground.h"
#include "item.h"
#include "buff/buff.h"
#include "buff/buff101.h"
#include "log/logger.h"
#include "ui/name.h"
#include <QVector>
#include "method2223.h"
#include "method3332.h"
#include "method0010122.h"
#include "method0010222.h"
#include "method0010320.h"
#include "method0010422.h"
#include "method0010522.h"
#include "method0010622.h"
#include "method0010722.h"
#include "method0010822.h"
#include "method0010924.h"
#include "method0011024.h"
#include "method0011121.h"
#include "method0011222.h"
#include "method0011322.h"
#include "method0011422.h"
#include "method0011522.h"
#include "method0011622.h"
#include "method0011721.h"
#include "method0011822.h"
#include "method0011922.h"
#include "method0012022.h"
#include "method0012122.h"
#include "method0012222.h"
#include "method0012322.h"
#include "method0012422.h"
#include "method0012522.h"
#include "method0012620.h"
#include "method0012722.h"
#include "method0012822.h"
#include "method0012921.h"
#include "method0013022.h"
#include "method0013122.h"
#include "method0013221.h"
#include "method0013320.h"
#include "method0013424.h"
#include "method0013524.h"
#include "method0013624.h"
#include "method0013724.h"
#include "method0013822.h"
#include "method0013924.h"
#include "method0014024.h"
#include "method0014120.h"
#include "method0014220.h"
#include "method0014321.h"
#include "method0014420.h"
#include "method0014521.h"
#include "method0014621.h"
#include "method0014720.h"
#include "method0014824.h"
#include "method0015621.h"
#include "method0015721.h"
#include "method0015821.h"
#include "method0015921.h"
#include "method0016020.h"
#include "method0016120.h"
#include "method0016220.h"
#include "method0016320.h"
#include "method0016420.h"
#include "method0017022.h"
#include "method0017122.h"
#include "method0017222.h"
#include "method0017322.h"
#include "method0017422.h"
#include "method0017522.h"
#include "method0017622.h"
#include "method0017722.h"
#include "method0017822.h"
#include "method0017922.h"
#include "method0018022.h"
#include "method0018122.h"
#include "method0018222.h"
#include "method0020120.h"
#include "method0020222.h"
#include "method0020324.h"
#include "method0020424.h"
#include "method0020520.h"
#include "method0020621.h"
#include "method0020721.h"
#include "method0020820.h"
#include "method0030120.h"
#include "method0030221.h"
#include "method0030321.h"
#include "method0030422.h"
#include "method0030522.h"
#include "method0030622.h"
#include "method0040121.h"
#include "method0040220.h"
#include "method0040322.h"
#include "method0040424.h"
#include "method0050121.h"
#include "method0050220.h"
#include "method0050322.h"
#include "method0060121.h"
#include "method0060221.h"
#include "method0060324.h"
#include "method0070124.h"
#include "method0070222.h"
#include "method0070322.h"
#include "method0080121.h"
#include "method0080222.h"
#include "method0080324.h"
#include "method0088121.h"
#include "method0088224.h"
#include "method0088324.h"
#include "method0090121.h"
#include "method0090222.h"
#include "method0090324.h"
#include "method0101021.h"
#include "method0102021.h"
#include "method0103022.h"
#include "method0104021.h"
#include "method0100120.h"
#include "method0100220.h"
#include "method0100320.h"
#include "method0110120.h"
#include "method0110222.h"
#include "method0110321.h"
#include "method0120122.h"
#include "method0120222.h"
#include "method0120321.h"
#include "method0130121.h"
#include "method0130222.h"
#include "method0140121.h"
#include "method0140221.h"
#include "method0150120.h"
#include "method0150221.h"
#include "method0160122.h"
#include "method0160220.h"
// insert include
#include "method1010121.h"
#include "method1010221.h"
#include "method1010320.h"
#include "method1010420.h"
#include "method1010521.h"
#include "method1010620.h"
#include "method1010721.h"
#include "method1010821.h"
#include "method1010920.h"
#include "method1011021.h"
#include "method1011122.h"
#include "method1011222.h"
#include "method1011320.h"
#include "method1011422.h"
#include "method1020120.h"
#include "method1020221.h"
#include "method1030122.h"
#include "method1030221.h"
#include "method1040121.h"
#include "method1050122.h"
#include "method1060120.h"
#include "method1080121.h"
#include "method1090121.h"
#include "method1091120.h"
#include "method1091222.h"
#include "method1091321.h"
#include "method1091421.h"
#include "method1100121.h"
#include "method1140121.h"
#include "method1140224.h"
// insert item include 1
#include "method2010121.h"
#include "method2010222.h"
#include "method2010321.h"
#include "method2010420.h"
#include "method2010520.h"
#include "method2010622.h"
#include "method2010721.h"
#include "method2010822.h"
#include "method2010924.h"
#include "method2011020.h"
#include "method2011120.h"
#include "method2020124.h"
#include "method2020222.h"
#include "method2030121.h"
#include "method2030221.h"
#include "method2040120.h"
#include "method2050121.h"
#include "method2080121.h"
#include "method2091121.h"
#include "method2091222.h"
#include "method2100121.h"
#include "method2160121.h"
#include "method2160222.h"
// insert item include 2
#include "method3010121.h"
#include "method3010221.h"
#include "method3010324.h"
#include "method3010422.h"
#include "method3010520.h"
#include "method3010621.h"
#include "method3010722.h"
#include "method3010820.h"
#include "method3010921.h"
#include "method3011022.h"
#include "method3011122.h"
#include "method3011221.h"
#include "method3011322.h"
#include "method3011422.h"
#include "method3020122.h"
#include "method3030120.h"
#include "method3050122.h"
#include "method3080122.h"
#include "method3090124.h"
#include "method3091120.h"
#include "method3091220.h"
#include "method3120121.h"
#include "method3120221.h"
#include "method3150121.h"
#include "method3150221.h"
// insert item include 3
#include "method4010121.h"
#include "method4010222.h"
#include "method4010321.h"
#include "method4010422.h"
#include "method4010520.h"
#include "method4010622.h"
#include "method4010722.h"
#include "method4010820.h"
#include "method4010920.h"
#include "method4011022.h"
#include "method4011121.h"
#include "method4011224.h"
#include "method4011324.h"
#include "method4011422.h"
#include "method4011522.h"
#include "method4020122.h"
#include "method4020221.h"
#include "method4030124.h"
#include "method4040121.h"
#include "method4040222.h"
#include "method4060121.h"
#include "method4060221.h"
#include "method4070121.h"
#include "method4070221.h"
#include "method4070322.h"
#include "method4090121.h"
#include "method4091121.h"
#include "method4091221.h"
#include "method4091321.h"
#include "method4091424.h"
#include "method4110121.h"
#include "method4110220.h"
#include "method4130122.h"
#include "method4130220.h"
// insert item include 4
#ifdef CCZ
#include "method5000120.h"
#include "method5000220.h"
#include "method5000320.h"
#endif
#ifdef XYX
#include "method6000120.h"
#include "method6000121.h"
#include "method6000221.h"
#include "method6000122.h"
#include "method6000124.h"
#include "method7000121.h"
#include "method7000221.h"
#include "method7000321.h"
#endif
#include "method9011922.h"
#include "method9070124.h"


Method::Method()
{

}

Method::~Method()
{

}

int Method::run(Ground* , Item* )
{
    return 0;
}

int Method::run(Ground* , Item* , int )
{
    return 0;
}

QSharedPointer<Method> Method::getMethod(int id)
{
    QSharedPointer<Method> method = 0;
    switch (id)
    {
    case 2223: {
        unsigned char ch[] = {0xe6, 0x99, 0xae, 0xe6, 0x94, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2223>::create();
    } break;
    case 3332: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8d, 0xe5, 0x87, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3332>::create();
    } break;
    case 10122: {
        unsigned char ch[] = {0xe6, 0xb8, 0x85, 0xe9, 0xa3, 0x8e, 0xe9, 0xa9, 0xb1, 0xe7, 0x96, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010122>::create();
    } break;
    case 10222: {
        unsigned char ch[] = {0xe6, 0x96, 0x87, 0xe6, 0xad, 0xa6, 0xe5, 0x8f, 0x8c, 0xe5, 0x85, 0xa8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010222>::create();
    } break;
    case 10320: {
        unsigned char ch[] = {0xe4, 0xb8, 0x87, 0xe5, 0xa4, 0xab, 0xe8, 0x8e, 0xab, 0xe5, 0xbd, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010320>::create();
    } break;
    case 10422: {
        unsigned char ch[] = {0xe4, 0xbc, 0x8f, 0xe5, 0x85, 0xb5, 0xe5, 0x9b, 0x9b, 0xe8, 0xb5, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010422>::create();
    } break;
    case 10522: {
        unsigned char ch[] = {0xe6, 0x96, 0x99, 0xe4, 0xba, 0x8b, 0xe5, 0xa6, 0x82, 0xe7, 0xa5, 0x9e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010522>::create();
    } break;
    case 10622: {
        unsigned char ch[] = {0xe6, 0xb4, 0x9e, 0xe8, 0x8b, 0xa5, 0xe8, 0xa7, 0x82, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010622>::create();
    } break;
    case 10722: {
        unsigned char ch[] = {0xe7, 0xa0, 0xb4, 0xe9, 0x98, 0xb5, 0xe9, 0xa9, 0xb0, 0xe5, 0x9b, 0xb4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010722>::create();
    } break;
    case 10822: {
        unsigned char ch[] = {0xe8, 0xbf, 0x90, 0xe7, 0xad, 0xb9, 0xe5, 0xb8, 0xb7, 0xe5, 0xb9, 0x84};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010822>::create();
    } break;
    case 10924: {
        unsigned char ch[] = {0xe9, 0x93, 0x81, 0xe9, 0xaa, 0x91, 0xe6, 0xa8, 0xaa, 0xe5, 0x86, 0xb2};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0010924>::create();
    } break;
    case 11024: {
        unsigned char ch[] = {0xe6, 0xa8, 0xaa, 0xe6, 0x89, 0xab, 0xe5, 0x8d, 0x83, 0xe5, 0x86, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011024>::create();
    } break;
    case 11121: {
        unsigned char ch[] = {0xe8, 0x88, 0x8d, 0xe7, 0x94, 0x9f, 0xe5, 0x8f, 0x96, 0xe4, 0xb9, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011121>::create();
    } break;
    case 11222: {
        unsigned char ch[] = {0xe6, 0x8c, 0x87, 0xe7, 0x82, 0xb9, 0xe4, 0xb9, 0xbe, 0xe5, 0x9d, 0xa4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011222>::create();
    } break;
    case 11322: {
        unsigned char ch[] = {0xe6, 0xb0, 0xb4, 0xe6, 0xb7, 0xb9, 0xe4, 0xb8, 0x83, 0xe5, 0x86, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011322>::create();
    } break;
    case 11422: {
        unsigned char ch[] = {0xe5, 0x87, 0xba, 0xe5, 0x85, 0xb6, 0xe4, 0xb8, 0x8d, 0xe6, 0x84, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011422>::create();
    } break;
    case 11522: {
        unsigned char ch[] = {0xe5, 0xa5, 0x87, 0xe9, 0x97, 0xa8, 0xe9, 0x81, 0x81, 0xe7, 0x94, 0xb2};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011522>::create();
    } break;
    case 11622: {
        unsigned char ch[] = {0xe4, 0xba, 0x94, 0xe9, 0x9b, 0xb7, 0xe8, 0xbd, 0xb0, 0xe9, 0xa1, 0xb6};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011622>::create();
    } break;
    case 11721: {
        unsigned char ch[] = {0xe4, 0xbb, 0xbb, 0xe4, 0xba, 0xba, 0xe6, 0x8b, 0xa9, 0xe5, 0x8a, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011721>::create();
    } break;
    case 11822: {
        unsigned char ch[] = {0xe5, 0x9d, 0x9a, 0xe5, 0xa6, 0x82, 0xe7, 0xa3, 0x90, 0xe7, 0x9f, 0xb3};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011822>::create();
    } break;
    case 11922: {
        unsigned char ch[] = {0xe6, 0x97, 0xa0, 0xe9, 0x9a, 0xbe, 0xe4, 0xb9, 0x8b, 0xe5, 0xbf, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0011922>::create();
    } break;
    case 12022: {
        unsigned char ch[] = {0xe6, 0x96, 0xa9, 0xe5, 0xb0, 0x86, 0xe5, 0xa4, 0xba, 0xe6, 0x97, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012022>::create();
    } break;
    case 12122: {
        unsigned char ch[] = {0xe5, 0x8a, 0xbf, 0xe5, 0xa6, 0x82, 0xe7, 0xa0, 0xb4, 0xe7, 0xab, 0xb9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012122>::create();
    } break;
    case 12222: {
        unsigned char ch[] = {0xe4, 0xb8, 0x8a, 0xe6, 0x99, 0xba, 0xe4, 0xb8, 0xba, 0xe9, 0x97, 0xb4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012222>::create();
    } break;
    case 12322: {
        unsigned char ch[] = {0xe7, 0x83, 0x88, 0xe7, 0x81, 0xab, 0xe7, 0x84, 0x9a, 0xe8, 0x90, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012322>::create();
    } break;
    case 12422: {
        unsigned char ch[] = {0xe9, 0xa3, 0x8e, 0xe5, 0x8d, 0xb7, 0xe6, 0xae, 0x8b, 0xe4, 0xba, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012422>::create();
    } break;
    case 12522: {
        unsigned char ch[] = {0xe5, 0xa8, 0x81, 0xe5, 0x90, 0x8d, 0xe6, 0x98, 0xbe, 0xe8, 0xb5, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012522>::create();
    } break;
    case 12620: {
        unsigned char ch[] = {0xe5, 0xbf, 0x98, 0xe7, 0xa7, 0x81, 0xe7, 0x9b, 0xb8, 0xe5, 0x8a, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012620>::create();
    } break;
    case 12722: {
        unsigned char ch[] = {0xe9, 0x9d, 0x92, 0xe5, 0x9b, 0x8a, 0xe6, 0x80, 0xa5, 0xe6, 0x95, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012722>::create();
    } break;
    case 12822: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa7, 0xe5, 0x88, 0xa9, 0xe5, 0xa4, 0xa9, 0xe7, 0x81, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012822>::create();
    } break;
    case 12921: {
        unsigned char ch[] = {0xe7, 0x8b, 0x82, 0xe9, 0xa3, 0x8e, 0xe5, 0xa4, 0xa7, 0xe4, 0xbd, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0012921>::create();
    } break;
    case 13022: {
        unsigned char ch[] = {0xe6, 0x88, 0x98, 0xe5, 0x85, 0xab, 0xe6, 0x96, 0xb9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013022>::create();
    } break;
    case 13122: {
        unsigned char ch[] = {0xe8, 0xb6, 0x81, 0xe7, 0x81, 0xab, 0xe6, 0x89, 0x93, 0xe5, 0x8a, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013122>::create();
    } break;
    case 13221: {
        unsigned char ch[] = {0xe6, 0x8a, 0xab, 0xe5, 0x9d, 0x9a, 0xe6, 0x89, 0xa7, 0xe9, 0x94, 0x90};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013221>::create();
    } break;
    case 13320: {
        unsigned char ch[] = {0xe4, 0xbb, 0xa5, 0xe9, 0x9d, 0x99, 0xe5, 0x88, 0xb6, 0xe5, 0x8a, 0xa8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013320>::create();
    } break;
    case 13424: {
        unsigned char ch[] = {0xe6, 0x94, 0xbb, 0xe5, 0x85, 0xb6, 0xe4, 0xb8, 0x8d, 0xe5, 0xa4, 0x87};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013424>::create();
    } break;
    case 13524: {
        unsigned char ch[] = {0xe8, 0xae, 0xa1, 0xe8, 0xa2, 0xad, 0xe7, 0xb2, 0xae, 0xe4, 0xbb, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013524>::create();
    } break;
    case 13624: {
        unsigned char ch[] = {0xe8, 0xbe, 0x95, 0xe9, 0x97, 0xa8, 0xe5, 0xb0, 0x84, 0xe6, 0x88, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013624>::create();
    } break;
    case 13724: {
        unsigned char ch[] = {0xe8, 0xbd, 0xbb, 0xe8, 0xa3, 0x85, 0xe9, 0xa9, 0xb0, 0xe6, 0x8f, 0xb4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013724>::create();
    } break;
    case 13822: {
        unsigned char ch[] = {0xe7, 0xa0, 0xb4, 0xe5, 0x86, 0x9b, 0xe8, 0xa2, 0xad, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013822>::create();
    } break;
    case 13924: {
        unsigned char ch[] = {0xe4, 0xb9, 0x98, 0xe8, 0x99, 0x9a, 0xe8, 0x80, 0x8c, 0xe5, 0x85, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0013924>::create();
    } break;
    case 14024: {
        unsigned char ch[] = {0xe5, 0x85, 0xb5, 0xe8, 0xb4, 0xb5, 0xe7, 0xa5, 0x9e, 0xe9, 0x80, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014024>::create();
    } break;
    case 14120: {
        unsigned char ch[] = {0xe6, 0xa8, 0xaa, 0xe5, 0xbe, 0x81, 0xe6, 0x9a, 0xb4, 0xe6, 0x95, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014120>::create();
    } break;
    case 14220: {
        unsigned char ch[] = {0xe5, 0x8b, 0x87, 0xe5, 0x86, 0xa0, 0xe4, 0xb8, 0x89, 0xe5, 0x86, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014220>::create();
    } break;
    case 14321: {
        unsigned char ch[] = {0xe7, 0x99, 0xbe, 0xe6, 0x88, 0x98, 0xe4, 0xb8, 0x8d, 0xe6, 0xae, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014321>::create();
    } break;
    case 14420: {
        unsigned char ch[] = {0xe7, 0x8e, 0x8b, 0xe4, 0xbd, 0x90, 0xe4, 0xb9, 0x8b, 0xe6, 0x89, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014420>::create();
    } break;
    case 14521: {
        unsigned char ch[] = {0xe8, 0x93, 0x84, 0xe5, 0x8a, 0xbf, 0xe5, 0xbe, 0x85, 0xe5, 0x8f, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014521>::create();
    } break;
    case 14621: {
        unsigned char ch[] = {0xe6, 0x96, 0xad, 0xe6, 0x95, 0x8c, 0xe7, 0xb2, 0xae, 0xe9, 0x81, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014621>::create();
    } break;
    case 14720: {
        unsigned char ch[] = {0xe9, 0x94, 0x90, 0xe4, 0xb8, 0x8d, 0xe5, 0x8f, 0xaf, 0xe5, 0xbd, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014720>::create();
    } break;
    case 14824: {
        unsigned char ch[] = {0xe5, 0x8d, 0x83, 0xe9, 0x87, 0x8c, 0xe7, 0xaa, 0x81, 0xe8, 0xa2, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0014824>::create();
    } break;
    case 15621: {
        unsigned char ch[] = {0xe9, 0x93, 0xb8, 0xe7, 0x94, 0xb2, 0xe9, 0x94, 0x80, 0xe6, 0x88, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0015621>::create();
    } break;
    case 15721: {
        unsigned char ch[] = {0xe9, 0x81, 0xbf, 0xe5, 0x85, 0xb6, 0xe9, 0x94, 0x90, 0xe6, 0xb0, 0x94};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0015721>::create();
    } break;
    case 15821: {
        unsigned char ch[] = {0xe6, 0x96, 0x87, 0xe6, 0xb2, 0xbb, 0xe6, 0xad, 0xa6, 0xe5, 0x8a, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0015821>::create();
    } break;
    case 15921: {
        unsigned char ch[] = {0xe4, 0xb8, 0x8a, 0xe5, 0x85, 0xb5, 0xe4, 0xbc, 0x90, 0xe8, 0xb0, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0015921>::create();
    } break;
    case 16020: {
        unsigned char ch[] = {0xe9, 0xaa, 0x81, 0xe5, 0x8b, 0x87, 0xe4, 0xb9, 0x8b, 0xe5, 0xa7, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0016020>::create();
    } break;
    case 16120: {
        unsigned char ch[] = {0xe8, 0xae, 0xa1, 0xe9, 0x80, 0x90, 0xe7, 0xa9, 0xb7, 0xe5, 0xaf, 0x87};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0016120>::create();
    } break;
    case 16220: {
        unsigned char ch[] = {0xe4, 0xbb, 0xa5, 0xe6, 0x88, 0x98, 0xe5, 0x85, 0xbb, 0xe6, 0x88, 0x98};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0016220>::create();
    } break;
    case 16320: {
        unsigned char ch[] = {0xe6, 0x9d, 0xa5, 0xe5, 0xa5, 0xbd, 0xe6, 0x81, 0xaf, 0xe5, 0xb8, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0016320>::create();
    } break;
    case 16420: {
        unsigned char ch[] = {0xe8, 0xb0, 0x88, 0xe7, 0xac, 0x91, 0xe8, 0xaf, 0x9b, 0xe5, 0xbf, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0016420>::create();
    } break;
    case 17022: {
        unsigned char ch[] = {0xe5, 0x92, 0x8f, 0xe6, 0xad, 0x8c, 0xe5, 0xb0, 0x9d, 0xe9, 0x85, 0x92};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017022>::create();
    } break;
    case 17122: {
        unsigned char ch[] = {0xe7, 0x81, 0xab, 0xe7, 0xbe, 0xbd};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017122>::create();
    } break;
    case 17222: {
        unsigned char ch[] = {0xe7, 0x96, 0xbe, 0xe8, 0xa1, 0x8c, 0xe4, 0xbe, 0xa7, 0xe5, 0x87, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017222>::create();
    } break;
    case 17322: {
        unsigned char ch[] = {0xe5, 0x9d, 0x9a, 0xe5, 0xa3, 0x81, 0xe6, 0xb8, 0x85, 0xe9, 0x87, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017322>::create();
    } break;
    case 17422: {
        unsigned char ch[] = {0xe5, 0xb1, 0x88, 0xe4, 0xba, 0xba, 0xe4, 0xb9, 0x8b, 0xe5, 0x85, 0xb5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017422>::create();
    } break;
    case 17522: {
        unsigned char ch[] = {0xe5, 0x85, 0x8b, 0xe6, 0x95, 0x8c, 0xe5, 0xa6, 0x82, 0xe9, 0xa3, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017522>::create();
    } break;
    case 17622: {
        unsigned char ch[] = {0xe6, 0x9d, 0x9f, 0xe6, 0x89, 0x8b, 0xe6, 0x97, 0xa0, 0xe7, 0xad, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017622>::create();
    } break;
    case 17722: {
        unsigned char ch[] = {0xe5, 0x86, 0xb3, 0xe6, 0xb0, 0xb4, 0xe7, 0xa0, 0xb4, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017722>::create();
    } break;
    case 17822: {
        unsigned char ch[] = {0xe4, 0xb8, 0x80, 0xe8, 0xae, 0xa1, 0xe5, 0x86, 0xb3, 0xe8, 0x83, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017822>::create();
    } break;
    case 17922: {
        unsigned char ch[] = {0xe8, 0xbf, 0x8e, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0017922>::create();
    } break;
    case 18022: {
        unsigned char ch[] = {0xe4, 0xbb, 0xbb, 0xe4, 0xba, 0xba, 0xe5, 0x94, 0xaf, 0xe8, 0xb4, 0xa4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0018022>::create();
    } break;
    case 18122: {
        unsigned char ch[] = {0xe7, 0xad, 0xb9, 0xe5, 0x88, 0x92, 0xe8, 0x89, 0xaf, 0xe7, 0xad, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0018122>::create();
    } break;
    case 18222: {
        unsigned char ch[] = {0xe6, 0x8f, 0xad, 0xe7, 0xab, 0xbf, 0xe8, 0x80, 0x8c, 0xe8, 0xb5, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0018222>::create();
    } break;
    case 20120: {
        unsigned char ch[] = {0xe6, 0x91, 0xa7, 0xe5, 0x9d, 0x9a, 0xe5, 0x85, 0x8b, 0xe9, 0x9a, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020120>::create();
    } break;
    case 20222: {
        unsigned char ch[] = {0xe7, 0x9f, 0xa5, 0xe4, 0xba, 0xba, 0xe5, 0x96, 0x84, 0xe4, 0xbb, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020222>::create();
    } break;
    case 20324: {
        unsigned char ch[] = {0xe4, 0xb8, 0x89, 0xe5, 0x86, 0x9b, 0xe5, 0xa4, 0xba, 0xe6, 0xb0, 0x94};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020324>::create();
    } break;
    case 20424: {
        unsigned char ch[] = {0xe4, 0xb9, 0x98, 0xe9, 0x97, 0xb4, 0xe6, 0x8a, 0x95, 0xe9, 0x9a, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020424>::create();
    } break;
    case 20520: {
        unsigned char ch[] = {0xe9, 0x9f, 0xac, 0xe5, 0x85, 0x89, 0xe5, 0x85, 0xbb, 0xe6, 0x99, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020520>::create();
    } break;
    case 20621: {
        unsigned char ch[] = {0xe5, 0xa5, 0x87, 0xe6, 0xad, 0xa3, 0xe7, 0x9b, 0xb8, 0xe7, 0x94, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020621>::create();
    } break;
    case 20721: {
        unsigned char ch[] = {0xe5, 0x9b, 0xba, 0xe8, 0x8b, 0xa5, 0xe9, 0x87, 0x91, 0xe6, 0xb1, 0xa4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020721>::create();
    } break;
    case 20820: {
        unsigned char ch[] = {0xe8, 0x83, 0x9c, 0xe6, 0x95, 0x8c, 0xe7, 0x9b, 0x8a, 0xe5, 0xbc, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0020820>::create();
    } break;
    case 30120: {
        unsigned char ch[] = {0xe7, 0xbc, 0xae, 0xe7, 0x94, 0xb2, 0xe5, 0x8e, 0x89, 0xe5, 0x85, 0xb5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030120>::create();
    } break;
    case 30221: {
        unsigned char ch[] = {0xe5, 0x90, 0x8c, 0xe8, 0x88, 0x9f, 0xe5, 0x85, 0xb1, 0xe6, 0xb5, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030221>::create();
    } break;
    case 30321: {
        unsigned char ch[] = {0xe9, 0x87, 0x91, 0xe5, 0x9f, 0x8e, 0xe6, 0xb1, 0xa4, 0xe6, 0xb1, 0xa0};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030321>::create();
    } break;
    case 30422: {
        unsigned char ch[] = {0xe6, 0x98, 0x8e, 0xe5, 0x85, 0xb6, 0xe8, 0x99, 0x9a, 0xe5, 0xae, 0x9e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030422>::create();
    } break;
    case 30522: {
        unsigned char ch[] = {0xe7, 0x83, 0x88, 0xe7, 0x81, 0xab, 0xe5, 0xbc, 0xa0, 0xe5, 0xa4, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030522>::create();
    } break;
    case 30622: {
        unsigned char ch[] = {0xe5, 0x86, 0xb2, 0xe9, 0x94, 0x90, 0xe5, 0xb7, 0xa7, 0xe5, 0x8f, 0x98};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0030622>::create();
    } break;
    case 40121: {
        unsigned char ch[] = {0xe6, 0x8a, 0x98, 0xe5, 0x86, 0xb2, 0xe5, 0xbe, 0xa1, 0xe4, 0xbe, 0xae};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0040121>::create();
    } break;
    case 40220: {
        unsigned char ch[] = {0xe6, 0xb4, 0x97, 0xe7, 0xb2, 0xbe, 0xe4, 0xbc, 0x90, 0xe9, 0xab, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0040220>::create();
    } break;
    case 40322: {
        unsigned char ch[] = {0xe7, 0xbb, 0x8f, 0xe5, 0xa4, 0xa9, 0xe7, 0xba, 0xac, 0xe5, 0x9c, 0xb0};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0040322>::create();
    } break;
    case 40424: {
        unsigned char ch[] = {0xe6, 0x96, 0x87, 0xe9, 0x9f, 0xac, 0xe6, 0xad, 0xa6, 0xe7, 0x95, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0040424>::create();
    } break;
    case 50121: {
        unsigned char ch[] = {0xe6, 0x8c, 0xab, 0xe9, 0x94, 0x90, 0xe6, 0x8a, 0x98, 0xe9, 0x94, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0050121>::create();
    } break;
    case 50220: {
        unsigned char ch[] = {0xe8, 0xbf, 0x90, 0xe6, 0x99, 0xba, 0xe9, 0x93, 0xba, 0xe8, 0xb0, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0050220>::create();
    } break;
    case 50322: {
        unsigned char ch[] = {0xe5, 0x8d, 0x81, 0xe9, 0x9d, 0xa2, 0xe5, 0x9f, 0x8b, 0xe4, 0xbc, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0050322>::create();
    } break;
    case 60121: {
        unsigned char ch[] = {0xe7, 0xa9, 0xba, 0xe5, 0x9f, 0x8e, 0xe8, 0xae, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0060121>::create();
    } break;
    case 60221: {
        unsigned char ch[] = {0xe6, 0xad, 0xa5, 0xe6, 0xad, 0xa5, 0xe4, 0xb8, 0xba, 0xe8, 0x90, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0060221>::create();
    } break;
    case 60324: {
        unsigned char ch[] = {0xe6, 0x99, 0xba, 0xe7, 0xa0, 0xb4, 0xe5, 0x8d, 0x83, 0xe5, 0x86, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0060324>::create();
    } break;
    case 70124: {
        unsigned char ch[] = {0xe8, 0xb0, 0x8b, 0xe8, 0x80, 0x8c, 0xe5, 0x90, 0x8e, 0xe5, 0x8a, 0xa8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0070124>::create();
    } break;
    case 70222: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe5, 0xa4, 0xa9, 0xe6, 0x83, 0x91, 0xe5, 0xbf, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0070222>::create();
    } break;
    case 70322: {
        unsigned char ch[] = {0xe6, 0x96, 0xad, 0xe6, 0x88, 0x88, 0xe5, 0xa4, 0xba, 0xe9, 0x94, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0070322>::create();
    } break;
    case 80121: {
        unsigned char ch[] = {0xe6, 0x83, 0xa9, 0xe5, 0x89, 0x8d, 0xe6, 0xaf, 0x96, 0xe5, 0x90, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0080121>::create();
    } break;
    case 80222: {
        unsigned char ch[] = {0xe7, 0xa5, 0x9e, 0xe7, 0x95, 0xa5, 0xe5, 0x88, 0xb6, 0xe5, 0x8f, 0x98};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0080222>::create();
    } break;
    case 80324: {
        unsigned char ch[] = {0xe4, 0xb8, 0x87, 0xe5, 0x86, 0x9b, 0xe8, 0xbe, 0x9f, 0xe6, 0x98, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0080324>::create();
    } break;
    case 88121: {
        unsigned char ch[] = {0xe5, 0xa5, 0x87, 0xe5, 0x85, 0xb5, 0xe8, 0xa6, 0x81, 0xe6, 0x9c, 0xaf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0088121>::create();
    } break;
    case 88224: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa7, 0xe5, 0x8f, 0x91, 0xe5, 0xa5, 0x87, 0xe4, 0xb8, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0088224>::create();
    } break;
    case 88324: {
        unsigned char ch[] = {0xe7, 0xa5, 0x9e, 0xe9, 0x94, 0x8b, 0xe7, 0x99, 0xbe, 0xe6, 0xb7, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0088324>::create();
    } break;
    case 90121: {
        unsigned char ch[] = {0xe6, 0xbd, 0x9c, 0xe9, 0xbe, 0x99, 0xe5, 0x9c, 0xa8, 0xe6, 0xb8, 0x8a};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0090121>::create();
    } break;
    case 90222: {
        unsigned char ch[] = {0xe5, 0xbe, 0xa1, 0xe6, 0x95, 0x8c, 0xe4, 0xb8, 0xb4, 0xe5, 0x89, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0090222>::create();
    } break;
    case 90324: {
        unsigned char ch[] = {0xe8, 0x99, 0x8e, 0xe6, 0xad, 0xa5, 0xe8, 0xbf, 0x9e, 0xe7, 0x8e, 0xaf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0090324>::create();
    } break;
    case 100120: {
        unsigned char ch[] = {0xe8, 0xb9, 0x88, 0xe9, 0x94, 0x8b, 0xe9, 0xa5, 0xae, 0xe8, 0xa1, 0x80};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0100120>::create();
    } break;
    case 100220: {
        unsigned char ch[] = {0xe8, 0xb7, 0xb5, 0xe5, 0xa2, 0xa8, 0xe9, 0x9a, 0x8f, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0100220>::create();
    } break;
    case 100320: {
        unsigned char ch[] = {0xe6, 0x9c, 0xba, 0xe5, 0x8f, 0x98, 0xe6, 0x97, 0xa0, 0xe7, 0xa9, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0100320>::create();
    } break;
    case 101021: {
        unsigned char ch[] = {0xe9, 0xad, 0x8f, 0xe6, 0xad, 0xa6, 0xe6, 0x8c, 0xa5, 0xe9, 0x9e, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0101021>::create();
    } break;
    case 102021: {
        unsigned char ch[] = {0xe8, 0x9c, 0x80, 0xe4, 0xb9, 0x89, 0xe8, 0xb4, 0xaf, 0xe8, 0x99, 0xb9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0102021>::create();
    } break;
    case 103022: {
        unsigned char ch[] = {0xe5, 0x90, 0xb4, 0xe7, 0x84, 0xb0, 0xe7, 0x84, 0x9a, 0xe5, 0xa4, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0103022>::create();
    } break;
    case 104021: {
        unsigned char ch[] = {0xe7, 0xbe, 0xa4, 0xe5, 0x88, 0x83, 0xe4, 0xba, 0x89, 0xe9, 0x94, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0104021>::create();
    } break;
    case 110120: {
        unsigned char ch[] = {0xe6, 0x8e, 0xa0, 0xe9, 0x98, 0xb5, 0xe7, 0xa0, 0xb4, 0xe5, 0x86, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0110120>::create();
    } break;
    case 110222: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8a, 0xe9, 0x94, 0x8b, 0xe8, 0x80, 0x8c, 0xe8, 0xaf, 0x95};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0110222>::create();
    } break;
    case 110321: {
        unsigned char ch[] = {0xe8, 0xb0, 0x83, 0xe5, 0x92, 0x8c, 0xe9, 0x98, 0xb4, 0xe9, 0x98, 0xb3};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0110321>::create();
    } break;
    case 120122: {
        unsigned char ch[] = {0xe8, 0xaf, 0xb1, 0xe6, 0x95, 0x8c, 0xe6, 0xb7, 0xb1, 0xe5, 0x85, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0120122>::create();
    } break;
    case 120222: {
        unsigned char ch[] = {0xe9, 0xa3, 0x8e, 0xe5, 0x8a, 0xa9, 0xe7, 0x81, 0xab, 0xe5, 0x8a, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0120222>::create();
    } break;
    case 120321: {
        unsigned char ch[] = {0xe7, 0x9e, 0x8b, 0xe7, 0x9b, 0xae, 0xe6, 0xa8, 0xaa, 0xe7, 0x9f, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0120321>::create();
    } break;
    case 130121: {
        unsigned char ch[] = {0xe6, 0x81, 0xa9, 0xe5, 0xa8, 0x81, 0xe5, 0xb9, 0xb6, 0xe6, 0x96, 0xbd};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0130121>::create();
    } break;
    case 130222: {
        unsigned char ch[] = {0xe6, 0x9c, 0xaa, 0xe9, 0x9b, 0xa8, 0xe7, 0xbb, 0xb8, 0xe7, 0xbc, 0xaa};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0130222>::create();
    } break;
    case  140121: {
        unsigned char ch[] = {0xe5, 0xb2, 0xbf, 0xe7, 0x84, 0xb6, 0xe4, 0xb8, 0x8d, 0xe5, 0x8a, 0xa8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0140121>::create();
    } break;
    case  140221: {
        unsigned char ch[] = {0xe7, 0x9d, 0xbf, 0xe8, 0x99, 0x91, 0xe5, 0x90, 0x88, 0xe5, 0x9b, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0140221>::create();
    } break;
    case  150120: {
        unsigned char ch[] = {0xe6, 0x8b, 0x94, 0xe5, 0x88, 0x80, 0xe7, 0x9b, 0xb8, 0xe5, 0x90, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0150120>::create();
    } break;
    case  150221: {
        unsigned char ch[] = {0xe6, 0xbd, 0x9c, 0xe5, 0xb8, 0x88, 0xe8, 0xa2, 0xad, 0xe8, 0xbf, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0150221>::create();
    } break;
    case 160122: {
        unsigned char ch[] = {0xe4, 0xb9, 0x90, 0xe4, 0xb8, 0x8d, 0xe6, 0x80, 0x9d, 0xe8, 0x9c, 0x80};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0160122>::create();
    } break;
    case 160220: {
        unsigned char ch[] = {0xe6, 0x9a, 0x97, 0xe6, 0xb8, 0xa1, 0xe9, 0x98, 0xb4, 0xe5, 0xb9, 0xb3};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method0160220>::create();
    } break;
// insert case
    case 1010121: {
        unsigned char ch[] = {0xe4, 0xb9, 0xb1, 0xe4, 0xb8, 0x96, 0xe5, 0xa5, 0xb8, 0xe9, 0x9b, 0x84};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010121>::create();
    } break;
    case 1010221: {
        unsigned char ch[] = {0xe7, 0xae, 0x97, 0xe6, 0x97, 0xa0, 0xe9, 0x81, 0x97, 0xe7, 0xad, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010221>::create();
    } break;
    case 1010320: {
        unsigned char ch[] = {0xe5, 0x8f, 0xa4, 0xe4, 0xb9, 0x8b, 0xe6, 0x81, 0xb6, 0xe6, 0x9d, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010320>::create();
    } break;
    case 1010420: {
        unsigned char ch[] = {0xe8, 0xa3, 0xb8, 0xe8, 0xa1, 0xa3, 0xe8, 0xa1, 0x80, 0xe6, 0x88, 0x98};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010420>::create();
    } break;
    case 1010521: {
        unsigned char ch[] = {0xe5, 0xb1, 0xaf, 0xe7, 0x94, 0xb0, 0xe4, 0xbb, 0xa4};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010521>::create();
    } break;
    case 1010620: {
        unsigned char ch[] = {0xe5, 0x88, 0x9a, 0xe7, 0x83, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010620>::create();
    } break;
    case 1010721: {
        unsigned char ch[] = {0xe6, 0xb5, 0x81, 0xe9, 0xa3, 0x8e, 0xe5, 0x9b, 0x9e, 0xe9, 0x9b, 0xaa};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010721>::create();
    } break;
    case 1010821: {
        unsigned char ch[] = {0xe5, 0xbb, 0xba, 0xe8, 0xae, 0xa1, 0xe4, 0xb8, 0xbe, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010821>::create();
    } break;
    case 1010920: {
        unsigned char ch[] = {0xe7, 0xa5, 0x9e, 0xe9, 0x80, 0x9f, 0xe5, 0xa5, 0x94, 0xe8, 0xa2, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1010920>::create();
    } break;
    case 1011021: {
        unsigned char ch[] = {0xe5, 0x9b, 0xba, 0xe9, 0x95, 0x87, 0xe8, 0xa5, 0x84, 0xe6, 0xa8, 0x8a};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1011021>::create();
    } break;
    case 1011122: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa7, 0xe7, 0xa0, 0xb4, 0xe8, 0xa1, 0x97, 0xe4, 0xba, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1011122>::create();
    } break;
    case 1011222: {
        unsigned char ch[] = {0xe5, 0x8b, 0x87, 0xe5, 0x86, 0xa0, 0xe8, 0xb4, 0xb2, 0xe8, 0x82, 0xb2};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1011222>::create();
    } break;
    case 1011320: {
        unsigned char ch[] = {0xe6, 0x8c, 0x81, 0xe5, 0x86, 0x9b, 0xe6, 0xaf, 0x85, 0xe9, 0x87, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1011320>::create();
    } break;
    case 1011422: {
        unsigned char ch[] = {0xe9, 0x95, 0xbf, 0xe9, 0xa9, 0xb1, 0xe7, 0x9b, 0xb4, 0xe5, 0x85, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1011422>::create();
    } break;
    case 1020120: {
        unsigned char ch[] = {0xe9, 0xa3, 0x8e, 0xe8, 0xa2, 0xad, 0xe9, 0x80, 0x8d, 0xe9, 0x81, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1020120>::create();
    } break;
    case 1020221: {
        unsigned char ch[] = {0xe8, 0xaf, 0xa1, 0xe9, 0x81, 0x93, 0xe7, 0x8e, 0x84, 0xe6, 0x9c, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1020221>::create();
    } break;
    case 1030122: {
        unsigned char ch[] = {0xe9, 0xb9, 0xb0, 0xe8, 0xa7, 0x86, 0xe7, 0x8b, 0xbc, 0xe9, 0xa1, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1030122>::create();
    } break;
    case 1030221: {
        unsigned char ch[] = {0xe5, 0x85, 0x88, 0xe7, 0x99, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1030221>::create();
    } break;
    case 1040121: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa9, 0xe4, 0xb8, 0x8b, 0xe9, 0xaa, 0x81, 0xe9, 0x94, 0x90};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1040121>::create();
    } break;
    case 1050122: {
        unsigned char ch[] = {0xe5, 0x8d, 0x81, 0xe4, 0xba, 0x8c, 0xe5, 0xa5, 0x87, 0xe7, 0xad, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1050122>::create();
    } break;
    case 1060120: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa7, 0xe7, 0xad, 0x96, 0xe5, 0xbc, 0x95, 0xe9, 0x94, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1060120>::create();
    } break;
    case 1080121: {
        unsigned char ch[] = {0xe8, 0x8d, 0xbc, 0xe8, 0x98, 0xbc, 0xe5, 0xbf, 0x83, 0xe8, 0xae, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1080121>::create();
    } break;
    case 1090121: {
        unsigned char ch[] = {0xe6, 0x9d, 0x83, 0xe5, 0xbe, 0xa1, 0xe4, 0xb9, 0x9d, 0xe9, 0x94, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1090121>::create();
    } break;
    case 1091120: {
        unsigned char ch[] = {0xe5, 0xa8, 0x81, 0xe9, 0x9c, 0x87, 0xe9, 0x80, 0x8d, 0xe9, 0x81, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1091120>::create();
    } break;
    case 1091222: {
        unsigned char ch[] = {0xe7, 0xa0, 0xb4, 0xe9, 0x98, 0xb5, 0xe6, 0x96, 0xa9, 0xe5, 0xb0, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1091222>::create();
    } break;
    case 1091321: {
        unsigned char ch[] = {0xe9, 0x93, 0x81, 0xe5, 0xa3, 0x81, 0xe6, 0x8d, 0xae, 0xe5, 0xae, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1091321>::create();
    } break;
    case 1091421: {
        unsigned char ch[] = {0xe5, 0x85, 0xab, 0xe9, 0x97, 0xa8, 0xe9, 0x87, 0x91, 0xe9, 0x94, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1091421>::create();
    } break;
    case 1100121: {
        unsigned char ch[] = {0xe7, 0xb4, 0xa0, 0xe8, 0xa1, 0xa3, 0xe7, 0xba, 0xa6, 0xe4, 0xbf, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1100121>::create();
    } break;
    case 1140121: {
        unsigned char ch[] = {0xe5, 0x8d, 0x83, 0xe6, 0x9c, 0xba, 0xe9, 0x87, 0x8d, 0xe5, 0x9f, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1140121>::create();
    } break;
    case 1140224: {
        unsigned char ch[] = {0xe6, 0x81, 0x83, 0xe5, 0x8b, 0x87, 0xe5, 0x85, 0x8b, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method1140224>::create();
    } break;
// insert item case 1
    case 2010121: {
        unsigned char ch[] = {0xe6, 0x90, 0xba, 0xe6, 0xb0, 0x91, 0xe6, 0xb8, 0xa1, 0xe6, 0xb1, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010121>::create();
    } break;
    case 2010222: {
        unsigned char ch[] = {0xe5, 0xa8, 0x81, 0xe9, 0x9c, 0x87, 0xe5, 0x8d, 0x8e, 0xe5, 0xa4, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010222>::create();
    } break;
    case 2010321: {
        unsigned char ch[] = {0xe8, 0x8d, 0x89, 0xe8, 0x88, 0xb9, 0xe5, 0x80, 0x9f, 0xe7, 0xae, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010321>::create();
    } break;
    case 2010420: {
        unsigned char ch[] = {0xe4, 0xb8, 0x83, 0xe8, 0xbf, 0x9b, 0xe4, 0xb8, 0x83, 0xe5, 0x87, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010420>::create();
    } break;
    case 2010520: {
        unsigned char ch[] = {0xe7, 0xba, 0xb5, 0xe9, 0xa9, 0xac, 0xe6, 0xa8, 0xaa, 0xe6, 0x9e, 0xaa};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010520>::create();
    } break;
    case 2010622: {
        unsigned char ch[] = {0xe4, 0xb8, 0x87, 0xe4, 0xba, 0xba, 0xe4, 0xb9, 0x8b, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010622>::create();
    } break;
    case 2010721: {
        unsigned char ch[] = {0xe6, 0x9c, 0xa8, 0xe7, 0x89, 0x9b, 0xe6, 0xb5, 0x81, 0xe9, 0xa9, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010721>::create();
    } break;
    case 2010822: {
        unsigned char ch[] = {0xe6, 0x8a, 0x98, 0xe8, 0x8a, 0x82, 0xe5, 0xad, 0xa6, 0xe9, 0x97, 0xae};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010822>::create();
    } break;
    case 2010924: {
        unsigned char ch[] = {0xe5, 0xae, 0x9a, 0xe5, 0x86, 0x9b, 0xe6, 0x89, 0xac, 0xe5, 0xa8, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2010924>::create();
    } break;
    case 2011020: {
        unsigned char ch[] = {0xe9, 0xbe, 0x99, 0xe5, 0x90, 0x9f, 0xe5, 0x9b, 0x9b, 0xe6, 0xb5, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2011020>::create();
    } break;
    case 2011120: {
        unsigned char ch[] = {0xe5, 0xbf, 0xa0, 0xe7, 0x83, 0x88, 0xe5, 0x8b, 0x87, 0xe6, 0xad, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2011120>::create();
    } break;
    case 2020124: {
        unsigned char ch[] = {0xe7, 0xba, 0xa2, 0xe5, 0xa6, 0x86, 0xe7, 0xbc, 0xad, 0xe4, 0xb9, 0xb1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2020124>::create();
    } break;
    case 2020222: {
        unsigned char ch[] = {0xe7, 0x9d, 0xb9, 0xe4, 0xba, 0x8b, 0xe7, 0x9f, 0xa5, 0xe6, 0x9c, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2020222>::create();
    } break;
    case 2030121: {
        unsigned char ch[] = {0xe7, 0x9a, 0x87, 0xe6, 0x80, 0x9d, 0xe6, 0xb7, 0x91, 0xe4, 0xbb, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2030121>::create();
    } break;
    case 2030221: {
        unsigned char ch[] = {0xe8, 0xbf, 0x9e, 0xe7, 0x8e, 0xaf, 0xe8, 0xae, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2030221>::create();
    } break;
    case 2040120: {
        unsigned char ch[] = {0xe8, 0x99, 0x8e, 0xe5, 0x95, 0xb8, 0xe7, 0x94, 0x9f, 0xe5, 0xa8, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2040120>::create();
    } break;
    case 2050121: {
        unsigned char ch[] = {0xe4, 0xb9, 0x9d, 0xe4, 0xbc, 0x90, 0xe4, 0xb8, 0xad, 0xe5, 0x8e, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2050121>::create();
    } break;
    case 2080121: {
        unsigned char ch[] = {0xe6, 0x98, 0x9f, 0xe7, 0xbd, 0x97, 0xe6, 0xa3, 0x8b, 0xe5, 0xb8, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2080121>::create();
    } break;
    case 2091121: {
        unsigned char ch[] = {0xe5, 0x8d, 0x83, 0xe9, 0x87, 0x8c, 0xe5, 0x8d, 0x95, 0xe9, 0xaa, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2091121>::create();
    } break;
    case 2091222: {
        unsigned char ch[] = {0xe5, 0x8d, 0x95, 0xe5, 0x88, 0x80, 0xe8, 0xb5, 0xb4, 0xe4, 0xbc, 0x9a};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2091222>::create();
    } break;
    case 2100121: {
        unsigned char ch[] = {0xe5, 0xad, 0x90, 0xe5, 0x8d, 0x88, 0xe5, 0xa5, 0x87, 0xe8, 0xb0, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2100121>::create();
    } break;
    case 2160121: {
        unsigned char ch[] = {0xe9, 0x87, 0x8a, 0xe6, 0x9d, 0x83, 0xe5, 0xbe, 0xa1, 0xe4, 0xb8, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2160121>::create();
    } break;
    case 2160222: {
        unsigned char ch[] = {0xe6, 0x89, 0x98, 0xe5, 0xad, 0xa4, 0xe8, 0xb5, 0xb4, 0xe4, 0xb9, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method2160222>::create();
    } break;
// insert item case 2
    case 3010121: {
        unsigned char ch[] = {0xe8, 0x99, 0x8e, 0xe8, 0xb8, 0x9e, 0xe6, 0xb1, 0x9f, 0xe4, 0xb8, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010121>::create();
    } break;
    case 3010221: {
        unsigned char ch[] = {0xe4, 0xb8, 0xb4, 0xe6, 0x9c, 0xba, 0xe5, 0x88, 0xb6, 0xe8, 0x83, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010221>::create();
    } break;
    case 3010324: {
        unsigned char ch[] = {0xe5, 0xbc, 0x93, 0xe8, 0x85, 0xb0, 0xe5, 0xa7, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010324>::create();
    } break;
    case 3010422: {
        unsigned char ch[] = {0xe7, 0x99, 0xbd, 0xe8, 0xa1, 0xa3, 0xe6, 0xb8, 0xa1, 0xe6, 0xb1, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010422>::create();
    } break;
    case 3010520: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa6, 0xe6, 0x97, 0xa0, 0xe8, 0x99, 0x9a, 0xe5, 0x8f, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010520>::create();
    } break;
    case 3010621: {
        unsigned char ch[] = {0xe5, 0x9b, 0xbd, 0xe8, 0x89, 0xb2};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010621>::create();
    } break;
    case 3010722: {
        unsigned char ch[] = {0xe5, 0x88, 0x92, 0xe6, 0xb9, 0x98, 0xe5, 0x88, 0x86, 0xe8, 0x8d, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010722>::create();
    } break;
    case 3010820: {
        unsigned char ch[] = {0xe9, 0x94, 0xa6, 0xe5, 0xb8, 0x86, 0xe6, 0xb8, 0xa0, 0xe9, 0xad, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010820>::create();
    } break;
    case 3010921: {
        unsigned char ch[] = {0xe7, 0x99, 0xbe, 0xe9, 0x87, 0x8c, 0xe7, 0x96, 0x91, 0xe5, 0x9f, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3010921>::create();
    } break;
    case 3011022: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa9, 0xe9, 0xa6, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3011022>::create();
    } break;
    case 3011122: {
        unsigned char ch[] = {0xe5, 0x88, 0xb6, 0xe9, 0x9c, 0xb8, 0xe6, 0xb1, 0x9f, 0xe4, 0xb8, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3011122>::create();
    } break;
    case 3011221: {
        unsigned char ch[] = {0xe5, 0x85, 0xb4, 0xe7, 0x8e, 0x8b, 0xe5, 0xae, 0x9a, 0xe9, 0x9c, 0xb8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3011221>::create();
    } break;
    case 3011322: {
        unsigned char ch[] = {0xe8, 0x8b, 0xa6, 0xe8, 0x82, 0x89, 0xe8, 0xae, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3011322>::create();
    } break;
    case 3011422: {
        unsigned char ch[] = {0xe6, 0xad, 0xa6, 0xe7, 0x83, 0x88, 0xe7, 0xa0, 0xb4, 0xe8, 0x99, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3011422>::create();
    } break;
    case 3020122: {
        unsigned char ch[] = {0xe7, 0x81, 0xab, 0xe7, 0x83, 0xa7, 0xe8, 0xbf, 0x9e, 0xe8, 0x90, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3020122>::create();
    } break;
    case 3030120: {
        unsigned char ch[] = {0xe4, 0xb8, 0x8d, 0xe5, 0xb1, 0x88, 0xe6, 0x84, 0x8f, 0xe5, 0xbf, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3030120>::create();
    } break;
    case 3050122: {
        unsigned char ch[] = {0xe6, 0xb7, 0x91, 0xe6, 0x87, 0xbf, 0xe4, 0xb9, 0x8b, 0xe5, 0xbe, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3050122>::create();
    } break;
    case 3080122: {
        unsigned char ch[] = {0xe7, 0x9b, 0xb4, 0xe8, 0xb0, 0x8f, 0xe5, 0x9b, 0xba, 0xe6, 0x94, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3080122>::create();
    } break;
    case 3090124: {
        unsigned char ch[] = {0xe6, 0x97, 0x8b, 0xe7, 0x95, 0xa5, 0xe5, 0x8b, 0x87, 0xe8, 0xbf, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3090124>::create();
    } break;
    case 3091120: {
        unsigned char ch[] = {0xe7, 0x9b, 0xb4, 0xe8, 0xb0, 0x8f, 0xe5, 0x9b, 0xba, 0xe6, 0x94, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3091120>::create();
    } break;
    case 3091220: {
        unsigned char ch[] = {0xe7, 0x99, 0xbe, 0xe9, 0xaa, 0x91, 0xe5, 0x8a, 0xab, 0xe6, 0xb1, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3091220>::create();
    } break;
    case 3120121: {
        unsigned char ch[] = {0xe5, 0x86, 0xb3, 0xe5, 0xa0, 0xb0, 0xe5, 0x80, 0xbe, 0xe6, 0xb6, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3120121>::create();
    } break;
    case 3120221: {
        unsigned char ch[] = {0xe6, 0x85, 0x8e, 0xe6, 0x80, 0x9d, 0xe7, 0xac, 0x83, 0xe8, 0xa1, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3120221>::create();
    } break;
    case 3150121: {
        unsigned char ch[] = {0xe7, 0x84, 0xb0, 0xe7, 0x87, 0x8e, 0xe6, 0xb1, 0x9f, 0xe5, 0xa4, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3150121>::create();
    } break;
    case 3150221: {
        unsigned char ch[] = {0xe5, 0x87, 0xa4, 0xe4, 0xbb, 0xaa, 0xe6, 0xb7, 0x91, 0xe6, 0x85, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method3150221>::create();
    } break;
// insert item case 3
    case 4010121: {
        unsigned char ch[] = {0xe6, 0x9d, 0x83, 0xe5, 0x80, 0xbe, 0xe6, 0x9c, 0x9d, 0xe9, 0x87, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010121>::create();
    } break;
    case 4010222: {
        unsigned char ch[] = {0xe9, 0xaa, 0x81, 0xe5, 0x8b, 0x87, 0xe6, 0x97, 0xa0, 0xe5, 0x89, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010222>::create();
    } break;
    case 4010321: {
        unsigned char ch[] = {0xe9, 0xba, 0xbb, 0xe6, 0xb2, 0xb8, 0xe6, 0x95, 0xa3};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010321>::create();
    } break;
    case 4010422: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe5, 0xa4, 0xa9, 0xe5, 0xbd, 0x93, 0xe7, 0xab, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010422>::create();
    } break;
    case 4010520: {
        unsigned char ch[] = {0xe9, 0x97, 0xad, 0xe6, 0x9c, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010520>::create();
    } break;
    case 4010622: {
        unsigned char ch[] = {0xe6, 0x82, 0xb2, 0xe6, 0x84, 0xa4, 0xe8, 0xaf, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010622>::create();
    } break;
    case 4010722: {
        unsigned char ch[] = {0xe9, 0xb8, 0xa9, 0xe9, 0xa5, 0xae, 0xe6, 0xaf, 0x92, 0xe5, 0xbc, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010722>::create();
    } break;
    case 4010820: {
        unsigned char ch[] = {0xe9, 0x99, 0xb7, 0xe9, 0x98, 0xb5, 0xe8, 0xb9, 0x88, 0xe9, 0x9a, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010820>::create();
    } break;
    case 4010920: {
        unsigned char ch[] = {0xe9, 0xa1, 0xbe, 0xe7, 0x9b, 0xbc, 0xe7, 0x94, 0x9f, 0xe5, 0xa7, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4010920>::create();
    } break;
    case 4011022: {
        unsigned char ch[] = {0xe5, 0xa6, 0x96, 0xe9, 0xa3, 0x8e, 0xe5, 0xa4, 0xa7, 0xe4, 0xbd, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011022>::create();
    } break;
    case 4011121: {
        unsigned char ch[] = {0xe5, 0x90, 0x88, 0xe8, 0x81, 0x9a, 0xe7, 0xbe, 0xa4, 0xe9, 0x9b, 0x84};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011121>::create();
    } break;
    case 4011224: {
        unsigned char ch[] = {0xe8, 0x86, 0x82, 0xe5, 0x8a, 0x9b, 0xe8, 0xbf, 0x87, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011224>::create();
    } break;
    case 4011324: {
        unsigned char ch[] = {0xe4, 0xba, 0xa4, 0xe9, 0x94, 0x8b, 0xe9, 0x9c, 0x87, 0xe5, 0xa8, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011324>::create();
    } break;
    case 4011422: {
        unsigned char ch[] = {0xe5, 0xa6, 0x96, 0xe6, 0xad, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011422>::create();
    } break;
    case 4011522: {
        unsigned char ch[] = {0xe8, 0x80, 0x80, 0xe6, 0xad, 0xa6, 0xe6, 0x89, 0xac, 0xe5, 0xa8, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4011522>::create();
    } break;
    case 4020122: {
        unsigned char ch[] = {0xe8, 0x8d, 0x90, 0xe8, 0xae, 0xa1, 0xe9, 0x98, 0xbb, 0xe6, 0x95, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4020122>::create();
    } break;
    case 4020221: {
        unsigned char ch[] = {0xe6, 0x99, 0xba, 0xe4, 0xbb, 0xa4, 0xe4, 0xbb, 0x8e, 0xe8, 0xae, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4020221>::create();
    } break;
    case 4030124: {
        unsigned char ch[] = {0xe5, 0xa8, 0x81, 0xe9, 0x9c, 0x87, 0xe5, 0xa1, 0x9e, 0xe5, 0xa4, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4030124>::create();
    } break;
    case 4040121: {
        unsigned char ch[] = {0xe4, 0xba, 0x91, 0xe8, 0xa1, 0x8c, 0xe9, 0x9b, 0xa8, 0xe6, 0x96, 0xbd};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4040121>::create();
    } break;
    case 4040222: {
        unsigned char ch[] = {0xe9, 0xa3, 0x8e, 0xe7, 0x96, 0xbe, 0xe9, 0x9b, 0xa8, 0xe6, 0x99, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4040222>::create();
    } break;
    case 4060121: {
        unsigned char ch[] = {0xe9, 0x9b, 0x84, 0xe8, 0xb8, 0x9e, 0xe8, 0xa5, 0xbf, 0xe5, 0x87, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4060121>::create();
    } break;
    case 4060221: {
        unsigned char ch[] = {0xe5, 0x83, 0xad, 0xe5, 0x8f, 0xb7, 0xe5, 0xa4, 0xa9, 0xe5, 0xad, 0x90};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4060221>::create();
    } break;
    case 4070121: {
        unsigned char ch[] = {0xe5, 0x85, 0xb5, 0xe5, 0x8a, 0xa8, 0xe8, 0x8b, 0xa5, 0xe7, 0xa5, 0x9e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4070121>::create();
    } break;
    case 4070221: {
        unsigned char ch[] = {0xe5, 0xa4, 0xaa, 0xe5, 0xb9, 0xb3, 0xe4, 0xbd, 0x99, 0xe5, 0x93, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4070221>::create();
    } break;
    case 4070322: {
        unsigned char ch[] = {0xe5, 0x9b, 0xb4, 0xe5, 0xb8, 0x88, 0xe5, 0xbf, 0x85, 0xe9, 0x98, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4070322>::create();
    } break;
    case 4090121: {
        unsigned char ch[] = {0xe8, 0xaa, 0x93, 0xe6, 0xad, 0xbb, 0xe6, 0x97, 0xa0, 0xe9, 0x80, 0x80};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4090121>::create();
    } break;
    case 4091121: {
        unsigned char ch[] = {0xe9, 0x82, 0xba, 0xe5, 0x9f, 0x8e, 0xe9, 0x9b, 0x84, 0xe8, 0x97, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4091121>::create();
    } break;
    case 4091221: {
        unsigned char ch[] = {0xe5, 0x9b, 0x9b, 0xe4, 0xb8, 0x96, 0xe4, 0xb8, 0x89, 0xe5, 0x85, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4091221>::create();
    } break;
    case 4091321: {
        unsigned char ch[] = {0xe7, 0x99, 0xbd, 0xe9, 0xa9, 0xac, 0xe4, 0xb9, 0x89, 0xe4, 0xbb, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4091321>::create();
    } break;
    case 4091424: {
        unsigned char ch[] = {0xe5, 0x8c, 0x97, 0xe7, 0x96, 0x86, 0xe7, 0x96, 0xbe, 0xe9, 0x94, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4091424>::create();
    } break;
    case 4110121: {
        unsigned char ch[] = {0xe9, 0x9b, 0x84, 0xe6, 0x8a, 0xa4, 0xe5, 0x8d, 0x97, 0xe7, 0x96, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4110121>::create();
    } break;
    case 4110220: {
        unsigned char ch[] = {0xe5, 0x8d, 0x97, 0xe7, 0x96, 0x86, 0xe7, 0x83, 0x88, 0xe5, 0x88, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4110220>::create();
    } break;
    case 4130122: {
        unsigned char ch[] = {0xe8, 0xaf, 0x9b, 0xe5, 0x87, 0xb6, 0xe6, 0xae, 0x84, 0xe9, 0x80, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4130122>::create();
    } break;
    case 4130220: {
        unsigned char ch[] = {0xe9, 0xa9, 0xb1, 0xe5, 0x85, 0xbd, 0xe5, 0xbe, 0xa1, 0xe8, 0xb1, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method4130220>::create();
    } break;
// insert item case 4
#ifdef CCZ
    case 5000120: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa9, 0xe4, 0xb8, 0x8b, 0xe6, 0x97, 0xa0, 0xe5, 0x8f, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method5000120>::create();
    } break;
    case 5000220: {
        unsigned char ch[] = {0xe5, 0xa6, 0x99, 0xe6, 0x89, 0x8b, 0xe5, 0x9b, 0x9e, 0xe6, 0x98, 0xa5};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method5000220>::create();
    } break;
    case 5000320: {
        unsigned char ch[] = {0xe4, 0xb9, 0xbe, 0xe5, 0x9d, 0xa4, 0xe4, 0xb8, 0x80, 0xe5, 0x87, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method5000320>::create();
    } break;
#endif
#ifdef XYX
    case 6000120: {
        method = QSharedPointer<Method6000120>::create();
    } break;
    case 6000121: {
        method = QSharedPointer<Method6000121>::create();
    } break;
    case 6000221: {
        method = QSharedPointer<Method6000221>::create();
    } break;
    case 6000122: {
        method = QSharedPointer<Method6000122>::create();
    } break;
    case 6000124: {
        method = QSharedPointer<Method6000124>::create();
    } break;
    case 7000121: {
        method = QSharedPointer<Method7000121>::create();
    } break;
    case 7000221: {
        method = QSharedPointer<Method7000221>::create();
    } break;
    case 7000321: {
        method = QSharedPointer<Method7000321>::create();
    } break;
#endif
    case 9011922: {
        unsigned char ch[] = {0xe9, 0x95, 0x9c, 0xe3, 0x80, 0x81, 0xe6, 0x97, 0xa0, 0xe9, 0x9a, 0xbe, 0xe4, 0xb9, 0x8b, 0xe5, 0xbf, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method9011922>::create();
    } break;
    case 9070124: {
        unsigned char ch[] = {0xe9, 0x95, 0x9c, 0xe3, 0x80, 0x81, 0xe8, 0xb0, 0x8b, 0xe8, 0x80, 0x8c, 0xe5, 0x90, 0x8e, 0xe5, 0x8a, 0xa8};
        Logger::H().printname(ch, sizeof(ch), id);
        method = QSharedPointer<Method9070124>::create();
    } break;
    default:
        method = QSharedPointer<Method>::create();
        break;
    }

    Name::methodName(id, method);
    return method;
}

int ZBMethod::run(Ground* ground, Item* item1)
{
    if (checkzb(ground, item1->g[0]))
    {
        return 1;
    }
    if (check101(ground, item1->g[0]))
    {
        Logger::H().printmethodzb(ground, item1, this, 1);
        return 1;
    }
    if (qrand() % 100 + 1 > 100 - item1->j[17])
    {
        Logger::H().printmethodzb(ground, item1, this, 1);
        return 1;
    }

    Logger::H().printmethodzb(ground, item1, this, 0);
    return 2;
}

bool ZBMethod::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == id)
        {
            return true;
        }
    }
    return false;
}

bool ZBMethod::check101(Ground* ground, int obj)
{
    QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][obj];
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs.at(i)->id == 101)
        {
            QSharedPointer<Buff101> buff = qSharedPointerCast<Buff101>(buffs.at(i));
            if (buff->run(ground, 0) <= 0)
            {
                buffs.remove(i);
            }
            return true;
        }
    }
    return false;
}

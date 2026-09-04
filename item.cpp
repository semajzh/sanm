#include "item.h"
#include "ui/name.h"
#include "log/logger.h"

Item::Item()
{
    h[0] = 10000;
    h[3] = 10000;
    j[1] = 150.0f;
    j[3] = 150.0f;
    methods[3] = 2223;
}

bool Item::getItem(int id, Item& item)
{
    bool ret = true;
    Name::itemName(id, &item);
    switch (id)
    {
    case 0: {
        unsigned char ch[] = {0xe6, 0x9c, 0xa8, 0xe6, 0xa1, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 100+2*45;
        item.i[1] = 100+2*45;
        item.i[2] = 100+2*45;
        item.i[3] = 100+2*45;
        break;
    }

    case 10101: {
        unsigned char ch[] = {0xe6, 0x9b, 0xb9, 0xe6, 0x93, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 76+1.3*45;
        item.i[1] = 102+2.3*45;
        item.i[2] = 107+2.52*45;
        item.i[3] = 53+1.79*45;
        item.methods[0] = 1010121;
        item.strategys[0] = 101011; //3:k4+5
        item.strategys[0] = 101012; //f3,2223:maxi+8(i1)(*3)(r)
    } break;

    case 10102: {
        unsigned char ch[] = {0xe9, 0x83, 0xad, 0xe5, 0x98, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 36+0.21*45;
        item.i[1] = 118+2.74*45;
        item.i[2] = 92+1.7*45;
        item.i[3] = 53+1.81*45;
        item.methods[0] = 1010221; //1+1:j4+6;2222,70%:2222
        item.strategys[0] = 101021; //l4-12,l5-12
        item.strategys[0] = 101022; //1010221,2:18%(i0):3
    } break;

    case 10103: {
        unsigned char ch[] = {0xe5, 0x85, 0xb8, 0xe9, 0x9f, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 120+2.78*45;
        item.i[1] = 42+0.37*45;
        item.i[2] = 114+1.75*45;
        item.i[3] = 65+2.30*45;
        item.methods[0] = 1010320; //j8+60,acted:k8+20(2)(*5),i2+20(2)(*5)
        item.strategys[0] = 101031; //i0+10,k8+20
//        item.strategys[0] = 101032; //ml-recv,r1:30%(i0),3332
    } break;

    case 10104: {
        unsigned char ch[] = {0xe8, 0xae, 0xb8, 0xe8, 0xa4, 0x9a};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 114+2.75*45;
        item.i[1] = 45+0.43*45;
        item.i[2] = 95+1.64*45;
        item.i[3] = 69+2.60*45;
        item.methods[0] = 1010420; //i0+20,i3+20,j7+100,i2-15;f3,2223*4:j13+2(i0)
        item.strategys[0] = 101041; //j6+5,k5+12
//        item.strategys[0] = 101042; //r123:j0+15
    } break;

    case 10105: {
        unsigned char ch[] = {0xe9, 0x82, 0x93, 0xe8, 0x89, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 94+1.80*45;
        item.i[1] = 101+1.10*45;
        item.i[2] = 100+2.73*45;
        item.i[3] = 66+1.75*45;
        item.methods[0] = 1010521; //r123,f6:k0-35,221:j20+10,+100*3
        item.strategys[0] = 101051; //21:j13+3,j14+3
    } break;

    case 10106: {
        unsigned char ch[] = {0xe5, 0xa4, 0x8f, 0xe4, 0xbe, 0xaf, 0xe6, 0x83, 0x87};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 102+2.40*45;
        item.i[1] = 72+1.02*45;
        item.i[2] = 113+2.03*45;
        item.i[3] = 71+1.78*45;
        item.methods[0] = 1010620; //acted,40%:-80br(i2),k0-30
        item.strategys[0] = 101061; //1010620:-40
    } break;

    case 10107: {
        unsigned char ch[] = {0xe7, 0x94, 0x84, 0xe5, 0xa7, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 22+0.23*45;
        item.i[1] = 103+2.16*45;
        item.i[2] = 103+1.62*45;
        item.i[3] = 56+1.55*45;
        item.methods[0] = 1010721; //221:+140;f1:k0+25,j0=j2=100,+140
        item.strategys[0] = 101071; //1010721:f1=maxi1,+140*10%
//        item.strategys[0] = 101072; //1010721:f1=maxi0,+140*10%
    } break;

    case 10108: {
        unsigned char ch[] = {0xe8, 0x8d, 0x80, 0xe5, 0xbd, 0xa7};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 37+0.19*45;
        item.i[1] = 120+2.70*45;
        item.i[2] = 78+1.60*45;
        item.i[3] = 57+1.65*45;
        item.methods[0] = 1010821; //f3:j2/j14+25(i1);hlo,30%(j2):double
        item.strategys[0] = 101081; //maxi1:j2+6,j3+10
    } break;

    case 10109: {
        unsigned char ch[] = {0xe5, 0xa4, 0x8f, 0xe4, 0xbe, 0xaf, 0xe6, 0xb8, 0x8a};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 107+2.40*45;
        item.i[1] = 59+0.75*45;
        item.i[2] = 101+1.74*45;
        item.i[3] = 94+2.81*45;
        item.methods[0] = 1010920; //2221:i0+i3*40%(1),k0+5(3)(i3),j1+5(3)(i3),-30(3)
        item.strategys[0] = 101091; //j1+12(i3)
    } break;

    case 10110: {
        unsigned char ch[] = {0xe6, 0x9b, 0xb9, 0xe4, 0xbb, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 81+1.35*45;
        item.i[1] = 79+1.53*45;
        item.i[2] = 113+2.35*45;
        item.i[3] = 44+1.55*45;
        item.methods[0] = 1011021; //r1357,g1=1:l-30(i2),g1=0:l-15(i2);r2468,75%,-f2:buff12(1)
        item.strategys[0] = 101101; //f3:l4-12
    } break;

    case 10111: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe9, 0x83, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 104+2.59*45;
        item.i[1] = 81+0.77*45;
        item.i[2] = 101+1.91*45;
        item.i[3] = 67+1.93*45;
        item.methods[0] = 1011122; //60%:j13+5(*4):-f2:-220;65%,-f2:buff13(1);buff13:k+30
        item.strategys[0] = 101111; //i0+15,j4+3
    } break;

    case 10112: {
        unsigned char ch[] = {0xe7, 0xa8, 0x8b, 0xe6, 0x98, 0xb1};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 47+0.57*45;
        item.i[1] = 111+2.46*45;
        item.i[2] = 84+1.73*45;
        item.i[3] = 73+2.24*45;
        item.methods[0] = 1011222; //60%,-f1:tb(i1),-360;g0=1:p+80
        item.strategys[0] = 101121; //j5+5,tb+30%
    } break;

    case 10113: {
        unsigned char ch[] = {0xe4, 0xba, 0x8e, 0xe7, 0xa6, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 88+1.5*45;
        item.i[1] = 70+0.79*45;
        item.i[2] = 102+2.05*45;
        item.i[3] = 44+1.5*45;
        item.methods[0] = 1011320; //i2+30;acted,-f2:l0+10(i2),60%:buff13(2)
        item.strategys[0] = 101131; //l0-8;buff13:k0-10(1)
    } break;

    case 10114: {
        unsigned char ch[] = {0xe5, 0xbe, 0x90, 0xe6, 0x99, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 105+2.58*45;
        item.i[1] = 79+0.88*45;
        item.i[2] = 106+1.75*45;
        item.i[3] = 75+2.12*45;
        item.methods[0] = 1011422; //60%,-f1:-350,buff12(1);buff12/minh0:p+30%
        item.strategys[0] = 101141; //k4+6,j13+6
    } break;

    case 10201: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe8, 0xbe, 0xbd};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 115+2.55*45;
        item.i[1] = 92+1.49*45;
        item.i[2] = 103+1.95*45;
        item.i[3] = 87+2.61*45;
        item.methods[0] = 1020120; //j13+20,221,60%(h1):buff111(1),g1=0,actbr:-50cd(g1=1)
        item.strategys[0] = 102011; //g1=0:j11+12,k0+5
    } break;

    case 10202: {
        unsigned char ch[] = {0xe8, 0xb4, 0xbe, 0xe8, 0xaf, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 59+1.21*45;
        item.i[1] = 119+2.75*45;
        item.i[2] = 89+1.73*45;
        item.i[3] = 66+2.06*45;
        item.methods[0] = 1020221; //221:90%,2*017(2),buff017:+110*1,-300*1,,k0-60
        item.strategys[0] = 102021; //l2-7,21(3):1*017(2)
    } break;

    case 10301: {
        unsigned char ch[] = {0xe5, 0x8f, 0xb8, 0xe9, 0xa9, 0xac, 0xe6, 0x87, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 69+0.34*45;
        item.i[1] = 119+2.80*45;
        item.i[2] = 114+2.11*45;
        item.i[3] = 47+1.54*45;
        item.methods[0] = 1030122; //100%:bz+1,50%:bz+1,-(50+bz*20)*2
        item.strategys[0] = 103011; //k0-5;bz=4,bz=8,f3:+80(i1)
    } break;

    case 10302: {
        unsigned char ch[] = {0xe4, 0xb9, 0x90, 0xe8, 0xbf, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 113+2.35*45;
        item.i[1] = 56+0.86*45;
        item.i[2] = 104+1.81*45;
        item.i[3] = 92+2.33*45;
        item.methods[0] = 1030221; //1+1(g1):i3+30,k0+14(i3),l0-14(i3),r12,g1=0:+30%
        item.strategys[0] = 103021; //1+1(g1):l2-6
    } break;

    case 10401: {
        unsigned char ch[] = {0xe6, 0x9b, 0xb9, 0xe7, 0xba, 0xaf};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 94+2.13*45;
        item.i[1] = 68+0.67*45;
        item.i[2] = 100+1.91*45;
        item.i[3] = 77+2*45;
        item.methods[0] = 1040121; //g4=2,g4=3,2223:k0+5(maxi)(*6);r2,g4=2,g4=3,2221,-f1:-140
        item.strategys[0] = 104011; //g4=2,g4=3:l0-5
    } break;

    case 10501: {
        unsigned char ch[] = {0xe8, 0x8d, 0x80, 0xe6, 0x94, 0xb8};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 41  + 0.59 * 45;
        item.i[1] = 114 + 2.45 * 45;
        item.i[2] = 87  + 1.69 * 45;
        item.i[3] = 59  + 2.15 * 45;
        item.methods[0] = 1050122; //60%,-f2:-220,buff1~19(2)
        item.strategys[0] = 105011; //1050122,ex+9,50%(i1),-f3:buff11~17(1)
    } break;

    case 10601: {
        unsigned char ch[] = {0xe7, 0x8e, 0x8b, 0xe5, 0xbc, 0x82};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 17+0.21*45;
        item.i[1] = 110+2.58*45;
        item.i[2] = 94+1.92*45;
        item.i[3] = 86+1.76*45;
        item.methods[0] = 1060120; //2223,2224:40%-100*2,l0+4(4)
        item.strategys[0] = 106011; //2223*2:j6+5(10)
    } break;

    case 10801: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe6, 0x98, 0xa5, 0xe5, 0x8d, 0x8e};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.f[1] = 1;
        item.g[4] = 1;
        item.i[0] = 43+0.35*45;
        item.i[1] = 96+2.19*45;
        item.i[2] = 93+2.12*45;
        item.i[3] = 69+1.56*45;
        item.methods[0] = 1080121; //2223:-70(xj*7),20%(i1):xj(k2+3),maxi1:2223(xj>6:2224)
        item.strategys[0] = 108011; //l0-6,realtion:bz+1
    } break;

    case 10811: {
        unsigned char ch[] = {0x73, 0x38, 0xe5, 0xb4, 0x94, 0xe9, 0xa6, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 0;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 100+1.0*45;
        item.i[1] = 100+3.0*45;
        item.i[2] = 100+2.0*45;
        item.i[3] = 100+1.5*45;
//        item.methods[0] = 88121; //act,acted:-80(5)x1,maxi+10
//        item.methods[0] = 88224; //70%,-180(+80x6)x1,40%(+10x6):g1=1
        item.methods[0] = 88324; //70%:zb*8,-80*2,j7+10
        item.strategys[0] = 301031; //k0+5,j7+12
    } break;

    case 10901: {
        unsigned char ch[] = {0xe6, 0x9b, 0xb9, 0xe4, 0xb8, 0x95};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 89+1.62*45;
        item.i[1] = 97+2.28*45;
        item.i[2] = 103+2.12*45;
        item.i[3] = 62+1.62*45;
        item.methods[0] = 1090121; //2*l0-8(i1),l0+8+8(i1),mini3:jx,2221:2*i1-10(i1),i1+10+10(i1)
        item.strategys[0] = 109011; //2221:2->3,i1-20%
    } break;

    case 10911: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0xbc, 0xa0, 0xe8, 0xbe, 0xbd, 0x28, 0xe9, 0xaa, 0x91, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 115+2.55*45;
        item.i[1] = 92+1.49*45;
        item.i[2] = 103+1.95*45;
        item.i[3] = 87+2.61*45;
        item.methods[0] = 1091120; //221,60%(h1):buff111(1),2223,2224:2223(g1=1)(*2)
        item.strategys[0] = 9020; //g4=2(*3),!2224,50%:2224,1~2*buff15(1)
        item.strategys[1] = 1730; //act:j6+1.2(*4)
        item.strategys[2] = 1740; //act:k5+2.5(*4)
    } break;

    case 10912: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0xbc, 0xa0, 0xe8, 0xbe, 0xbd, 0x28, 0xe5, 0xbc, 0x93, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 0;
        item.i[0] = 115+2.55*45;
        item.i[1] = 92+1.49*45;
        item.i[2] = 103+1.95*45;
        item.i[3] = 87+2.61*45;
        item.methods[0] = 1091222; //65%:j0+10(*4),*2:buff111(2),-2/3*200,j0:buff016/buff013(1)
        item.strategys[0] = 9000; //g4=0(*3),2222,75%:g1=1,cd50%
        item.strategys[1] = 1140; //r123:j4+5
        item.strategys[2] = 1130; //j4+3
    } break;

    case 10913: {
        unsigned char ch[] = {0x73, 0x39, 0xe6, 0x9b, 0xb9, 0xe4, 0xbb, 0x81, 0x28, 0xe6, 0x9e, 0xaa, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 3;
        item.i[0] = 81+1.35*45;
        item.i[1] = 79+1.53*45;
        item.i[2] = 113+2.35*45;
        item.i[3] = 44+1.55*45;
        item.methods[0] = 1091321; //maxi2:j8+40(i2),k8+40(i2),lx,2223ed,80%(i2):2223->maxi2,lxactmled,65%:3332
        item.strategys[0] = 9030; //g4=3(*3),3332,65%:p+15%,buff102(*3)
        item.strategys[1] = 1410; //maxi0:j8+8
        item.strategys[2] = 1460; //maxi2:l0-4.5
    } break;

    case 10914: {
        unsigned char ch[] = {0x73, 0x39, 0xe6, 0x9b, 0xb9, 0xe4, 0xbb, 0x81, 0x28, 0xe7, 0x9b, 0xbe, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] = 81+1.35*45;
        item.i[1] = 79+1.53*45;
        item.i[2] = 113+2.35*45;
        item.i[3] = 44+1.55*45;
        item.methods[0] = 1091421; //r1357,221,2~3:k4,k6-30(i2),2222,35%(i2):buff12(1);r2468,221:k5-30(i2),2222,35%(i2):buff13(1)
        item.strategys[0] = 9010; //g4=1(*3):l4-15,hlo=3000,maxi1:-3*100
        item.strategys[1] = 1490; //2223ed:k0+1(4)
        item.strategys[2] = 1440; //actbr:l0+1(4)
    } break;

    case 11001: {
        unsigned char ch[] = {0xe5, 0x8d, 0x9e, 0xe5, 0xa4, 0xab, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] =  19 + 0.23 * 45;
        item.i[1] = 105 + 2.18 * 45;
        item.i[2] = 106 + 1.80 * 45;
        item.i[3] =  57 + 1.50 * 45;
        item.methods[0] = 1100121; //r1234,f3,acted>2000,f2(minh0):sy(1)(*4);sy:l0-15(i1):50%:buff102
        item.strategys[0] = 110011; //f3,sy,50%:+50(i1)
    } break;

    case 11401: {
        unsigned char ch[] = {0xe9, 0x83, 0x9d, 0xe6, 0x98, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 1;
        item.i[0] =  92 + 1.42 * 45;
        item.i[1] =  97 + 2.02 * 45;
        item.i[2] = 101 + 2.32 * 45;
        item.i[3] =  56 + 1.68 * 45;
        item.methods[0] = 1140121; //f3,2221,60%(i2):b102(1);h0<50%,50%:b102(1);f3,b102-1:l0-8(i2)(*2),k2+8(i2)(*2),2225;f3,b102+1,b102(2),-f3:-40ml
        item.strategys[0] = 114011; //1140121,ml:l2±5(i2)(*3)(2)
    } break;

    case 11402: {
        unsigned char ch[] = {0xe7, 0x8e, 0x8b, 0xe5, 0x8f, 0x8c};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 1;
        item.g[4] = 2;
        item.i[0] = 106 + 2.52 * 45;
        item.i[1] =  54 + 0.88 * 45;
        item.i[2] =  88 + 1.68 * 45;
        item.i[3] =  87 + 2.51 * 45;
        item.methods[0] = 1140224; //60%,maxi0:-250br,k0-20(i0)(1);50%,minh0:-250br,b105(1)
        item.strategys[0] = 114021; //j6+5;1140224:50%(i0)
    } break;

    case 20101: {
        unsigned char ch[] = {0xe5, 0x88, 0x98, 0xe5, 0xa4, 0x87};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 1;
        item.i[0] = 80+1.43*45;
        item.i[1] = 94+2.31*45;
        item.i[2] = 109+2.12*45;
        item.i[3] = 53+1.72*45;
        item.methods[0] = 2010121; //i2+18(i1)*3,223:+100*3,minh0:-ex*1,+90
        item.strategys[0] = 201011; //j15+12(i1),hlo4:111(1)
//        item.strategys[0] = 201012; //friend-ex,4:k0+4(2)(*4)
    } break;

    case 20102: {
        unsigned char ch[] = {0xe5, 0x85, 0xb3, 0xe7, 0xbe, 0xbd};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] = 120+2.75*45;
        item.i[1] = 86+1.35*45;
        item.i[2] = 104+2.13*45;
        item.i[3] = 79+2.43*45;
        item.methods[0] = 2010222; //45%:j4+8(2),buff2:j4+3*n(2),-3*180,ex:tb
//        item.strategys[0] = 201021; //actmled,50%:j4+4(*2)(2)
//        item.strategys[0] = 201022; //actbr,50%:buff4(2),buff4:k0+6
        item.strategys[0] = 201023; //h0>-f1:k0+10;2010222,h0>:tb+30%
    } break;

    case 20103: {
        unsigned char ch[] = {0xe8, 0xaf, 0xb8, 0xe8, 0x91, 0x9b, 0xe4, 0xba, 0xae};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] = 50+0.52*45;
        item.i[1] = 125+3.0*45;
        item.i[2] = 111+2.3*45;
        item.i[3] = 57+1.65*45;
        item.methods[0] = 2010321; //j12+24,act,acted,50%:-80(5)
//        item.strategys[0] = 201031; //r1357:2*l0+12,r2468:2*l0-12
        item.strategys[0] = 201032; //g1=0:l0-12;2010321,des-only:+3
    } break;

    case 20104: {
        unsigned char ch[] = {0xe8, 0xb5, 0xb5, 0xe4, 0xba, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] = 117+2.65*45;
        item.i[1] = 77+1.52*45;
        item.i[2] = 107+2.15*45;
        item.i[3] = 66+2.29*45;
        item.methods[0] = 2010420; //j9+35,j9:-90(-10)(7)
        item.strategys[0] = 201041; //j9+5,j11+5
        item.strategys[1] = 1160; //j9+4.5
        item.strategys[2] = 1170; //g1=0:j9+5
    } break;

    case 20105: {
        unsigned char ch[] = {0xe9, 0xa9, 0xac, 0xe8, 0xb6, 0x85};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] = 118+2.78*45;
        item.i[1] = 58+1.01*45;
        item.i[2] = 103+1.72*45;
        item.i[3] = 75+2.53*45;
        item.methods[0] = 2010520; //j0+45,j0:60(20)*5
        item.strategys[0] = 201051; //j0+6,j1+10
//        item.strategys[0] = 201052; //j1+15;2010520:*2.8,*1
    } break;

    case 20106: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe9, 0xa3, 0x9e};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 3;
        item.i[0] = 140 + 2.78 * 45;
        item.i[1] = 68  + 1.04 * 45;
        item.i[2] = 104 + 1.84 * 45;
        item.i[3] = 77  + 2.29 * 45;
        item.methods[0] = 2010622; //55%,-f3:-140,buff2(2);buff2,30%:buff11(1)
        item.strategys[0] = 201061; //2010622:55%->100%,30%->12%,140->105
    } break;

    case 20107: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe6, 0x9c, 0x88, 0xe8, 0x8b, 0xb1};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 31+0.33*45;
        item.i[1] = 109+2.28*45;
        item.i[2] = 93+1.62*45;
        item.i[3] = 46+2.00*45;
        item.methods[0] = 2010721; //r1357:k0+3*25(i1),r2468:+3*220
        item.strategys[0] = 201071; //221:maxi2,35%,buff014*3
//        item.strategys[0] = 201072; //r1357,maxi2,acted:-100ml
    } break;

    case 20108: {
        unsigned char ch[] = {0xe5, 0xbe, 0x90, 0xe5, 0xba, 0xb6};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] =  95 + 1.95 * 45;
        item.i[1] = 109 + 2.55 * 45;
        item.i[2] =  93 + 1.59 * 45;
        item.i[3] =  87 + 2.36 * 45;
        item.methods[0] = 2010822; //65%,-f1:-220,-220;i0>i1:buff13;i1>i0:buff12
//        item.strategys[0] = 201081; //i0+i1*25%;actml:actbr+40%
        item.strategys[0] = 201082; //2010822:br->ml,k+10%
    } break;

    case 20109: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe5, 0xbf, 0xa0};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] = 115 + 2.51 * 45;
        item.i[1] =  71 + 1.32 * 45;
        item.i[2] = 101 + 1.69 * 45;
        item.i[3] =  58 + 2.23 * 45;
        item.methods[0] = 2010924; //55%:i3/i0-24(i0)(2);ex:-180
        item.strategys[0] = 201091; //223,2223<2:j6/k5+25(1)
    } break;

    case 20110: {
        unsigned char ch[] = {0xe5, 0x85, 0xb3, 0xe5, 0xb9, 0xb3};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 3;
        item.i[0] = 108 + 2.42 * 45;
        item.i[1] =  52 + 0.99 * 45;
        item.i[2] = 100 + 1.67 * 45;
        item.i[3] =  81 + 2.22 * 45;
        item.methods[0] = 2011020; //actbr,75%:buff2(2);buff2:-100;4
        item.strategys[0] = 201101; //r1,-f3:buff2(2)
    } break;

    case 20111: {
        unsigned char ch[] = {0xe5, 0x91, 0xa8, 0xe4, 0xbb, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] =  89 + 1.70 * 45;
        item.i[1] =  70 + 1.02 * 45;
        item.i[2] = 109 + 2.05 * 45;
        item.i[3] =  71 + 1.92 * 45;
        item.methods[0] = 2011120; //2221:+200(i1+i2);45%,-f2:buff14(2),buff2(2)
        item.strategys[0] = 201111; //i2+15;2011120:45%->65%
    } break;

    case 20201: {
        unsigned char ch[] = {0xe9, 0xa9, 0xac, 0xe4, 0xba, 0x91, 0xe7, 0xa6, 0x84};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.f[1] = 1;
        item.g[4] = 2;
        item.i[0] = 104+2.43*45;
        item.i[1] = 53+1.24*45;
        item.i[2] = 89+1.65*45;
        item.i[3] = 93+2.54*45;
        item.methods[0] = 2020124; //70%:1*buff2,-220,80%,-220
        item.strategys[0] = 202011; //g4=2:maxi+5%
    } break;

    case 20202: {
        unsigned char ch[] = {0xe6, 0xb3, 0x95, 0xe6, 0xad, 0xa3};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] =  53 + 0.29 * 45;
        item.i[1] = 112 + 2.59 * 45;
        item.i[2] =  91 + 1.64 * 45;
        item.i[3] =  87 + 2.30 * 45;
        item.methods[0] = 2020222; //100%,-f3:zs;!2223,acted,1:+80(i1),-120
        item.strategys[0] = 202021; //-f3:k1-10(4)
//        item.strategys[0] = 202022; //2020222,30%(i1):~1,r0
    } break;

    case 20301: {
        unsigned char ch[] = {0xe7, 0x94, 0x98, 0xe5, 0xa4, 0xab, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 25+0.29*45;
        item.i[1] = 102+1.95*45;
        item.i[2] = 106+1.62*45;
        item.i[3] = 90+1.68*45;
        item.methods[0] = 2030121; //60%(i1):2~3*j9+18(i1)(2),223:+2*120
        item.strategys[0] = 203011; //j9+14
    } break;

    case 20302: {
        unsigned char ch[] = {0xe5, 0xba, 0x9e, 0xe7, 0xbb, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] =  54 + 0.55 * 45;
        item.i[1] = 116 + 2.65 * 45;
        item.i[2] =  83 + 1.75 * 45;
        item.i[3] =  51 + 1.65 * 45;
        item.methods[0] = 2030221; //j14+20(i1);r1357,-f3:lh;lh:25%(i1)cd
        item.strategys[0] = 203021; //2030221:r1~8,25->12
    } break;

    case 20401: {
        unsigned char ch[] = {0xe5, 0x85, 0xb3, 0xe9, 0x93, 0xb6, 0xe5, 0xb1, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.f[1] = 1;
        item.g[4] = 2;
        item.i[0] = 108 + 2.55 * 45;
        item.i[1] =  60 + 0.99 * 45;
        item.i[2] =  89 + 1.78 * 45;
        item.i[3] =  86 + 2.36 * 45;
        item.methods[0] = 2040120; //2222,40%(i0+i3),-f2:-260,buff16(1)
        item.strategys[0] = 204011; //r123,guan:j4+5
    } break;

    case 20501: {
        unsigned char ch[] = {0xe5, 0xa7, 0x9c, 0xe7, 0xbb, 0xb4};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 3;
        item.i[0] = 101+2.39*45;
        item.i[1] = 111+2.52*45;
        item.i[2] = 91+2.01*45;
        item.i[3] = 76+1.99*45;
        item.methods[0] = 2050121; //223,1~3:-2*40(5*9)*2,3,minh0:tb
        item.strategys[0] = 1070;
        item.strategys[1] = 1080;
        item.strategys[2] = 205011; //f0=2:maxi+2%(i0),l0-2%(i1)
//        item.strategys[2] = 205012; //r1357:3*l1-4(i0),r2468:3*l2-4(i1)
    } break;

    case 20801: {
        unsigned char ch[] = {0x73, 0x70, 0xe8, 0xaf, 0xb8, 0xe8, 0x91, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 1;
        item.i[0] = 53+0.56*45;
        item.i[1] = 125+3.0*45;
        item.i[2] = 104+2.24*45;
        item.i[3] = 61+1.71*45;
        item.methods[0] = 2080121; //l2-10/13(i1),formaiton+70%,011:l0-12(i1),g3=85,001:mini2:k0+20,2221:-200*1,000:223:maxi1,-60(hlo)*3
        item.strategys[0] = 208011; //r1234:k0+3(i1),r5678:l0-3(i1)
    } break;

    case 20911: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0x85, 0xb3, 0xe7, 0xbe, 0xbd, 0x28, 0xe9, 0xaa, 0x91, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 2;
        item.i[0] = 120+2.75*45;
        item.i[1] = 86+1.35*45;
        item.i[2] = 104+2.13*45;
        item.i[3] = 79+2.43*45;
        item.methods[0] = 2091121; //r123,1+1(maxi0):j7+25(i0),2224,30%(i0):g1=1,p+15%
        item.strategys[0] = 9020; //g4=2(*3),!2224,50%:2224,1~2*buff15(1)
        item.strategys[1] = 1730; //act:j6+1.2(*4)
        item.strategys[2] = 1740; //act:k5+2.5(*4)
    } break;

    case 20912: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0x85, 0xb3, 0xe7, 0xbe, 0xbd, 0x28, 0xe5, 0xbc, 0x93, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] = 120+2.75*45;
        item.i[1] = 86+1.35*45;
        item.i[2] = 104+2.13*45;
        item.i[3] = 79+2.43*45;
        item.methods[0] = 2091222; //75%:(-5,-10,-15):j0+15(*3)(2),-3*160,j0:-100(i2=0)(!j0)
        item.strategys[0] = 9000; //g4=0(*3),2222,75%:g1=1,cd50%
        item.strategys[1] = 1140; //r123:j4+5
        item.strategys[2] = 1130; //j4+3
    } break;

    case 21001: {
        unsigned char ch[] = {0xe9, 0xad, 0x8f, 0xe5, 0xbb, 0xb6};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 1;
        item.i[0] = 118 + 2.66 * 45;
        item.i[1] =  93 + 1.60 * 45;
        item.i[2] = 102 + 2.16 * 45;
        item.i[3] =  56 + 1.63 * 45;
        item.methods[0] = 2100121; //f3,buff2,-f1:-60br;30%(i0):buff6(2);actbuff6:kg;kg:j11+3(*15);kg=9/15,f6:buff6act
        item.strategys[0] = 210011; //atker.buff23count:-5(byix),self;g1=0:team*0.5
    } break;

    case 21601: {
        unsigned char ch[] = {0xe5, 0x88, 0x98, 0xe7, 0xa6, 0x85};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.g[4] = 0;
        item.i[0] =  47 + 0.52 * 45;
        item.i[1] =  69 + 1.96 * 45;
        item.i[2] = 101 + 2.35 * 45;
        item.i[3] =  56 + 1.62 * 45;
        item.methods[0] = 2160121;
    } break;

    case 21602: {
        unsigned char ch[] = {0xe7, 0xb3, 0x9c, 0xe5, 0xa4, 0xab, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 2;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 21 + 0.41 * 45;
        item.i[1] = 93 + 2.08 * 45;
        item.i[2] = 80 + 1.78 * 45;
        item.i[3] = 92 + 1.83 * 45;
        item.methods[0] = 2160222;
    } break;

    case 30101: {
        unsigned char ch[] = {0xe5, 0xad, 0x99, 0xe6, 0x9d, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] = 90+1.91*45;
        item.i[1] = 96+2.08*45;
        item.i[2] = 101+2.09*45;
        item.i[3] = 74+2.33*45;
        item.methods[0] = 3010121; //2222:j4+7/14,l1-5/10,2224:j7+28/56,l2-5/10;maxi
        item.strategys[0] = 301011; //2222:3*l0-5(2)
//        item.strategys[1] = 301012; //r2468,2221:ex-1
    } break;

    case 30102: {
        unsigned char ch[] = {0xe5, 0x91, 0xa8, 0xe7, 0x91, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 0;
        item.i[0] = 77+0.95*45;
        item.i[1] = 114+2.75*45;
        item.i[2] = 104+2.01*45;
        item.i[3] = 62+1.73*45;
        item.methods[0] = 3010221; //exed,70%:-2*60(4),+3*40
        item.strategys[0] = 301021; //buff1,35%:-2*60(2)
//        item.strategys[0] = 301026; //k2+6,5*actml:2*ex(1)
    } break;

    case 30103: {
        unsigned char ch[] = {0xe5, 0xad, 0x99, 0xe5, 0xb0, 0x9a, 0xe9, 0xa6, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 107+2.38*45;
        item.i[1] = 79+0.98*45;
        item.i[2] = 97+1.66*45;
        item.i[3] = 70+2.41*45;
        item.methods[0] = 3010324; //65%,-f1:-320br(-50*f1):75%:g1=1
        item.strategys[0] = 301031; //k0+5,j7+12
    } break;

    case 30104: {
        unsigned char ch[] = {0xe5, 0x90, 0x95, 0xe8, 0x92, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] =  93 + 1.90 * 45;
        item.i[1] = 106 + 2.38 * 45;
        item.i[2] = 103 + 1.80 * 45;
        item.i[3] =  77 + 2.19 * 45;
        item.methods[0] = 3010422; //70%,-f2:-180,buff15(2);buff15:-80
        item.strategys[0] = 301041; //l2-6,r3:i1+30
    } break;

    case 30105: {
        unsigned char ch[] = {0xe5, 0xa4, 0xaa, 0xe5, 0x8f, 0xb2, 0xe6, 0x85, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 0;
        item.i[0] = 110 + 2.49 * 45;
        item.i[1] =  94 + 1.22 * 45;
        item.i[2] = 108 + 1.89 * 45;
        item.i[3] =  80 + 2.54 * 45;
        item.methods[0] = 3010520; //j6+0.8*n;221,90%:xl;!2223,90%:xl;xl=2223(*10)
        item.strategys[0] = 301051; //r2468,j6+15
    } break;

    case 30106: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa7, 0xe4, 0xb9, 0x94};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.f[1] = 1;
        item.g[4] = 3;
        item.i[0] = 24+0.35*45;
        item.i[1] = 95+2.15*45;
        item.i[2] = 106+1.69*45;
        item.i[3] = 35+1.72*45;
        item.methods[0] = 3010621; //221,-f2:l0+20;f2:+180*2
        item.strategys[0] = 301061; //3010621:l0+20*3,+180/2
    } break;

    case 30107: {
        unsigned char ch[] = {0xe9, 0xb2, 0x81, 0xe8, 0x82, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] =  72 + 0.36 * 45;
        item.i[1] = 109 + 2.40 * 45;
        item.i[2] =  98 + 1.65 * 45;
        item.i[3] =  80 + 2.09 * 45;
        item.methods[0] = 3010722; //45%,±f4:buff013(1);+f:l0-20(1)(i1);-f:l0+20(1)(i1)
//        item.strategys[0] = 301071; //l0-7;2222:buff15(2)
        item.strategys[0] = 301072; //f3,2222,-f1:l2+4(1)(*3)
    } break;

    case 30108: {
        unsigned char ch[] = {0xe7, 0x94, 0x98, 0xe5, 0xae, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 2;
        item.i[0] = 112+2.51*45;
        item.i[1] = 84+1.32*45;
        item.i[2] = 107+1.75*45;
        item.i[3] = 71+2.59*45;
        item.methods[0] = 3010820; //k3+150,2223:i0+12(*4)(2)
        item.strategys[0] = 301081; //l1-5,j11+5,2223,60%:-30(ml)
//        item.strategys[0] = 301082; //!2224,2225,30%:2223
    } break;

    case 30109: {
        unsigned char ch[] = {0xe5, 0xbe, 0x90, 0xe7, 0x9b, 0x9b};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] =  89 + 1.61 * 45;
        item.i[1] =  87 + 1.89 * 45;
        item.i[2] = 107 + 2.08 * 45;
        item.i[3] =  34 + 1.52 * 45;
        item.methods[0] = 3010921; //r1234:f3,25%(i2),acted:buff102(1);r4:i2+40;r4,-f3:buff4(2)
        item.strategys[0] = 301091; //r1,-f2:buff4(2);f3,acted,buff4:p-8
    } break;

    case 30110: {
        unsigned char ch[] = {0xe5, 0xb0, 0x8f, 0xe4, 0xb9, 0x94};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 22+0.38*45;
        item.i[1] = 94+2.14*45;
        item.i[2] = 88+1.64*45;
        item.i[3] = 73+2.39*45;
        item.methods[0] = 3011022; //40%,-f2:buff16(1);f2:+250,k0+1(2)
        item.strategys[0] = 301101; //3011022:j5+15,hlo-50%
//        item.strategys[0] = 301102; //f1=1,hlo:-1*100
    } break;

    case 30111: {
        unsigned char ch[] = {0xe5, 0xad, 0x99, 0xe7, 0xad, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 2;
        item.i[0] = 112 + 2.59 * 45;
        item.i[1] =  77 + 1.30 * 45;
        item.i[2] = 110 + 2.12 * 45;
        item.i[3] =  74 + 2.53 * 45;
        item.methods[0] = 3011122; //65%,-f2:-250;1+1:+65(i0)
        item.strategys[0] = 301111; //2222,65%:ex-1
//        item.strategys[0] = 301112; //2222,40%(i1),-f1:buff2(2)
    } break;

    case 30112: {
        unsigned char ch[] = {0xe7, 0xa8, 0x8b, 0xe6, 0x99, 0xae};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] = 79 + 1.58 * 45;
        item.i[1] = 81 + 1.54 * 45;
        item.i[2] = 91 + 2.32 * 45;
        item.i[3] = 59 + 1.70 * 45;
        item.methods[0] = 3011221; //f3,acted(br),60%:+40(i1+i2);f3,acted(ml).60%:l0-14(2)(*2)
        item.strategys[0] = 301121; //h0<50%:+200(i1+i2),l0-12
    } break;

    case 30113: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe7, 0x9b, 0x96};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] =  94 + 1.58 * 45;
        item.i[1] =  92 + 1.62 * 45;
        item.i[2] = 113 + 2.18 * 45;
        item.i[3] =  83 + 1.91 * 45;
        item.methods[0] = 3011322; //50%:l0-30(i2)(2);maxi1:-60br,-220ml*2,buff1(2)
        item.strategys[0] = 301131; //f-acted:l0-12(2)
    } break;

    case 30114: {
        unsigned char ch[] = {0xe5, 0xad, 0x99, 0xe5, 0x9d, 0x9a};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 1;
        item.i[0] = 100 + 2.18 * 45;
        item.i[1] =  82 + 0.77 * 45;
        item.i[2] = 113 + 2.30 * 45;
        item.i[3] =  73 + 1.71 * 45;
        item.methods[0] = 3011422; //55%,-f1:i2-40(max(i0,i2))(2),-250(i2),buff011(1);i2<:i2-40*0.5
        item.strategys[0] = 301141; //l1-8(i2)
    } break;

    case 30201: {
        unsigned char ch[] = {0xe9, 0x99, 0x86, 0xe9, 0x80, 0x8a};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 0;
        item.i[0] = 68+0.44*45;
        item.i[1] = 117+2.74*45;
        item.i[2] = 103+1.96*45;
        item.i[3] = 49+1.88*45;
        item.methods[0] = 3020122; //1*buff1(2),buff1:fs(2),-220,40%(i1):fs(2)
//        item.strategys[0] = 302011; //r123,buff1,50%:buff15(2)
        item.strategys[0] = 302012; //j12+5;fs:maxi-5%(i1)(1)
    } break;

    case 30301: {
        unsigned char ch[] = {0xe5, 0x91, 0xa8, 0xe6, 0xb3, 0xb0};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 1;
        item.i[0] = 87+1.50*45;
        item.i[1] = 52+0.78*45;
        item.i[2] = 112+2.21*45;
        item.i[3] = 63+1.45*45;
        item.methods[0] = 3030120; //h0>10%,80%(i2):-50%(i2),100%(-10%)
//        item.strategys[0] = 303011; //1+1(g1)*l1-6
        item.strategys[0] = 303012; //3030120,f1,act1:k+20,+p*50%
    } break;

    case 30501: {
        unsigned char ch[] = {0xe6, 0xad, 0xa5, 0xe7, 0xbb, 0x83, 0xe5, 0xb8, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.f[1] = 1;
        item.g[4] = 1;
        item.i[0] =  33 + 0.38 * 45;
        item.i[1] = 105 + 2.19 * 45;
        item.i[2] =  97 + 1.69 * 45;
        item.i[3] =  81 + 2.25 * 45;
        item.methods[0] = 3050122; //55%,f2:af(2);af:k2+20(i1),2221:+300(i1)
        item.strategys[0] = 305011; //l0-6,i3+10%
    } break;

    case 30801: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe6, 0x98, 0xad};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 16+0.23*45;
        item.i[1] = 103+2.30*45;
        item.i[2] = 83+1.65*45;
        item.i[3] = 87+1.79*45;
        item.methods[0] = 3080122; //55%:-2*buff*2,+180*2,l0-24(i1)(2)
        item.strategys[0] = 308011; //3080122:55->65
    } break;

    case 30901: {
        unsigned char ch[] = {0xe5, 0x87, 0x8c, 0xe7, 0xbb, 0x9f};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 2;
        item.i[0] = 102+2.18*45;
        item.i[1] = 63+0.88*45;
        item.i[2] = 89+1.42*45;
        item.i[3] = 90+2.42*45;
        item.methods[0] = 3090124; //70%:3*k0+7(j7)(*4)(2),-3*80
        item.strategys[0] = 309011; //f3:j7+8(i0)
    } break;

    case 30911: {
        unsigned char ch[] = {0x73, 0x39, 0xe7, 0x94, 0x98, 0xe5, 0xae, 0x81, 0x28, 0xe9, 0xaa, 0x91, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 2;
        item.i[0] = 112+2.51*45;
        item.i[1] = 84+1.32*45;
        item.i[2] = 107+1.75*45;
        item.i[3] = 71+2.59*45;
        item.methods[0] = 3091120; //j7+40,2224,30%(i0):!i2,!j0,p+10%(i0)
        item.strategys[0] = 9020; //g4=2(*3),!2224,50%:2224,1~2*buff15(1)
        item.strategys[1] = 1730; //act:j6+1.2(*4)
        item.strategys[2] = 1740; //act:k5+2.5(*4)
    } break;

    case 30912: {
        unsigned char ch[] = {0x73, 0x39, 0xe7, 0x94, 0x98, 0xe5, 0xae, 0x81, 0x28, 0xe6, 0x9e, 0xaa, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] = 112+2.51*45;
        item.i[1] = 84+1.32*45;
        item.i[2] = 107+1.75*45;
        item.i[3] = 71+2.59*45;
        item.methods[0] = 3091220; //k3+120,2224,30%(i0):3332,k0-8(*3)(2)
        item.strategys[0] = 9030; //g4=3(*3),3332,65%:p+15%,buff102(*3)
        item.strategys[1] = 1210; //actbr:k1+1.8(5)
        item.strategys[2] = 1690; //2223:k3+4.5(*5)
    } break;

    case 31201: {
        unsigned char ch[] = {0xe9, 0x99, 0x86, 0xe6, 0x8a, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 0;
        item.i[0] =  78 + 1.73 * 45;
        item.i[1] = 109 + 2.60 * 45;
        item.i[2] = 108 + 1.90 * 45;
        item.i[3] =  64 + 1.85 * 45;
        item.methods[0] = 3120121; //2222,-f2(!max):jy;jy:k0-2(i1)(15);r3,-f3:cf(3);cf:l0+2(*jy)(i1);act,8%(jy):buff16(r1)
        item.strategys[0] = 312011; //r1,mini2:jy+5
    } break;

    case 31202: {
        unsigned char ch[] = {0xe8, 0xaf, 0xb8, 0xe8, 0x91, 0x9b, 0xe7, 0x91, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 0;
        item.i[0] =  38 + 0.55 * 45;
        item.i[1] = 104 + 2.35 * 45;
        item.i[2] =  86 + 2.28 * 45;
        item.i[3] =  78 + 1.32 * 45;
        item.methods[0] = 3120221; //f2,m0,act:dx(max=5);dx:l0-4(i1),j1/j3+15;223,-f1:-20-20(*dx),j0/j2+10(*dx),dx=0
        item.strategys[0] = 312021; //f1:dx
    } break;

    case 31501: {
        unsigned char ch[] = {0x73, 0x70, 0xe5, 0x91, 0xa8, 0xe7, 0x91, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.g[4] = 3;
        item.i[0] =  77 + 0.95 * 45;
        item.i[1] = 118 + 2.79 * 45;
        item.i[2] = 105 + 2.32 * 45;
        item.i[3] =  70 + 1.73 * 45;
        item.methods[0] = 3150121; //maxi1:xf;acted,50%:xf,l0-40(i2);xf,m0,actml,25%(i2),f2-3:cz(2),-52ml+7*cz,l0+40%,max=2
        item.strategys[0] = 315011; //
    } break;

    case 31502: {
        unsigned char ch[] = {0xe5, 0x90, 0xb4, 0xe5, 0x9b, 0xbd, 0xe5, 0xa4, 0xaa};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 3;
        item.f[1] = 1;
        item.g[4] = 1;
        item.i[0] = 60 + 0.61 * 45;
        item.i[1] = 94 + 2.24 * 45;
        item.i[2] = 91 + 2.18 * 45;
        item.i[3] = 84 + 1.91 * 45;
        item.methods[0] = 3150221; //
        item.strategys[0] = 315021; //
    } break;

    case 40101: {
        unsigned char ch[] = {0xe8, 0x91, 0xa3, 0xe5, 0x8d, 0x93};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 101 + 2.20 * 45;
        item.i[1] =  87 + 1.42 * 45;
        item.i[2] = 110 + 2.10 * 45;
        item.i[3] =  85 + 1.93 * 45;
        item.methods[0] = 4010121; //2221,f5:i2±20(-10%),-60(br+ml)(i2);223:i2back;
        item.strategys[0] = 401011; //i2+30;4010121:20->32
    } break;

    case 40102: {
        unsigned char ch[] = {0xe5, 0x90, 0x95, 0xe5, 0xb8, 0x83};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 125+3.0*45;
        item.i[1] = 38+0.7*45;
        item.i[2] = 93+1.89*45;
        item.i[3] = 76+2.57*45;
        item.methods[0] = 4010222; //40%:2223*3,i0>:-100
        item.strategys[0] = 401021; //l1-7,r2,maxi0:2223
//        item.strategys[0] = 401022; //l1-5,j8+20
    } break;

    case 40103: {
        unsigned char ch[] = {0xe5, 0x8d, 0x8e, 0xe4, 0xbd, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] =  13 + 0.35 * 45;
        item.i[1] = 106 + 2.35 * 45;
        item.i[2] =  68 + 1.60 * 45;
        item.i[3] =  55 + 1.73 * 45;
        item.methods[0] = 4010321; //223,minh0,f1:l0-16(i1),buff111(1),+240(i1)
        item.strategys[0] = 401031; //hlo:k0+6(2)(*2)
        item.strategys[1] = 401032; //r45678,221,f3,25%:buf102(1)
    } break;

    case 40104: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe8, 0xa7, 0x92};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 35+0.43*45;
        item.i[1] = 113+2.55*45;
        item.i[2] = 105+1.99*45;
        item.i[3] = 62+1.53*45;
        item.methods[0] = 4010422; //zb60%:-300*3,buff+30*3,50%skip(4)
        item.strategys[0] = 401041; //2222:j2+4(*6),k2+4(*6)
    } break;

    case 40105: {
        unsigned char ch[] = {0xe8, 0xb2, 0x82, 0xe8, 0x9d, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[1] = 1;
        item.g[4] = 2;
        item.i[0] =  20 + 0.41 * 45;
        item.i[1] = 104 + 2.22 * 45;
        item.i[2] =  97 + 1.75 * 45;
        item.i[3] =  55 + 2.03 * 45;
        item.methods[0] = 4010520; //!f1:l0-30(maxi);223,maxi0:k1+15,-60(!i2)(!j0)
//        item.strategys[0] = 401051; //223,maxi0:j13+9(1)
        item.strategys[0] = 401052; //223,maxi0:j7+30(1)
//        item.strategys[7] = 411053; //quan
//        item.strategys[7] = 411054; //bao
//        item.strategys[7] = 411055; //wen
//        item.strategys[7] = 401056; //wu,r123,maxi0,2224:minh0+p*10%(maxi)
//        item.strategys[7] = 411057; //hu
//        item.strategys[7] = 411058; //long,223,40%(maxi),-f:2223
    } break;

    case 40106: {
        unsigned char ch[] = {0xe8, 0x94, 0xa1, 0xe6, 0x96, 0x87, 0xe5, 0xa7, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] =  18 + 0.24 * 45;
        item.i[1] = 107 + 2.29 * 45;
        item.i[2] =  94 + 1.59 * 45;
        item.i[3] =  87 + 1.92 * 45;
        item.methods[0] = 4010622; //65%,f3:+120(i1),buff102(1);g1=0:+50(i1)
        item.strategys[0] = 401061; //4010622:65%->75%,120-20%,50-20%;-f2:i1-30(1)
    } break;

    case 40107: {
        unsigned char ch[] = {0xe6, 0x9d, 0x8e, 0xe5, 0x84, 0x92};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] =  27 + 0.35 * 45;
        item.i[1] = 105 + 2.48 * 45;
        item.i[2] =  88 + 1.48 * 45;
        item.i[3] =  60 + 1.99 * 45;
        item.methods[0] = 4010722; //55%,-f2:zd(2);f3:zs(2);zd:-60(*5);zs:br/ml,50%:zd
        item.strategys[0] = 401071; //buff102(2);f2:j11+6,j12+6
    } break;

    case 40108: {
        unsigned char ch[] = {0xe5, 0xba, 0x9e, 0xe5, 0xbe, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 106 + 2.40 * 45;
        item.i[1] =  71 + 0.78 * 45;
        item.i[2] =  93 + 1.69 * 45;
        item.i[3] =  73 + 2.69 * 45;
        item.methods[0] = 4010820; //r35,221,-f3:i1/i2-30(i0),-340
        item.strategys[0] = 401081; //4010820:r35->r24
//        item.strategys[0] = 401082; //g4=2:i0/i3+20
    } break;

    case 40109: {
        unsigned char ch[] = {0xe9, 0x82, 0xb9, 0xe6, 0xb0, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[1] = 1;
        item.g[4] = 1;
        item.i[0] = 16 + 0.25 * 45;
        item.i[1] = 94 + 1.85 * 45;
        item.i[2] = 88 + 1.65 * 45;
        item.i[3] = 64 + 1.73 * 45;
        item.methods[0] = 4010920; //l0/l4/l5-16;acted:l+2(*8)(r);r45678,221,f2:+140
        item.strategys[0] = 401091; //4010920:l-16(i1),140(+20%)
    } break;

    case 40110: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe5, 0xae, 0x9d};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] =  66 + 0.24 * 45;
        item.i[1] = 101 + 2.25 * 45;
        item.i[2] =  99 + 1.73 * 45;
        item.i[3] =  65 + 1.75 * 45;
        item.methods[0] = 4011022; //60%,-f2:-280,buff5(2),buff3(2);buff5:k+35%
        item.strategys[0] = 401101; //-f3,buff5:l4+10(2)
    } break;

    case 40111: {
        unsigned char ch[] = {0xe8, 0xa2, 0x81, 0xe7, 0xbb, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 80+2.0*45;
        item.i[1] = 92+1.8*45;
        item.i[2] = 105+2.03*45;
        item.i[3] = 68+2.25*45;
        item.methods[0] = 4011121; //2221:maxi0-mini0=75*2,maxi1-mini1=75*2,maxi3-mini3=75*2
        item.strategys[0] = 401111; //f0:faction=10%
    } break;

    case 40112: {
        unsigned char ch[] = {0xe9, 0xa2, 0x9c, 0xe8, 0x89, 0xaf};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 3;
        item.i[0] = 107 + 2.40 * 45;
        item.i[1] =  50 + 0.76 * 45;
        item.i[2] =  92 + 1.69 * 45;
        item.i[3] =  77 + 2.56 * 45;
        item.methods[0] = 4011224; //100%,-f1:-150;i0>:70
        item.strategys[0] = 401121; //1+1(maxi0):k5+10,j13+6
    } break;

    case 40113: {
        unsigned char ch[] = {0xe6, 0x96, 0x87, 0xe4, 0xb8, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 3;
        item.i[0] = 107+2.40*45;
        item.i[1] = 59+0.75*45;
        item.i[2] = 101+1.74*45;
        item.i[3] = 94+2.81*45;
        item.methods[0] = 4011324; //55%:buff114(2),minh0:280
        item.strategys[0] = 401131; //1+1(maxi0),2224:l0-7(14)(2)
    } break;

    case 40114: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe6, 0xa2, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 105+2.15*45;
        item.i[1] = 47+0.51*45;
        item.i[2] = 109+1.98*45;
        item.i[3] = 73+2.08*45;
        item.methods[0] = 4011422; //65%:j9+25(2),j11+25(2),2*220,buff005(2)
        item.strategys[0] = 401141; //4011422:j9+8,j11+8,r1:1*buff012(1)
    } break;

    case 40115: {
        unsigned char ch[] = {0xe5, 0x8d, 0x8e, 0xe9, 0x9b, 0x84};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 105 + 2.39 * 45;
        item.i[1] =  43 + 0.65 * 45;
        item.i[2] =  87 + 1.79 * 45;
        item.i[3] =  83 + 2.48 * 45;
        item.methods[0] = 4011522; //100%:(k0+2.5*star);buff12(2);-f1:250;2223(!buff13)
        item.strategys[0] = 401151; //2224,16%:buff112(2)
    } break;

    case 40201: {
        unsigned char ch[] = {0xe7, 0x94, 0xb0, 0xe4, 0xb8, 0xb0};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 51+0.33*45;
        item.i[1] = 95+2.24*45;
        item.i[2] = 73+1.67*45;
        item.i[3] = 76+2.12*45;
        item.methods[0] = 4020122; //60%:maxi2:buff(1),i013+40(maxi)(2),mini2:i013-40(maxi)(2)
        item.strategys[0] = 402011; //4020122:60->70
    } break;

    case 40202: {
        unsigned char ch[] = {0xe9, 0x99, 0x88, 0xe5, 0xae, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 55+0.63*45;
        item.i[1] = 110+2.54*45;
        item.i[2] = 86+1.87*45;
        item.i[3] = 73+1.94*45;
        item.methods[0] = 4020221; //maxi0:l2-15(i1),2224:-140(i0)
        item.strategys[0] = 402021; //maxi0,2224:k0+2(*10)
        item.strategys[0] = 402022; //4020221:l2
    } break;

    case 40301: {
        unsigned char ch[] = {0xe5, 0x85, 0xac, 0xe5, 0xad, 0x99, 0xe7, 0x93, 0x92};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 99+2.01*45;
        item.i[1] = 86+1.91*45;
        item.i[2] = 103+1.9*45;
        item.i[3] = 96+2.3*45;
        item.methods[0] = 4030124; //50%:j9+24(i3)(2),-2*(140+140)(i3-)
        item.strategys[0] = 403011; //j6+7
//        item.strategys[0] = 403012; //j9:i0/i1+i3*2%(*8)
    } break;

    case 40401: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa6, 0xe6, 0x85, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 14+0.34*45;
        item.i[1] = 112+2.65*45;
        item.i[2] = 88+2.13*45;
        item.i[3] = 63+1.77*45;
        item.methods[0] = 4040121; //ys=10,l0-20(i1,ys),2222,50%(i1):2222,ys-1
        item.strategys[0] = 404011; //r123:3*l1-5
        item.strategys[0] = 404012; //ys-1,f2:k0+2
    } break;

    case 40402: {
        unsigned char ch[] = {0xe4, 0xba, 0x8e, 0xe5, 0x90, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 12+0.21*45;
        item.i[1] = 103+2.51*45;
        item.i[2] = 74+1.87*45;
        item.i[3] = 86+1.97*45;
        item.methods[0] = 4040222; //55%:-120*3,buff4(2),1~2:+200/buff112(2)/j4+10(2)
        item.strategys[0] = 404021; //4040222:1~2->2
    } break;

    case 40601: {
        unsigned char ch[] = {0xe9, 0xa9, 0xac, 0xe8, 0x85, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 84+2.07*45;
        item.i[1] = 59+0.73*45;
        item.i[2] = 101+2.23*45;
        item.i[3] = 91+1.87*45;
        item.methods[0] = 4060121; //r123:k5+20(i2),2225,50%(i2):2223
        item.strategys[0] = 406011; //g4=2:k0+5,i3+5%
    } break;

    case 40602: {
        unsigned char ch[] = {0xe8, 0xa2, 0x81, 0xe6, 0x9c, 0xaf};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 76+1.86*45;
        item.i[1] = 89+1.83*45;
        item.i[2] = 104+2.18*45;
        item.i[3] = 80+1.91*45;
        item.methods[0] = 4060221; //r1234:3*i2+80(i2),223:-15,221(r4):k0+15(i2),2225:3*160(i2)
        item.strategys[0] = 406021; //f0=4,r123:l0-5(i2)
    } break;

    case 40701: {
        unsigned char ch[] = {0xe9, 0xbb, 0x84, 0xe5, 0x9f, 0x94, 0xe5, 0xb5, 0xa9};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] =  89 + 1.83 * 45;
        item.i[1] =  85 + 1.96 * 45;
        item.i[2] = 111 + 2.36 * 45;
        item.i[3] =  80 + 1.93 * 45;
        item.methods[0] = 4070121; //l0-12(i2),acted:+1(10):i2(25)*3,+1(i2=60),10:260%*3(i2-i2)
        item.strategys[0] = 407011; //l1-7,r1,60%(i2):2*buff12(1)
    } break;

    case 40702: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe5, 0xae, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[1] = 1;
        item.g[4] = 0;
        item.i[0] = 56+0.70*45;
        item.i[1] = 107+2.40*45;
        item.i[2] = 102+1.85*45;
        item.i[3] = 77+1.60*45;
        item.methods[0] = 4070221; //2222:80%(-10%)-140*2,buff005:40%(i1)+h0(min)
        item.strategys[0] = 407021; //k2+7,act,50%:buff5(2)
        item.strategys[0] = 407022; //f3,zb2222:4070221
    } break;

    case 40703: {
        unsigned char ch[] = {0xe6, 0x9c, 0xb1, 0xe5, 0x84, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 82+1.90*45;
        item.i[1] = 99+2.21*45;
        item.i[2] = 106+2.12*45;
        item.i[3] = 88+1.67*45;
        item.methods[0] = 4070322; //70%:2*i2=26(i1)->i1(max)+p0,-180*2(i2-i2)
        item.strategys[0] = 407031; //r2:k0+8(i1+i2)
    } break;

    case 40901: {
        unsigned char ch[] = {0xe9, 0xab, 0x98, 0xe9, 0xa1, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 101+2.12*45;
        item.i[1] = 78+0.75*45;
        item.i[2] = 109+2.21*45;
        item.i[3] = 75+1.74*45;
        item.methods[0] = 4090121; //acted,5000,g4=1,50%(i2):k0+4(*5),l0-4(*5),-2*100(i2)
        item.strategys[0] = 409011; //f3,g4=1,i2<:l0-5
    } break;

    case 40911: {
        unsigned char ch[] = {0x73, 0x39, 0xe8, 0xa2, 0x81, 0xe7, 0xbb, 0x8d, 0x28, 0xe7, 0x9b, 0xbe, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 80+2.0*45;
        item.i[1] = 92+1.8*45;
        item.i[2] = 105+2.03*45;
        item.i[3] = 68+2.25*45;
        item.methods[0] = 4091121; //maxi0-mini0:-75-75,maxi1-mini1:-75-75,maxi3-mini3:-75-75,minh0:+act*20%(i2)
        item.strategys[0] = 9010; //g4=1(*3):l4-15,hlo=3000,maxi1:-3*100
        item.strategys[1] = 1490; //2223ed:k0+1(4)
        item.strategys[2] = 1440; //actbr:l0+1(4)
    } break;

    case 40912: {
        unsigned char ch[] = {0x73, 0x39, 0xe8, 0xa2, 0x81, 0xe7, 0xbb, 0x8d, 0x28, 0xe5, 0xbc, 0x93, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 80+2.0*45;
        item.i[1] = 92+1.8*45;
        item.i[2] = 105+2.03*45;
        item.i[3] = 68+2.25*45;
        item.methods[0] = 4091221; //l0-20(i2),2f,2222:k0+10(1)(*2),l0-10(1)(*2),3*2222:2*l0+15(i2)(2)
        item.strategys[0] = 9000; //g4=0(*3),2222,75%:g1=1,cd50%
        item.strategys[1] = 1090; //g1=0:l0-5
        item.strategys[2] = 1030; //r1:buff102*2
    } break;
	
    case 40913: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0x85, 0xac, 0xe5, 0xad, 0x99, 0xe7, 0x93, 0x92, 0x28, 0xe5, 0xbc, 0x93, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 0;
        item.i[0] = 99+2.01*45;
        item.i[1] = 86+1.91*45;
        item.i[2] = 103+1.9*45;
        item.i[3] = 96+2.3*45;
        item.methods[0] = 4091321; //r123,+2:j0+16(i3),j2+16(i3),2222,35%(i3):2222
        item.strategys[0] = 9000; //g4=0(*3),2222,75%:g1=1,cd50%
        item.strategys[1] = 1490; //2223ed:k0+1(4)
        item.strategys[2] = 1440; //actbr:l0+1(4)
    } break;

    case 40914: {
        unsigned char ch[] = {0x73, 0x39, 0xe5, 0x85, 0xac, 0xe5, 0xad, 0x99, 0xe7, 0x93, 0x92, 0x28, 0xe9, 0xaa, 0x91, 0x29};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 2;
        item.i[0] = 99+2.01*45;
        item.i[1] = 86+1.91*45;
        item.i[2] = 103+1.9*45;
        item.i[3] = 96+2.3*45;
        item.methods[0] = 4091424; //60%:i0i1±16(i3)(2)(*2),-2*120(*2)(i3-),g4=1:-10%
        item.strategys[0] = 9020; //g4=2(*3),!2224,50%:2224,1~2*buff15(1)
        item.strategys[1] = 1730; //act:j6+1.2(*4)
        item.strategys[2] = 1740; //act:k5+2.5(*4)
    } break;

    case 41101: {
        unsigned char ch[] = {0xe5, 0xad, 0x9f, 0xe8, 0x8e, 0xb7};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[2] = 1;
        item.g[4] = 1;
        item.i[0] =  97 + 2.10 * 45;
        item.i[1] =  67 + 0.64 * 45;
        item.i[2] = 108 + 2.44 * 45;
        item.i[3] =  77 + 1.92 * 45;
        item.methods[0] = 4110121; //f3:l1-8(i2,f2+50%);-f3,method0-b20,35%(i2),maxi0:-90br(f2:h0-)
        item.strategys[0] = 411011; //g1=0:l0-5,-f3:maxi-3%(i2)
    } break;

    case 41102: {
        unsigned char ch[] = {0xe7, 0xa5, 0x9d, 0xe8, 0x9e, 0x8d, 0xe5, 0xa4, 0xab, 0xe4, 0xba, 0xba};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[1] = 1;
        item.f[2] = 1;
        item.g[4] = 2;
        item.i[0] = 112 + 2.46 * 45;
        item.i[1] =  72 + 0.90 * 45;
        item.i[2] =  91 + 1.95 * 45;
        item.i[3] =  82 + 2.18 * 45;
        item.methods[0] = 4110220; //br,b20,40%:j0,minh0+p*25%(i0);2221-2225,-f2:i0±20(i0),i2±20(i0);-f3:-90br(h0-)
        item.strategys[0] = 411021; //b20:k+6;4110220:2221->221
    } break;

    case 41301: {
        unsigned char ch[] = {0xe7, 0xbe, 0xa4, 0xe5, 0xad, 0x99, 0xe5, 0x9d, 0x9a};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.g[4] = 1;
        item.i[0] = 106 + 2.62 * 45;
        item.i[1] =  70 + 1.55 * 45;
        item.i[2] = 100 + 2.34 * 45;
        item.i[3] =  85 + 1.92 * 45;
        item.methods[0] = 4130122; //65%,-f2(mini2):xn(*5),-150br;xn:l0+3(i0);5xn:tb(i0+h0,1000);50%(i0):twice
        item.strategys[0] = 413011; //k1+7:4130122,35%(i-):xn
    } break;

    case 41302: {
        unsigned char ch[] = {0xe6, 0x9c, 0xa8, 0xe9, 0xb9, 0xbf, 0xe5, 0xa4, 0xa7, 0xe7, 0x8e, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 4;
        item.f[2] = 1;
        item.g[4] = 1;
        item.i[0] =  73 + 1.22 * 45;
        item.i[1] = 103 + 2.33 * 45;
        item.i[2] =  82 + 1.76 * 45;
        item.i[3] =  88 + 1.98 * 45;
        item.methods[0] = 4130220; //pre2222,50%(maxi),-f1~2,*2:maxi-6%(maxi),l0±8,-80ml
        item.strategys[0] = 413021; //l0-5;4130220,f2:+50(i1)
    } break;

#ifdef XYX
    case 70001: {
        unsigned char ch[] = {0xe5, 0x85, 0xac, 0xe5, 0xad, 0x99, 0xe7, 0x8f, 0xa3};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 7;
        item.g[4] = 2;
        item.i[0] = 100 + 2 * 45;
        item.i[1] = 100 + 2 * 45;
        item.i[2] = 100 + 2 * 45;
        item.i[3] = 100 + 2 * 45;
        item.methods[0] = 7000121; //f3,hlo,10%,-f1:-2000tb
        item.strategys[0] = 700011; //
    } break;

    case 70002: {
        unsigned char ch[] = {0xe8, 0xa2, 0x81, 0xe8, 0x80, 0x80};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 7;
        item.g[4] = 2;
        item.i[0] = 100 + 2 * 45;
        item.i[1] = 100 + 2 * 45;
        item.i[2] = 100 + 2 * 45;
        item.i[3] = 100 + 2 * 45;
        item.methods[0] = 7000221; //f3,tb:buff15(2),buff16(2),buff17(2)
        item.strategys[0] = 700021; //
    } break;

    case 70003: {
        unsigned char ch[] = {0xe5, 0xbc, 0xa0, 0xe7, 0xa5, 0x9e, 0xe6, 0x82, 0xa6};
        Logger::H().printname(ch, sizeof(ch), id);
        item.id = id;
        item.f[0] = 7;
        item.f[1] = 1;
        item.g[4] = 2;
        item.i[0] = 100 + 2 * 45;
        item.i[1] = 100 + 2 * 45;
        item.i[2] = 100 + 2 * 45;
        item.i[3] = 100 + 2 * 45;
        item.methods[0] = 7000321; //ex,f3:+100
        item.strategys[0] = 700031; //
    } break;
#endif

    default:
        ret = false;
        break;
    }

    return ret;
}

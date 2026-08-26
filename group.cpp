#include "group.h"
#include "method/method.h"
#include "strategy/strategy.h"
#include "log/logger.h"
#include "ui/name.h"
#include <QFile>

Group::Group()
{

}

bool Group::getGroup(int id, Group& group)
{
    int n = 0;
    switch (id)
    {
    case 1: {
        group.formation = 5;
        Item::getItem(10101, group.m_item[0]);
        Item::getItem(10103, group.m_item[1]);
        Item::getItem(10104, group.m_item[2]);
        group.m_item[0].l[0] = -70;
        group.m_item[1].l[0] = -70;
        group.m_item[2].l[0] = -70;
    } break;

    case 2: {
        group.formation = 3;
        group.star = 0;

        n = 0;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[7] += 20;

        n = 1;
        Item::getItem(20101, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 130121; //r123,m0,hlo:l0-3(i1+i2)(*6);r45678,2221,-f2:-50ml(hlo)    60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 20222; //75%:maxi1,l0-25(i1)(2)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].strategys[1] = 1470; //g1=0:l0-5
        group.m_item[n].strategys[2] = 1480; //g1=1:k0+5.5
        group.m_item[n].i[5] += 14 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 26;
    } break;

    case 5: {
        group.formation = 8;
        group.star = 0;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 13022; //55%,-f3:-130br,buff2(2)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].i[7] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[4] += 20;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 11121; //buff11,buff111,j7+30
        group.m_item[n].methods[2] = 140221; //g1=0,acted,f2:j2+2(15)  50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].i[6] += 14 + 10 * (5 + group.star);
        group.m_item[n].i[5] += 26;

        n = 2;
        Item::getItem(11402, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 14720; //j13+16,k0+35
        group.m_item[n].methods[2] = 14024; //40%:i3+30;-f2*180br(i3)
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[7] += 20;
    } break;

    case 6: {
        group.formation = 8;
        group.star = 0;

        n = 0;
        Item::getItem(31501, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(31202, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 140221; //g1=0,acted,f2:j2+2(15)
        group.m_item[n].i[5] += 14 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 26;

        n = 2;
        Item::getItem(20103, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].methods[2] = 100120; //acted,55%:i0+5(i0)(*15),buff2(2);buff2:l0+8(2)(*2);max=4/r
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;
        group.m_item[n].strategys[1] = 101012;
    } break;

#if 0
        group.m_item[n].methods[1] = 10320; //2223,60%:-2*100%,i0>:-30
        group.m_item[n].methods[1] = 12620; //50%,f2:+50(i1+i2)
        group.m_item[n].methods[1] = 13320; //r1357:!2223,l1\l3/l5-35;r2468:!2222,l2\l4-35
        group.m_item[n].methods[2] = 14120; //ex:+40(*10),l0-10(*4)(2)
        group.m_item[n].methods[1] = 14220; //j11+30,2223:k1+6*6,2223*3:-200*1
        group.m_item[n].methods[1] = 14420; //j2+25(i1);actml,50%:i1+10(2)(*4)
        group.m_item[n].methods[1] = 14720; //j13+16,k0+35
        group.m_item[n].methods[1] = 16420; //ex,60%:-126.5*1(2)
        group.m_item[n].methods[1] = 20120; //2225:j0+20,2*110
        group.m_item[n].methods[1] = 20520; //j5+6(i1),221:k0+8
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[1] = 30120; //j8+50(i0),2223:l1-5(2)*6
        group.m_item[n].methods[2] = 40220; //221:k0+10;2221,55%:l0-20/hlo+200
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[n].methods[2] = 100120; //acted,55%:i0+5(i0)(*15),buff2(2);buff2:l0+8(2)(*2);max=4/r
        group.m_item[n].methods[2] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].methods[2] = 100320; //m0act,30%(i1):k2+5(1);-f1:30ml;max=4/r
        group.m_item[n].methods[2] = 110120; //j13+15(j9);223,-f3:-50(br/ml);j9:p+10~50
        group.m_item[n].methods[2] = 150120; //

        group.m_item[n].methods[2] = 11121; //buff11,buff111,j7+30
        group.m_item[n].methods[2] = 11721; //r3,f2,80%:j0\j2=100,j1\j3+40
        group.m_item[n].methods[2] = 12921; //r2,r4:buff3*6,r1357,60%:-100*3,r2468,60%:-280*1
        group.m_item[n].methods[1] = 13221; //g1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].methods[2] = 14321; //acted,60%,maxi0:i0+7(8),maxi1:i1+7(8),maxi2:i2+7(8)
        group.m_item[n].methods[1] = 14521; //221:k0+7%*2
        group.m_item[n].methods[2] = 14621; //221:buff15(2),223,buff15:-110
        group.m_item[n].methods[2] = 15721; //f1+1:l0-29.9
        group.m_item[n].methods[2] = 20621; //r2,221,65%:+150*2,223,65%:-150*2
        group.m_item[n].methods[1] = 20721; //i2+20%;r2,221,60%,-f2~3:buff14(2)(*2)
        group.m_item[n].methods[2] = 30221; //2221,1+1:+90(i1,i2)
        group.m_item[n].methods[2] = 30321; //80%(-8%):buff102*3
        group.m_item[n].methods[2] = 40121; //l0-24*2,r4:+360(i1)*3
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[1] = 60121; //6*j4-12(i1);r4,maxi1:k2+18(i1);r4,mini1;l2-18(i1)
        group.m_item[n].methods[2] = 60221; //221,60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].methods[2] = 90121; //r123:!2223,r4:-3*340,r6:-3*380,r8:3*-420
        group.m_item[n].methods[2] = 101021; //3*f0=1,g1=1,f1:hb;r1234,-f3,2223:k0±3(*n);r4567,act,minh0:+p*15%(i1)
        group.m_item[n].methods[2] = 102021; //3*f0=2,f3,2222,-f3:buff2(2);f3,buff1-99:l0-8(1)(*2);f3,ex,25%,f3:k0+5(*5)
        group.m_item[n].methods[2] = 104021; //3*f0=4,maxi0:zf;2224:k0+5(*10),minh0+80(i1),3/r;2222:k5+10(*5),j6+5(*5)
        group.m_item[n].methods[2] = 110321; //1+f1,bred/mled,35%,max=3:k1/k2-3(2)(max=10),+25(i1);f1=1:25+10
        group.m_item[n].methods[2] = 120321; //f1(f1=0):hm;act,50%(i0):buff2(1);buff2:k1+2(i0)
        group.m_item[n].methods[2] = 130121; //r123,m0,hlo:l0-3(i1+i2)(*6);r45678,2221,-f2:-50ml(hlo)
        group.m_item[n].methods[2] = 140121; //f3,b102-2:js(1);js:i2+24,max=3;223,minh0:+60(+20/js)(i1,i2)
        group.m_item[n].methods[2] = 140221; //g1=0,acted,f2:j2+2(15)
        group.m_item[n].methods[2] = 150221; //

        group.m_item[n].methods[1] = 10122; //60%,f2:ex-1,+180(i1)
        group.m_item[n].methods[1] = 10222; //65%,maxi0:-220;maxi1:-220
        group.m_item[n].methods[1] = 10422; //50%,-f1,*4:[-100,-140]
        group.m_item[n].methods[2] = 10522; //45%,-f2:-180ml;50%:buff12(1)
        group.m_item[n].methods[2] = 10622; //50%:+260*1,buff111
        group.m_item[n].methods[2] = 10722; //zb55%,-f1:l0+30(2),-440br;r1:!zb
        group.m_item[n].methods[2] = 10822; //45%,-f2:i-25(i1)(*2)(2)
        group.m_item[n].methods[1] = 11222; //50%:maxi0-80*3,maxi1-80*3
        group.m_item[n].methods[2] = 11322; //zb40%:3*buff4,-3*260br,3*buff12,buff13(1)
        group.m_item[n].methods[2] = 11422; //55%:-350ml(ex+25)*1
        group.m_item[n].methods[2] = 11522; //zb40%,-f3:-250ml(-25*5);25%(8%*5):buff011(1)
        group.m_item[n].methods[2] = 11622; //zb50%,-f1,*5:-160ml;buff4:p+40
        group.m_item[n].methods[2] = 11822; //55%,-f3:buff14(2);l0-30(2)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].methods[2] = 9011922; //70%:j7+45,j12+20
        group.m_item[n].methods[2] = 12022; //55%,mini2:-220br,buff15(2);buff15:-80br
        group.m_item[n].methods[1] = 12122; //50%:j0+20(2);-f3:-150br
        group.m_item[n].methods[1] = 12222; //45%,-f1:buff17(1),-300ml;buff17:-150ml
        group.m_item[n].methods[1] = 12322; //45%,-f3:-80ml,buff1(2);fy,-f1*3:-80ml;buff3:k+30%
        group.m_item[n].methods[1] = 12422; //60%,-f2:-180br;buff3:k+25%;buff3:j9+10(2)
        group.m_item[n].methods[1] = 12522; //50%:j11+30(2);-f2:-220br
        group.m_item[n].methods[1] = 12722; //55%,minh0:ex-3,+260(i1)
        group.m_item[n].methods[1] = 12822; //50%,-f5:-140ml;buff1,40%:buff017(1);buff4,40%:buff13(1);buff3,40%:buff12(1)
        group.m_item[n].methods[1] = 13022; //55%,-f3:-130br,buff2(2)
        group.m_item[n].methods[1] = 13122; //zb50%,-f2:-220br,-220ml;buff1:buff017(2)
        group.m_item[n].methods[1] = 13822; //zb50%,-f3:-300br
        group.m_item[n].methods[2] = 17422; //40%,-f2:buff13(1);buff13:k0-17.2(2)
        group.m_item[n].methods[2] = 17822; //zb35%,-f2:-253ml,buff16(2);buff16:-57.5ml
        group.m_item[n].methods[2] = 20222; //75%:maxi1,l0-25(i1)(2)
        group.m_item[n].methods[1] = 30422; //45%,-f2:i1±20,i2±20,-140ml
        group.m_item[n].methods[1] = 30522; //50%,-f3:buff1(2),-90br,-90ml
        group.m_item[n].methods[1] = 30622; //40%,-f1:-360br,buff101
        group.m_item[n].methods[2] = 40322; //zb45%,-f3:-260ml;80%:buff11~17(2)
        group.m_item[n].methods[2] = 50322; //45%,-f3:-150br;75%:buff15(2)
        group.m_item[n].methods[2] = 70222; //55%,-f3:-140ml,buff5(2);buff2:k0-16(1)
        group.m_item[n].methods[2] = 70322; //50%,-f2:-220br;75%:buff13(1)
        group.m_item[n].methods[2] = 80222; //100%,f2:+90(i1);>4,-f2:-160ml
        group.m_item[n].methods[2] = 90222; //75%,1+1:l0-20(1)(i3),g1=0:+120(i2+i3)
        group.m_item[n].methods[2] = 103022; //65%,3*f0=3,-f3:buff1(2);buff1:i1-20(i3)(2)(*2);maxi1,-f2:-70
        group.m_item[n].methods[2] = 110222; //60%:k1+20(2);-f2:-160br;b20:p+30%
        group.m_item[n].methods[2] = 120122; //70%,-f3:buff14(1),buf106+h0*5%(i3)
        group.m_item[n].methods[2] = 120222; //70%,-f3:buff1(1),buf3(1);buff3:i0-20(i0)(1);buff1:i1-20(i1)(1)
        group.m_item[n].methods[2] = 130222; //60%:b102(1),j2/j3+8(i1)+2(*8)(2);-f2:-140ml

        group.m_item[n].methods[1] = 10924; //40%:j0+20;-f1:-400br(-25/r)
        group.m_item[n].methods[1] = 11024; //45%,-f3:-120br;p+12/r(*5)
        group.m_item[n].methods[2] = 13424; //40%,-f1:-280br,buff12(1);buff12,50%:buff11(1)
        group.m_item[n].methods[2] = 13624; //70%,-f1:-220br;g1=1,75%:j4+10(2)(*3)
        group.m_item[n].methods[2] = 13724; //50%,f2:buff102,l0-20(2)
        group.m_item[n].methods[2] = 13924; //40%,-f1:-280br;buff16:k+30%;!buff16,65%:buff16(1)
        group.m_item[n].methods[2] = 14024; //40%:i3+30;-f2*180br(i3)
        group.m_item[n].methods[2] = 14824; //40%,mini3,-f1:-280br(i3-);g1=1:-100
        group.m_item[n].methods[2] = 20324; //60%:i0/i1/i2-30(3)(*5)
        group.m_item[n].methods[2] = 20424; //60%,-f1:buff17(1),-180ml;buff17,-f1:-100ml
        group.m_item[n].methods[2] = 40424; //50%,mini1,-f1:-160ml;mini2,-f1:-160br
        group.m_item[n].methods[1] = 60324; //50%,-f2:-180;36%:k+20%(i1)
        group.m_item[n].methods[1] = 70124; //75%,-f3:-40ml(+12/r);50%(i1):again
        group.m_item[n].methods[2] = 80324; //35%,-f3:-140br;r2468,minh0:-100br;!35%:k+50%
        group.m_item[n].methods[2] = 90324; //50%,-f2:110br;60%:1*ex(1)
        group.m_item[n].methods[1] = 9070124; //75%,-f3:-40br(+12/r);50%(i0):again

        group.m_item[n].strategys[1] = 1010; //k2+6
        group.m_item[n].strategys[2] = 1020; //act:k2+1(8)
        group.m_item[n].strategys[2] = 1030; //r1:buff102*2
        group.m_item[n].strategys[2] = 1040; //r1:buff14*3
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].strategys[2] = 1070; //i0+i1*12%
        group.m_item[n].strategys[2] = 1080; //i1+i0*12%
        group.m_item[n].strategys[1] = 1090; //g1=0:l0-5
        group.m_item[n].strategys[1] = 1100; //ex:k0+8
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //r1234:j6+5
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //r123:j4+5
        group.m_item[n].strategys[1] = 1150; //j17+20
        group.m_item[n].strategys[1] = 1160; //j9+4.5
        group.m_item[n].strategys[1] = 1170; //g1=0:j9+5
        group.m_item[n].strategys[1] = 1180; //r1234:j9+6
        group.m_item[n].strategys[1] = 1190; //k1+6.5
        group.m_item[n].strategys[1] = 1200; //r1234:k1+8
        group.m_item[n].strategys[1] = 1210; //actbr:k1+1.8(5)
        group.m_item[n].strategys[1] = 1220; //r1357:k1+9.9
        group.m_item[n].strategys[1] = 1230; //r45678,k2+10
        group.m_item[n].strategys[1] = 1240; //r2468:k2+9
        group.m_item[n].strategys[1] = 1250; //k0+5
        group.m_item[n].strategys[1] = 1260; //g1=1:k0+6
        group.m_item[n].strategys[1] = 1270; //k11+8
        group.m_item[n].strategys[1] = 1280; //k4+8
        group.m_item[n].strategys[1] = 1290; //2222:l0-5.5(2)
        group.m_item[n].strategys[1] = 1300; //act1,80%:114
        group.m_item[n].strategys[1] = 1310; //k10+7
        group.m_item[n].strategys[1] = 1320; //g1=0:k0+5
        group.m_item[n].strategys[1] = 1330; //l0-4.5
        group.m_item[n].strategys[1] = 1340; //r1234:l0-6
        group.m_item[n].strategys[1] = 1350; //g1=1:l0-5
        group.m_item[n].strategys[1] = 1360; //l1-5.5
        group.m_item[n].strategys[1] = 1370; //r1234:l1-9
        group.m_item[n].strategys[1] = 1380; //l2-5.5
        group.m_item[n].strategys[1] = 1390; //r2468:l2-9
        group.m_item[n].strategys[1] = 1400; //i2+15
        group.m_item[n].strategys[1] = 1410; //maxi0:j8+8
        group.m_item[n].strategys[1] = 1420; //hloed:i2+10(1)
        group.m_item[n].strategys[1] = 1430; //g4≠:l0-5
        group.m_item[n].strategys[1] = 1440; //actbr:l0+1(4)
        group.m_item[n].strategys[1] = 1450; //actmled:l0-1.2(4)
        group.m_item[n].strategys[1] = 1460; //maxi2:l0-4.5
        group.m_item[n].strategys[1] = 1470; //g1=0:l0-5
        group.m_item[n].strategys[1] = 1480; //g1=1:k0+5.5
        group.m_item[n].strategys[1] = 1490; //2223ed:k0+1(4)
        group.m_item[n].strategys[2] = 1500; //r1:1+1*buff13
        group.m_item[n].strategys[2] = 1510; //r2:1+1*k0-15(1)
        group.m_item[n].strategys[2] = 1520; //2*j11+3.5
        group.m_item[n].strategys[2] = 1530; //2*j12+3.5
        group.m_item[n].strategys[2] = 1540; //2*k1+3.5
        group.m_item[n].strategys[2] = 1550; //2*k2+3.5
        group.m_item[n].strategys[2] = 1560; //2*l1-3.5
        group.m_item[n].strategys[2] = 1570; //2*l2-3.5
        group.m_item[n].strategys[2] = 1580; //j0+3
        group.m_item[n].strategys[2] = 1590; //r123:j0+5
        group.m_item[n].strategys[2] = 1600; //r1357:j0+5.5
        group.m_item[n].strategys[2] = 1610; //j0,60%:i0+5(4)
        group.m_item[n].strategys[2] = 1620; //j2+3
        group.m_item[n].strategys[2] = 1630; //r2468:j2+5.5
        group.m_item[n].strategys[2] = 1640; //223:j2+1
        group.m_item[n].strategys[2] = 1650; //act,maxh0:k0+7
        group.m_item[n].strategys[2] = 1660; //act,i2>:k0+5.5
        group.m_item[n].strategys[2] = 1670; //k3+12
        group.m_item[n].strategys[2] = 1680; //r1234:k3+15
        group.m_item[n].strategys[2] = 1690; //2223:k3+4.5(*5)
        group.m_item[n].strategys[2] = 1700; //2223:l0-1.8(*5)
        group.m_item[n].strategys[2] = 1710; //k5+7
        group.m_item[n].strategys[2] = 1720; //r1234:k5+9
        group.m_item[n].strategys[2] = 1730; //act:j6+1.2(*4)
        group.m_item[n].strategys[2] = 1740; //act:k5+2.5(*4)
        group.m_item[n].strategys[2] = 1750; //2224:l0-5.5(2)
        group.m_item[n].strategys[2] = 1760; //j13+6
        group.m_item[n].strategys[2] = 1770; //act:j13+1.5(*5)
        group.m_item[n].strategys[2] = 1780; //r1357:j13+9
        group.m_item[n].strategys[2] = 1790; //j11+5
        group.m_item[n].strategys[2] = 1800; //r1357:j11+8
        group.m_item[n].strategys[2] = 1810; //j12+5
        group.m_item[n].strategys[2] = 1820; //r2468:j12+9
        group.m_item[n].strategys[0] = 9000; //g4=0(*3),2222,75%:g1=1,cd50%
        group.m_item[n].strategys[0] = 9010; //g4=1(*3):l4-15,hlo=3000,maxi1:-3*100
        group.m_item[n].strategys[0] = 9020; //g4=2(*3),!2224,50%:2224,1~2*buff15(1)
        group.m_item[n].strategys[0] = 9030; //g4=3(*3),3332,65%:p+15%,buff102(*3)
        group.m_item[n].strategys[3] = 11030; //g4=3(*3),3332,65%:p+15%,buff102(*3)
#endif
#ifdef CCZ
    case 5001: {
        group.formation = 3;

        n = 0;
        Item::getItem(40102, group.m_item[n]);
        group.m_item[n].methods[0] = 5000120; //acted:qi+p;qi=2000,-f3:-500
        group.m_item[n].strategys[0] = 500001; //100%:3332;j0/j7=i3/6
//        group.m_item[n].strategys[1] = 500005; //act:l0+30,buff11(1)
        group.m_item[n].strategys[2] = 500006; //2223,-f:1->3
        group.m_item[n].strategys[3] = 500007; //i+30%
//        group.m_item[n].strategys[4] = 500008; //f2,2223:2223
        group.m_item[n].i[4] += 100;
        group.m_item[n].i[6] += 100;

        n = 1;
        Item::getItem(40101, group.m_item[n]);
        group.m_item[n].methods[0] = 5000320; //acted:qi+p;qi=2000,-f1:-50%cd
        group.m_item[n].strategys[0] = 500001; //100%:3332;j0/j7=i3/6
        group.m_item[n].strategys[1] = 500002; //2223,3332,-f1:-1000cd
        group.m_item[n].strategys[2] = 500003; //2223,3332:*2
//        group.m_item[n].strategys[3] = 500004; //j0=100
//        group.m_item[n].strategys[4] = 500008; //f2,2223:2223
        group.m_item[n].i[4] += 100;
        group.m_item[n].i[6] += 100;

        n = 2;
        Item::getItem(40103, group.m_item[n]);
        group.m_item[n].methods[0] = 5000220; //acted:qi+p;qi=2000,f3:-exs,+500
        group.m_item[n].strategys[0] = 500001; //100%:3332;j0/j7=i3/6
        group.m_item[n].strategys[1] = 500009; //f3:k0+10*n
        group.m_item[n].i[5] += 100;
        group.m_item[n].i[6] += 100;
    } break;
#endif
#ifdef XYX
    case 6001: {
        group.formation = 2;

        n = 0;
        Item::getItem(40102, group.m_item[n]);
        group.m_item[n].methods[0] = 6000124; //100%,-f1,*3:-100br
        group.m_item[n].strategys[0] = 0;
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(20103, group.m_item[n]);
        group.m_item[n].methods[0] = 6000121; //2224ed,f3->f1,100%(/2):buff11(1),-100br/ml,+point*50%
        group.m_item[n].methods[1] = 6000221; //221,-f3:buff7(2)
        group.m_item[n].strategys[0] = 0;
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(10109, group.m_item[n]);
        group.m_item[n].methods[0] = 6000122; //g1=1:-100br
        group.m_item[n].strategys[0] = 0;
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[7] += 20;
    } break;

    case 70: {
        group.formation = 2;
        group.star = 1;

        n = 0;
        Item::getItem(70002, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 14120; //ex:+40(*10),l0-10(*4)(2)
        group.m_item[n].methods[2] = 12620; //50%,f2:+50(i1+i2)
        group.m_item[n].i[6] += 20 + 35 + 10 * group.star;
        group.m_item[n].i[5] += 20 + 15;

        n = 1;
        Item::getItem(70001, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 60221; //221,60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 15721; //f1+1:l0-29.9
        group.m_item[n].i[6] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[5] += 20;

        n = 2;
        Item::getItem(70003, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 110321; //1+f1,bred/mled,35%,max=3:k1/k2-3(2)(max=10),+25(i1);f1=1:25+10
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;
    } break;
#endif
    default:
#if 0
    case 1: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8c, 0xe5, 0x87, 0x8f, 0xe5, 0x8f, 0xb8, 0xe9, 0xa9, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        Item::getItem(10106, group.m_item[0]);
        group.m_item[0].methods[1] = 12620; //50%,+2*50
        group.m_item[0].methods[2] = 14120; //ex+40,l0-10*4(2)
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[4] += 18;

        Item::getItem(10101, group.m_item[1]);
        group.m_item[1].methods[1] = 14521; //221:k0+7%*2
        group.m_item[1].methods[2] = 40121; //l0-25*2,+
        group.m_item[1].strategys[1] = 1030; //102
        group.m_item[1].strategys[2] = 1060; //(maxi1)k0+5
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(10301, group.m_item[2]);
        group.m_item[2].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
//        group.m_item[2].methods[2] = 11622; //50%,-160*5,b004+40
        group.m_item[2].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[2].strategys[1] = 1010; //k2+6
        group.m_item[2].strategys[2] = 1020; //k2+8
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 2: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8c, 0xe5, 0x87, 0x8f, 0xe5, 0x8f, 0xb8, 0xe9, 0xa9, 0xac};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        Item::getItem(10106, group.m_item[0]);
        group.m_item[0].methods[1] = 12620; //50%,+2*50
        group.m_item[0].methods[2] = 14120; //ex+40,l0-10*4(2)
        group.m_item[0].i[6] += 68;
        group.m_item[0].i[5] += 18;

        Item::getItem(10105, group.m_item[1]);
        group.m_item[1].methods[1] = 30321;
        group.m_item[1].methods[2] = 40121;
        group.m_item[1].strategys[1] = 1030; //102
        group.m_item[1].strategys[2] = 1060; //(maxi1)k0+5
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(10301, group.m_item[2]);
        group.m_item[2].methods[1] = 30422;
        group.m_item[2].methods[2] = 11622; //50%,-160*5,b004+40
        group.m_item[2].strategys[1] = 1010; //k2+6
        group.m_item[2].strategys[2] = 1020; //k2+8
        group.m_item[2].i[6] += 68;
        group.m_item[2].i[4] += 18;
    } break;

    case 3: {
        unsigned char ch[] = {0xe8, 0xb4, 0xbe, 0xe5, 0xa4, 0xaa, 0xe5, 0xb0, 0x89};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        Item::getItem(10202, group.m_item[0]);
        group.m_item[0].methods[1] = 12620; //50%,+2*50
        group.m_item[0].methods[2] = 14120; //ex+40,l0-10*4(2)
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(10101, group.m_item[1]);
        group.m_item[1].methods[1] = 30321;
        group.m_item[1].methods[2] = 40121; //l0-25*2,+
        group.m_item[1].strategys[1] = 1030; //102
        group.m_item[1].strategys[2] = 1060; //(maxi1)k0+5
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(10301, group.m_item[2]);
        group.m_item[2].methods[1] = 30422;
        group.m_item[2].methods[2] = 11622; //50%,-160*5,b004+40
        group.m_item[2].strategys[1] = 1010; //k2+6
        group.m_item[2].strategys[2] = 1020; //k2+8
        group.m_item[2].i[6] += 68;
        group.m_item[2].i[4] += 18;
    } break;

    case 101: {
        unsigned char ch[] = {0xe8, 0xb5, 0xb5, 0xe7, 0x94, 0x98, 0xe5, 0xa7, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 5;

        Item::getItem(20301, group.m_item[0]);
        group.m_item[0].methods[1] = 60121;
        group.m_item[0].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(20104, group.m_item[1]);
        group.m_item[1].methods[1] = 14720; //k0+35,j13+16
        group.m_item[1].methods[2] = 20120; //j0+20,2*100
        group.m_item[1].i[4] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(20501, group.m_item[2]);
        group.m_item[2].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[2].methods[2] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 102: {
        unsigned char ch[] = {0xe5, 0x8c, 0x97, 0xe4, 0xbc, 0x90, 0xe4, 0xb9, 0x8b, 0xe5, 0xbf, 0x97};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 6;

        Item::getItem(20104, group.m_item[0]);
        group.m_item[0].methods[1] = 20120; //j0+20,2*100
        group.m_item[0].methods[2] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[0].i[4] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(20103, group.m_item[1]);
//        group.m_item[1].methods[1] = 14521; //221:k0+7%*2
//        group.m_item[1].methods[2] = 15721; //l0-30*2
        group.m_item[1].methods[1] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[1].methods[2] = 13524; //45%:-300,+buff015(2),-100
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(20501, group.m_item[2]);
        group.m_item[2].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[2].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
        group.m_item[2].i[7] += 1;
    } break;

    case 103: {
        unsigned char ch[] = {0xe5, 0xa4, 0xab, 0xe5, 0xa6, 0xbb, 0xe5, 0xa7, 0x9c};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 5;

        Item::getItem(20107, group.m_item[0]);
        group.m_item[0].methods[1] = 60121; //6*j4-14(i1)
        group.m_item[0].methods[2] = 15721; //l0-30*2
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(20103, group.m_item[1]);
        group.m_item[1].methods[1] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[1].methods[2] = 13524; //45%:-300,+buff015(2),-100
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(20501, group.m_item[2]);
        group.m_item[2].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[2].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
        group.m_item[2].i[7] += 1;
    } break;

    case 301: {
        group.formation = 2;

        n = 0;
        Item::getItem(30106, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 12921; //r2,r4:buff3*6,r1357,60%:-100*3,r2468,60%:-280*1
        group.m_item[n].strategys[0] = 301061; //3010621:l0+20*3,+180/2
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(30102, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[n].strategys[0] = 301026; //k2+6,5*actml:2*ex(1)
        group.m_item[n].strategys[1] = 1100;
        group.m_item[n].strategys[2] = 1020;
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(30110, group.m_item[n]);
        group.m_item[n].methods[1] = 20520; //j5+6(i1),221:k0+8
        group.m_item[n].methods[2] = 14521; //221:k0+7%*2
        group.m_item[n].strategys[0] = 301101; //3011022:j5+15,hlo-75%
        group.m_item[n].strategys[1] = 301102; //f1=1,hlo:-1*100
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;
    } break;

    case 401: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa6, 0xe7, 0x94, 0xb0, 0xe9, 0x99, 0x86};
        Logger::H().printname(ch, sizeof(ch), 401);

        group.formation = 2;

        Item::getItem(40401, group.m_item[0]);
        group.m_item[0].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[0].methods[2] = 30321; //80%(-10%):buff102*3
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(40201, group.m_item[1]);
        group.m_item[1].methods[1] = 10822; //45%:i-30(i1)*2(2)
        group.m_item[1].methods[2] = 12322; //45%:-80*3,buff011*3,-80*3
        group.m_item[1].strategys[1] = 1050;
        group.m_item[1].strategys[2] = 1060;
        group.m_item[1].i[7] += 68;
        group.m_item[1].i[5] += 18;

        Item::getItem(30201, group.m_item[2]);
        group.m_item[2].methods[1] = 20520; //j5+6(i1),221:k0+8
        group.m_item[2].methods[2] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[2].strategys[1] = 1010;
        group.m_item[2].strategys[2] = 1020;
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 402: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa6, 0xe5, 0xb0, 0x8f, 0xe9, 0x99, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);

        group.formation = 2;

        Item::getItem(40401, group.m_item[0]);
        group.m_item[0].methods[1] = 40121;
        group.m_item[0].methods[2] = 15721; //l0-30*2
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(30110, group.m_item[1]);
        group.m_item[1].methods[1] = 30522; //50%:3*buff001(2),3*90*2
        group.m_item[1].methods[2] = 10522;
        group.m_item[1].strategys[1] = 1050;
        group.m_item[1].strategys[2] = 1060;
        group.m_item[1].i[7] += 68;
        group.m_item[1].i[5] += 18;

        Item::getItem(30201, group.m_item[2]);
        group.m_item[2].methods[1] = 20520;
        group.m_item[2].methods[2] = 30422;
        group.m_item[2].strategys[1] = 1010;
        group.m_item[2].strategys[2] = 1020;
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 403: {
        unsigned char ch[] = {0xe4, 0xb8, 0x89, 0xe4, 0xbb, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 15721; //l0-30*2
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40402, group.m_item[n]);
        group.m_item[n].methods[1] = 10522; //45%:-180*2,buff12(1)*2
        group.m_item[n].methods[2] = 17822; //35%:-260*2,buff16(2)*2,-50*2
        group.m_item[n].strategys[0] = 404021; //4040222:1~2->2
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //[1,3]:j4+5
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(40104, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 11622; //50%,-160*5,b004+40
        group.m_item[n].strategys[0] = 401041; //2222:j1+4(*8)
        group.m_item[n].strategys[1] = 1150; //j17+20
        group.m_item[n].strategys[2] = 1130; //j4+3
//        group.m_item[n].strategys[2] = 1140; //[1,3]:j4+5
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;
    } break;

    case 404: {
        unsigned char ch[] = {0xe5, 0xb0, 0x8f, 0xe4, 0xb8, 0x89, 0xe4, 0xbb, 0x99};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 20222; //75%:maxi1,l0-25(i1)(2)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40201, group.m_item[n]);
        group.m_item[n].methods[1] = 10522; //45%:-180*2,buff12(1)*2
        group.m_item[n].methods[2] = 17822; //35%:-260*2,buff16(2)*2,-50*2
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //[1,3]:j4+5
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(40702, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;
    } break;

    case 411: {
        group.formation = 8;

        Item::getItem(10302, group.m_item[0]);
        group.m_item[0].methods[1] = 13022;
        group.m_item[0].methods[2] = 11922; //j7+45,j11+20
        group.m_item[0].strategys[0] = 103021;
        group.m_item[0].i[7] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(40202, group.m_item[1]);
        group.m_item[1].methods[1] = 13221;
        group.m_item[1].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[1].i[5] += 68;
        group.m_item[1].i[6] += 18;

        Item::getItem(40102, group.m_item[2]);
        group.m_item[2].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[2].methods[2] = 14024; //40%:i3+30,-2*180
        group.m_item[2].i[4] += 68;
        group.m_item[2].i[7] += 18;
    } break;

    case 414: {
        group.formation = 8;

        Item::getItem(10302, group.m_item[0]);
        group.m_item[0].methods[1] = 13022;
        group.m_item[0].methods[2] = 11922;
        group.m_item[0].i[7] += 68;
        group.m_item[0].i[4] += 18;

        Item::getItem(40601, group.m_item[1]);
        group.m_item[1].methods[1] = 13221;
        group.m_item[1].methods[2] = 11121;
        group.m_item[1].i[6] += 68;
        group.m_item[1].i[5] += 18;

        Item::getItem(40113, group.m_item[2]);
//        group.m_item[2].methods[1] = 10924; //40%:j0+20,-400
//        group.m_item[2].methods[2] = 14024; //40%:i3+30,-2*180
        group.m_item[2].strategys[0] = 401131; //1+1(maxi0),2224:l0-7(14)(2)
        group.m_item[2].i[4] += 68;
        group.m_item[2].i[7] += 18;
    } break;

    case 415: {
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].methods[1] = 13022; //55%:3*130,buff002(2)
        group.m_item[n].methods[2] = 11922; //j7+45,j11+20
        group.m_item[n].strategys[0] = 103021; //1+1(g1):l2-6
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
//        group.m_item[n].methods[1] = 15721; //l0-30*2
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].strategys[0] = 406011;
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(30103, group.m_item[n]);
        group.m_item[n].methods[1] = 80324; //35%:-140(50)*3,minh0:-100(50)*1
//        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180
        group.m_item[n].strategys[0] = 301031; //k0+5,j7+12
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //[1,4]j6+5
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 601: {
        group.formation = 2;

        n = 0;
        Item::getItem(20103, group.m_item[n]);
        group.m_item[n].methods[1] = 20721;
        group.m_item[n].methods[2] = 15721; //l0-30*2
        group.m_item[n].strategys[0] = 201031; //r1357:2*l0+12,r2468:2*l0-12
        group.m_item[n].strategys[1] = 1040;
        group.m_item[n].strategys[2] = 1090;
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(30102, group.m_item[n]);
        group.m_item[n].methods[1] = 16420;
        group.m_item[n].methods[2] = 12921;
        group.m_item[n].strategys[0] = 301026; //k2+6,5*actml:2*ex(1)
        group.m_item[n].strategys[1] = 1100;
        group.m_item[n].strategys[2] = 1020;
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(20501, group.m_item[n]);
#ifdef S6
        group.m_item[n].kind = 0;
#endif
        group.m_item[n].methods[1] = 20820;
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].strategys[0] = 1070;
        group.m_item[n].strategys[1] = 1080;
        group.m_item[n].strategys[2] = 205011; //f0=2:maxi+2%(i0),l0-2%(i1)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;
    } break;

    case 612: {
        group.formation = 8;

#ifdef S6
        group.m_item[0].kind = 2;
#endif
        Item::getItem(10302, group.m_item[0]);
        group.m_item[0].methods[1] = 13022;
        group.m_item[0].methods[2] = 11922;
        group.m_item[0].i[7] += 68;
        group.m_item[0].i[4] += 18;

        Item::getItem(40601, group.m_item[1]);
        group.m_item[1].methods[1] = 50121;
        group.m_item[1].methods[2] = 11121;
        group.m_item[1].i[6] += 50;
        group.m_item[1].i[5] += 18;

        Item::getItem(40102, group.m_item[2]);
        group.m_item[2].methods[1] = 10924;
        group.m_item[2].methods[2] = 14024;
        group.m_item[2].i[4] += 68;
        group.m_item[2].i[5] += 18;
    } break;

    case 613: {
        group.formation = 8;

#ifdef S6
        group.m_item[0].kind = 2;
#endif
        Item::getItem(10302, group.m_item[0]);
        group.m_item[0].methods[1] = 13022;
        group.m_item[0].methods[2] = 11922;
        group.m_item[0].i[7] += 68;
        group.m_item[0].i[4] += 18;

        Item::getItem(40601, group.m_item[1]);
        group.m_item[1].methods[1] = 50121;
        group.m_item[1].methods[2] = 11121;
        group.m_item[1].i[6] += 68;
        group.m_item[1].i[5] += 18;

        Item::getItem(10109, group.m_item[2]);
        group.m_item[2].methods[1] = 10924;
        group.m_item[2].methods[2] = 14024;
        group.m_item[2].i[4] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 701: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa7, 0xe6, 0xb1, 0x89, 0xe7, 0x9b, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 5;

        Item::getItem(40602, group.m_item[0]);
        group.m_item[0].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[0].methods[2] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[0].strategys[0] = 406021; //f0=4,r123:l0-5(i2)
        group.m_item[0].i[6] += 68;
        group.m_item[0].i[5] += 18;

        Item::getItem(40701, group.m_item[1]);
        group.m_item[1].methods[1] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[1].methods[2] = 12620; //50%,+2*50
        group.m_item[1].strategys[0] = 407011; //l1-7,r1,60%(i2):2*buff12(1)
        group.m_item[1].i[6] += 68;
        group.m_item[1].i[7] += 18;

        Item::getItem(40703, group.m_item[2]);
        group.m_item[2].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[2].methods[2] = 20520; //j5+6(i1),221:k0+8
        group.m_item[2].strategys[0] = 407031; //r2:k0+8(i1+i2)
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 702: {
        unsigned char ch[] = {0xe4, 0xb8, 0xbe, 0xe8, 0x8d, 0x90, 0xe5, 0xbc, 0xa0, 0xe6, 0xa2, 0x81};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 2;

        Item::getItem(40401, group.m_item[0]);
        group.m_item[0].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[0].methods[2] = 20222; //75%:maxi1,l0-25(i1)(2)
        group.m_item[0].i[5] += 68;
        group.m_item[0].i[6] += 18;

        Item::getItem(40114, group.m_item[1]);
        group.m_item[1].methods[1] = 13022; //55%:3*130,buff002(2)
        group.m_item[1].methods[2] = 50322; //45%:3*150,75%:buff015(2)
        group.m_item[1].strategys[0] = 401141; //4011422:j9+8,j11+8,r1:1*buff012(1)
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //[1,3]:j4+5
#ifdef S7
        group.m_item[1].strategys[3] = 401037; //buff005:k0+15
        group.m_item[1].strategys[4] = 401038; //r1-3:maxi1,j4+30,k4-20,j17+20
#endif
        group.m_item[1].i[7] += 68;
        group.m_item[1].i[4] += 18;

        Item::getItem(40702, group.m_item[2]);
        group.m_item[2].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[2].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 703: {
        unsigned char ch[] = {0xe8, 0x8d, 0x80, 0xe7, 0x94, 0xb0, 0xe5, 0xbc, 0x82};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 4;

        n = 0;
        Item::getItem(10108, group.m_item[0]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 15721; //l0-30*2
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40201, group.m_item[1]);
        group.m_item[n].methods[1] = 10522; //45%:2*buff012(1)
        group.m_item[n].methods[2] = 71922; //j7+45,j12+20
        group.m_item[n].strategys[1] = 1050;
        group.m_item[n].strategys[2] = 1060;
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(10601, group.m_item[2]);
        group.m_item[n].methods[1] = 70124; //75%:-40(r+12)*3,50%(i1):again
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 704: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8c, 0xe5, 0x87, 0x8f, 0xe7, 0x8e, 0x8b, 0xe5, 0xbc, 0x82};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 3;

        n = 0;
        Item::getItem(20501, group.m_item[0]);
        group.m_item[n].methods[0] = 2050121; //223,1~3:-2*40(5*9)*2,3,minh0:tb
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].strategys[0] = 1070;
        group.m_item[n].strategys[1] = 1080;
        group.m_item[n].strategys[2] = 205011; //f0=2:maxi+2%(i0),l0-2%(i1)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(30301, group.m_item[1]);
        group.m_item[n].methods[0] = 3030120; //h0>10%,80%(i2):-50%(i2),100%(-10%)
        group.m_item[n].methods[1] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 30221; //2221:+90(i1,i2)*2
        group.m_item[n].strategys[0] = 303011; //1+1(g1)*l1-6
        group.m_item[n].strategys[3] = 7030; //21:+5%,maxi0+3%,maxi1+3%
        group.m_item[n].strategys[4] = 303016; //acted,50%(i2):+40
        group.m_item[n].strategys[5] = 303018; //h0>50%:k0+15(i2)
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(40111, group.m_item[2]);
        group.m_item[n].methods[0] = 4011121; //2221:maxi0-mini0=75*2,maxi1-mini1=75*2,maxi3-mini3=75*2
        group.m_item[n].methods[1] = 11222; //50%:maxi0-80*3,maxi1-80*3
        group.m_item[n].methods[2] = 14521; //221:k0+7%*2
        group.m_item[n].strategys[0] = 401111; //f0:faction=10%
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;
    } break;

    case 811: {
        unsigned char ch[] = {0xe8, 0x8d, 0x80, 0xe7, 0x94, 0xb0, 0xe5, 0xbc, 0x82};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 11922; //j7+45,j11+20
//        Item::getItem(10108, group.m_item[0]);
//        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
//        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(10801, group.m_item[n]);
        group.m_item[n].methods[1] = 15721; //l0-30*2
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(10301, group.m_item[n]);
        group.m_item[n].methods[1] = 70124; //75%:-40(r+12)*3,50%(i1):again
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 821: {
        unsigned char ch[] = {0xe4, 0xb8, 0x80, 0xe5, 0xad, 0x97, 0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 1;

        n = 0;
        Item::getItem(20101, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 11222; //50%:maxi0-80*3,maxi1-80*3
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 822: {
        unsigned char ch[] = {0xe6, 0x96, 0xb0, 0xe5, 0x8c, 0x97, 0xe4, 0xbc, 0x90};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 6;

        n = 0;
        Item::getItem(20104, group.m_item[n]);
        group.m_item[n].methods[1] = 20120; //j0+20,2*100
        group.m_item[n].methods[2] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 823: {
        unsigned char ch[] = {0xe6, 0x96, 0xb0, 0xe5, 0x8c, 0x97, 0xe4, 0xbc, 0x90};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 6;

        n = 0;
        Item::getItem(20104, group.m_item[n]);
        group.m_item[n].methods[1] = 14220; //j11+30,2223:k1+6*6,2223*3:-200*1
        group.m_item[n].methods[2] = 30120; //j8+50(i0),2223:l1-5(2)*6
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].strategys[1] = 1420; //maxi0:j8+8
        group.m_item[n].strategys[2] = 1430; //g4≠:l0-5
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 824: {
        unsigned char ch[] = {0xe9, 0x9b, 0x81, 0xe5, 0xbd, 0xa2, 0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 3;

        n = 0;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].i[5] += 98;
        group.m_item[n].i[7] += 18;

        n = 1;
        Item::getItem(20101, group.m_item[n]);
        group.m_item[n].methods[1] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 12620; //50%,+2*50
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[5] += 78;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 78;
        group.m_item[n].i[6] += 18;
    } break;

    case 825: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8d, 0xe5, 0x87, 0xbb, 0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 5;

        n = 0;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 30120; //j8+50(i0),2223:l1-5(2)*6
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[4] += 18;

        n = 2;
        Item::getItem(20101, group.m_item[n]);
        group.m_item[n].methods[1] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 14321; //acted,60%,maxi0:i0+7(8),maxi1:i1+7(8),maxi2:i2+7(8)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;
    } break;

    case 841: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa6, 0xe7, 0x94, 0xb0, 0xe5, 0xae, 0x81};
        Logger::H().printname(ch, sizeof(ch), 401);
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 80222; //100%:<4:+110*2,>4:-160*2
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40201, group.m_item[n]);
        group.m_item[n].methods[1] = 10822; //45%:i-30(i1)*2(2)
        group.m_item[n].methods[2] = 50322; //45%:3*150,75%:buff015(2)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(40702, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[n].strategys[1] = 1010; //k2+6
        group.m_item[n].strategys[2] = 1020; //act:k2+1(8)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;
    } break;

    case 851: {
        unsigned char ch[] = {0xe5, 0xb7, 0xa6, 0xe6, 0x98, 0xad, 0xe9, 0x99, 0x86};
        Logger::H().printname(ch, sizeof(ch), 401);
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 80222; //100%:<4:+110*2,>4:-160*2
        group.m_item[n].strategys[0] = 404011;
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(30801, group.m_item[n]);
        group.m_item[n].methods[1] = 12322; //45%:-80*3,buff011*3,-80*3
        group.m_item[n].methods[2] = 10822; //45%:i-30(i1)*2(2)
//        group.m_item[n].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[n].strategys[0] = 308011; //3080122:55->65
//        group.m_item[n].strategys[1] = 1050;
//        group.m_item[n].strategys[2] = 1060;
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(30201, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 20520; //j5+6(i1),221:k0+8
        group.m_item[n].strategys[0] = 302011; //r123,buff1,50%:buff15(2)
        group.m_item[n].strategys[1] = 1010;
        group.m_item[n].strategys[2] = 1020;
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 852: {
        unsigned char ch[] = {0xe8, 0xaf, 0xb8, 0xe9, 0xa9, 0xac, 0xe9, 0xa9, 0xac};
        Logger::H().printname(ch, sizeof(ch), 401);
        group.formation = 4;

        n = 0;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 14621; //221:buff15(2),223,buff15:-110
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(20201, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14720; //k0+35,j13+16
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //[1,4]j6+5
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 853: {
        unsigned char ch[] = {0xe5, 0x8f, 0x8d, 0xe5, 0x87, 0xbb, 0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 8;

        n = 0;
        Item::getItem(20105, group.m_item[n]);
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 20120; //2225:j0+20,2*100
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[7] += 18;

        n = 1;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[1] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 11222; //50%:maxi0-80*3,maxi1-80*3
        group.m_item[n].strategys[1] = 1280;
        group.m_item[n].strategys[2] = 1290;
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;
    } break;

    case 899: {
        unsigned char ch[] = {0xe7, 0xa5, 0x9e, 0xe9, 0x94, 0x8b, 0xe5, 0xa5, 0xb3, 0xe5, 0x84, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 4;

        n = 0;
        Item::getItem(10101, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 15721; //l0-30*2
        group.m_item[n].strategys[0] = 101012; //maxi2:j8+10,maxi0:k3+10
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(10108, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 30221; //2221:+90(i1,i2)*2
        group.m_item[n].strategys[0] = 101081; //maxi:j2+6,j3+10
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 2;
        Item::getItem(10811, group.m_item[n]);
        group.m_item[n].f[0] = 1;
        group.m_item[n].g[4] = 1;
        group.m_item[n].i[0] = 70;
        group.m_item[n].i[1] = 383;
        group.m_item[n].i[2] = 167;
        group.m_item[n].i[3] = 170;
        group.m_item[n].methods[0] = 88324; //70%:zb*8,-80*2,j7+10
        group.m_item[n].methods[1] = 70124; //75%:-40(r+12)*3,50%(i1):again
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[n].strategys[0] = 301031; //k0+5,j7+12
    } break;

    case 901: {
        group.formation = 8;

        n = 0;
        Item::getItem(10901, group.m_item[n]);
        group.m_item[n].methods[1] = 12620; //50%,+2*50
        group.m_item[n].methods[2] = 30221; //2221:+90(i1,i2)*2
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(10105, group.m_item[n]);
        group.m_item[n].methods[1] = 14521; //221:k0+7%*2
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(10108, group.m_item[n]);
        group.m_item[n].methods[1] = 90121; //r123:!2223,r4:-3*340,r6:-3*380,r8:3*-420
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;
    } break;

    case 902: {
        group.formation = 8;

        n = 0;
        Item::getItem(30901, group.m_item[n]);
        group.m_item[n].methods[1] = 90222; //75%,1+1:l0-20(1)(i3),g1=0:+120(i2+i3)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].strategys[0] = 103021; //1+1(g1):l2-6
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[0] = 4060121; //r123:k5+20(i2),2225,50%(i2):2223
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].strategys[0] = 406011; //g4=2:k0+5,i3+5%
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(10911, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
//        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].methods[2] = 90324; //50%:-2*110,60%:1*ex(1)
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //r1234:j6+5
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 903: {
        unsigned char ch[] = {0xe5, 0xa4, 0xa7, 0xe6, 0xb1, 0x89, 0xe7, 0x9b, 0xbe};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 5;

        Item::getItem(40602, group.m_item[0]);
        group.m_item[0].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[0].methods[2] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[0].strategys[0] = 406021; //f0=4,r123:l0-5(i2)
        group.m_item[0].i[6] += 68;
        group.m_item[0].i[5] += 18;

        Item::getItem(40701, group.m_item[1]);
        group.m_item[1].methods[1] = 40220; //221:k0+10/l0-20/hlo+200
        group.m_item[1].methods[2] = 12620; //50%,+2*50
        group.m_item[1].strategys[0] = 407011; //l1-7,r1,60%(i2):2*buff12(1)
        group.m_item[1].i[6] += 68;
        group.m_item[1].i[7] += 18;

        Item::getItem(40901, group.m_item[2]);
        group.m_item[2].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[2].methods[2] = 20520; //j5+6(i1),221:k0+8
        group.m_item[2].strategys[0] = 407031; //r2:k0+8(i1+i2)
        group.m_item[2].i[5] += 68;
        group.m_item[2].i[6] += 18;
    } break;

    case 904: {
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
//        group.m_item[n].g[4] = 2;
        group.m_item[n].methods[1] = 11922; //70%:j7+45,j11+20    50322; //45%:3*150,75%:buff15(2)
        group.m_item[n].methods[2] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[7] += 90;
        group.m_item[n].i[4] += 20;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30    50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].strategys[1] = 1440; //actbr:l0+1(4)
        group.m_item[n].strategys[2] = 1540; //2*k1+3.5
        group.m_item[n].i[6] += 120;
        group.m_item[n].i[7] += 20;

        n = 2;
        Item::getItem(10109, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].strategys[1] = 1200; //r1234:k1+8
        group.m_item[n].strategys[2] = 1210; //actbr:k1+1.8(5)
        group.m_item[n].i[4] += 87;
        group.m_item[n].i[5] += 3;
        group.m_item[n].i[7] += 20;
    } break;

    case 905: {
        group.formation = 2;

        n = 0;
        Item::getItem(10113, group.m_item[n]);
        group.m_item[n].methods[1] = 70322; //50%:-220*2,75%:buff13(1)
        group.m_item[n].methods[2] = 14120; //ex:+40,l0-10*4(2)
        group.m_item[n].strategys[1] = 1500; //r1:1+1*buff13
        group.m_item[n].i[6] += 80;
        group.m_item[n].i[5] += 20;

        n = 1;
        Item::getItem(10105, group.m_item[n]);
        group.m_item[n].methods[1] = 14521; //221:k0+7%*2
        group.m_item[n].methods[2] = 30321; //80%(-10%):buff102*3
        group.m_item[n].strategys[1] = 1500; //r1:1+1*buff13
        group.m_item[n].i[5] += 80;
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(30105, group.m_item[n]);
        group.m_item[n].methods[1] = 90121; //r123:!2223,r4:-3*340,r6:-3*380,r8:3*-420
        group.m_item[n].methods[2] = 14024; //35%,-f3:-140;r2468,minh0:-100;!35%:k+50%
        group.m_item[n].i[4] += 80;
        group.m_item[n].i[7] += 20;
    } break;

    case 911: {
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].g[4] = 2;
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
//        group.m_item[n].methods[1] = 90222; //75%,1+1:l0-20(1)(i3),g1=0:+120(i2+i3)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].i[7] += 70;
        group.m_item[n].i[4] += 20;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].i[6] += 120;
        group.m_item[n].i[5] += 20;

        n = 2;
        Item::getItem(10911, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)    90324; //50%:-2*110,60%:1*ex(1)
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //r1234:j6+5
        group.m_item[n].i[4] += 70;
        group.m_item[n].i[7] += 20;
    } break;

    case 912: {
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].g[4] = 0;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 80222; //100%:<4:+110*2,>4:-160*2
        group.m_item[n].strategys[0] = 404011; //r123:3*l1-5
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[6] += 18;

        n = 1;
        Item::getItem(40913, group.m_item[n]);
        group.m_item[n].methods[0] = 4091321; //r123,f2:j0+12,j2+12,j4+15(i3),2222,30%(i3):2222
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 50322; //45%:3*150,75%:buff015(2)
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //r123:j4+5
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;

        n = 2;
        Item::getItem(10912, group.m_item[n]);
        group.m_item[n].methods[1] = 20120; //2225:j0+20,2*100
        group.m_item[n].methods[2] = 12122; //50%:j0+20(2),-3*150
        group.m_item[n].strategys[1] = 1010; //k2+6
        group.m_item[n].strategys[2] = 1020; //act:k2+1(8)
        group.m_item[n].i[4] += 68;
        group.m_item[n].i[7] += 18;
    } break;

    case 913: {
        group.formation = 5;

        n = 0;
        Item::getItem(10101, group.m_item[n]);
        group.m_item[n].g[4] = 3;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].strategys[0] = 101012; //maxi2:j8+10,maxi0:k3+10
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1540; //2*k1+3.5
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(10103, group.m_item[n]);
        group.m_item[n].methods[1] = 10320; //2223,60%:-2*100%,i0>:-30
        group.m_item[n].methods[2] = 14220; //j11+30,2223:k1+6*6,2223*3:-200*1    14720; //k0+35,j13+16
        group.m_item[n].strategys[1] = 1670; //k3+12
        group.m_item[n].strategys[2] = 1680; //r1234:k3+15
        group.m_item[n].i[4] += 58;
        group.m_item[n].i[6] += 28;

        n = 2;
        Item::getItem(10913, group.m_item[n]);
        group.m_item[n].methods[1] = 14321; //acted,60%,maxi0:i0+7(8),maxi1:i1+7(8),maxi2:i2+7(8)
        group.m_item[n].methods[2] = 13221; //g1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;
    } break;

    case 914: {
        group.formation = 2;

        n = 0;
        Item::getItem(10914, group.m_item[n]);
        group.m_item[n].methods[1] = 12620; //50%,+2*50
        group.m_item[n].methods[2] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].i[6] += 70;
        group.m_item[n].i[5] += 20;

        n = 1;
        Item::getItem(10101, group.m_item[n]);
        group.m_item[n].g[4] = 1;
        group.m_item[n].methods[1] = 14521; //221:k0+7%*2
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(10301, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 11622; //50%,-160*5,b004+40
        group.m_item[n].i[6] += 70;
        group.m_item[n].i[5] += 20;
        group.m_item[n].i[7] += 5;
    } break;

    case 921: {
        group.formation = 7;

        n = 0;
        Item::getItem(20911, group.m_item[n]);
        group.m_item[n].methods[1] = 80324; //35%:-140(50)*3,minh0:-100(50)*1
        group.m_item[n].methods[2] = 90324; //50%:-2*110,60%:1*ex(1)
        group.m_item[n].i[4] += 70;
        group.m_item[n].i[7] += 20;

        n = 1;
        Item::getItem(10109, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].strategys[1] = 1200; //r1234:k1+8
        group.m_item[n].strategys[2] = 1210; //actbr:k1+1.8(5)
        group.m_item[n].i[4] += 90;
        group.m_item[n].i[7] += 20;

        n = 2;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].i[6] += 120;
        group.m_item[n].i[5] += 20;
    } break;

    case 922: {
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].g[4] = 0;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 12722; //55%,minh0:ex-3,+260
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(40913, group.m_item[n]);
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 10822; //45%:i-30(i1)*2(2)
        group.m_item[n].i[7] += 70;
        group.m_item[n].i[4] += 20;

        n = 2;
        Item::getItem(20912, group.m_item[n]);
        group.m_item[n].methods[1] = 14720; //k0+35,j13+16
        group.m_item[n].methods[2] = 12122; //50%:j0+20(2),-3*150
        group.m_item[n].i[4] += 70;
        group.m_item[n].i[7] += 20;
    } break;

    case 931: {
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].g[4] = 2;
        group.m_item[n].methods[1] = 11922; //70%:j7+45,j11+20    50322; //45%:3*150,75%:buff15(2)
        group.m_item[n].methods[2] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[7] += 90;
        group.m_item[n].i[4] += 20;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[1] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30    50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].strategys[1] = 1440; //actbr:l0+1(4)
        group.m_item[n].strategys[2] = 1540; //2*k1+3.5
        group.m_item[n].i[6] += 120;
        group.m_item[n].i[7] += 20;

        n = 2;
        Item::getItem(30911, group.m_item[n]);
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].i[4] += 90;
        group.m_item[n].i[7] += 20;
    } break;

    case 932: {
        group.formation = 5;

        n = 0;
        Item::getItem(30106, group.m_item[n]);
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 13221; //j1=0:l1-20,+80,maxi0,50%:-100
        group.m_item[n].strategys[1] = 1410; //maxi0:j8+8
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(30912, group.m_item[n]);
        group.m_item[n].methods[1] = 30120; //j8+50(i0),2223:l1-5(2)*6
        group.m_item[n].methods[2] = 20820; //i0i1+16(*8)
        group.m_item[n].i[4] += 88;
        group.m_item[n].i[7] += 18;

        n = 2;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].g[4] = 3;
        group.m_item[n].methods[0] = 2080121; //l2-10/13(i1),formaiton+70%,011:l0-12(i1),g3=85,001:mini2:k0+20,2221:-200*1,000:223:maxi1,-60(hlo)*3
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 14321; //acted,60%,maxi0:i0+7(8),maxi1:i1+7(8),maxi2:i2+7(8)
        group.m_item[n].strategys[0] = 208011; //r1234:k0+3(i1),r5678:l0-3(i1)
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].i[5] += 78;
        group.m_item[n].i[6] += 18;

    } break;

    case 941: {
        unsigned char ch[] = {0xe9, 0x9b, 0x81, 0xe5, 0xbd, 0xa2, 0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab};
        Logger::H().printname(ch, sizeof(ch), id);
        group.formation = 3;

        n = 0;
        Item::getItem(20501, group.m_item[n]);
        group.m_item[n].g[4] = 1;
        group.m_item[n].methods[0] = 2050121; //223,1~3:-2*40(5*9)*2,3,minh0:tb
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 80121; //221::-90(hlo)*2,223:+50(g1=0)
        group.m_item[n].strategys[0] = 1070; //i0+i1*12%
        group.m_item[n].strategys[1] = 1080; //i1+i0*12%
        group.m_item[n].strategys[2] = 205011; //f0=2:maxi+2%(i0),l0-2%(i1)
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[7] += 18;

        n = 1;
        Item::getItem(40911, group.m_item[n]);
        group.m_item[n].methods[0] = 4091121; //maxi0-mini0:-75-75,maxi1-mini1:-75-75,maxi3-mini3:-75-75,minh0:+act*20%(i2)
        group.m_item[n].methods[1] = 60221; //221+60%(+10):2*l0-20(i2)
        group.m_item[n].methods[2] = 12620; //50%,+2*50
        group.m_item[n].strategys[1] = 1050; //maxi0:k0+5
        group.m_item[n].strategys[2] = 1060; //maxi1:k0+5
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].methods[0] = 2080121; //l2-10/13(i1),formaiton+70%,011:l0-12(i1),g3=85,001:mini2:k0+20,2221:-200*1,000:223:maxi1,-60(hlo)*3
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].strategys[0] = 208011; //r1234:k0+3(i1),r5678:l0-3(i1)
        group.m_item[n].i[5] += 63;
        group.m_item[n].i[6] += 25;
    } break;

    case 942: {
        group.formation = 3;

        n = 0;
        Item::getItem(40702, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[n].strategys[1] = 1010; //k2+6
        group.m_item[n].strategys[2] = 1020; //act:k2+1(8)
        group.m_item[n].i[5] += 65;
        group.m_item[n].i[7] += 25;

        n = 1;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].g[4] = 0;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 90222; //75%,1+1:l0-20(1)(i3),g1=0:+120(i2+i3)
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(40912, group.m_item[n]);
        group.m_item[n].methods[1] = 20222; //75%:maxi1,l0-25(i1)(2)
        group.m_item[n].methods[2] = 10822; //45%:i-30(i1)*2(2)
        group.m_item[n].i[6] += 70;
        group.m_item[n].i[5] += 20;
    } break;

    case 943: {
        group.formation = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].g[4] = 0;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 12722; //55%,minh0:ex-3,+260
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(40913, group.m_item[n]);
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 30522; //50%:3*buff001(2),3*90*2
        group.m_item[n].i[7] += 70;
        group.m_item[n].i[4] += 20;

        n = 2;
        Item::getItem(30201, group.m_item[n]);
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 70222; //55%:-140*3,+buff005(2):-16k0(1)
        group.m_item[n].strategys[1] = 1010; //k2+6
        group.m_item[n].strategys[2] = 1020; //act:k2+1(8)
        group.m_item[n].i[5] += 70;
        group.m_item[n].i[7] += 20;
    } break;

    case 944: {
        group.formation = 8;

        n = 0;
        Item::getItem(10302, group.m_item[n]);
        group.m_item[n].g[4] = 2;
        group.m_item[n].methods[0] = 1030221; //1+1(g1):i3+30,k0+14(i3),l0-14(i3),r12,g1=0:+30%
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].strategys[0] = 103021; //1+1(g1):l2-6
        group.m_item[n].i[7] += 68;
        group.m_item[n].i[4] += 18;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].methods[0] = 4060121; //r123:k5+20(i2),2225,50%(i2):2223
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11121; //buff011,buff111,j7+30
        group.m_item[n].strategys[0] = 406011; //g4=2:k0+5,i3+5%
        group.m_item[n].i[6] += 68;
        group.m_item[n].i[5] += 18;

        n = 2;
        Item::getItem(40914, group.m_item[n]);
        group.m_item[n].methods[0] = 4091424; //50%:i0i1±16(i3)(2)(*2),-2*120((*2)(i3-),g4=1:-20%
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)  50220; //2223:k2+7(5),50%:2223
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223  14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].strategys[1] = 1110; //j6+3.5
        group.m_item[n].strategys[2] = 1120; //r1234:j6+5
        group.m_item[n].i[7] += 60;
        group.m_item[n].i[5] += 26;
    } break;

    case 1001: {
        group.formation = 3;
        group.star = 5;

        n = 0;
        Item::getItem(20201, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14720; //k0+35,j13+16
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(40601, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].i[6] += 5 + 10 * (5 + group.star);
        group.m_item[n].i[7] += 35;

        n = 2;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].methods[2] = 11121; //buff11,buff111,j7+30
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;
    } break;

    case 1010: {
        group.formation = 3;
        group.star = 2;

        n = 0;
        Item::getItem(10301, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 90121; //r123:!2223,r4:-3*340,r6:-3*380,r8:3*-420
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(10901, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 101021; //3*f0=1,g1=1,f1:hb;r1234,-f3,2223:k0±3(*n);r4567,act,minh0:+p*15%(i1)
        group.m_item[n].methods[2] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
//        Item::getItem(10101, group.m_item[n]);
        Item::getItem(11001, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 50121; //maxi1:k2-25(i2),maxi0:k1-25(i2)    14521; //221:k0+7%*2
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;
    } break;

    case 1020: {
        group.formation = 5;
        group.star = 2;

        n = 0;
        Item::getItem(20101, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 102021; //3*f0=2,f3,2222,-f3:buff2(2);f3,buff1-99:l0-8(1)(*2);f3,ex,25%,f3:k0+5(*5)
        group.m_item[n].methods[2] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(21001, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 14120; //ex:+40(*10),l0-10(*4)(2)
        group.m_item[n].methods[2] = 100120; //acted,55%:i0+5(i0)(*15),buff2(2);buff2:l0+8(2)(*2);max=4/r
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(20106, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 13022; //55%:-130*3,buff2(2)
        group.m_item[n].methods[2] = 15721; //f1+1:l0-29.9
        group.m_item[n].i[7] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[4] += 20;
    } break;

    case 1021: {
        group.formation = 3;
        group.star = 3;

        n = 0;
        Item::getItem(20105, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 20820; //i0i1+16(*8)
        group.m_item[n].methods[2] = 20120; //2225:j0+20,2*100
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 1;
        Item::getItem(20801, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(20106, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 102021; //3*f0=2,f3,2222,-f3:buff2(2);f3,buff1-99:l0-8(1)(*2);f3,ex,25%,f3:k0+5(*5)
        group.m_item[n].methods[2] = 11222; //50%:maxi0-80*3,maxi1-80*3
        group.m_item[n].i[7] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[5] += 20;
    } break;

    case 1030: {
        group.formation = 3;
        group.star = 2;

        n = 0;
        Item::getItem(30201, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 30422; //50%:i1±20,i2±20,-140*2
        group.m_item[n].methods[2] = 20520; //j5+6(i1),221:k0+8
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //r123:j4+5
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[7] += 20;

        n = 1;
        Item::getItem(10101, group.m_item[n]);
//        Item::getItem(30801, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].f[0] = 3;
        group.m_item[n].methods[1] = 40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 10822; //45%:i-30(i1)(*2)(2)
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;

        n = 2;
        Item::getItem(30101, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 90222; //75%,1+1:l0-20(1)(i3),g1=0:+120(i2+i3)
        group.m_item[n].methods[2] = 103022; //65%,3*f0=3,-f3:buff1(2);buff1:i1-20(i3)(2)(*2);maxi1,-f2:-70
        group.m_item[n].strategys[1] = 1130; //j4+3
        group.m_item[n].strategys[2] = 1140; //r123:j4+5
        group.m_item[n].i[7] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[5] += 20;
    } break;

    case 1040: {
        group.formation = 2;
        group.star = 2;

        n = 0;
        Item::getItem(40401, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 100220; //r123,acted,60%:i0-50(i1)(1)(*3),i1-50(i2)(1)(*3)    40121; //l0-25*2,r4:+360(i1)*3
        group.m_item[n].methods[2] = 104021; //3*f0=4,maxi0:zf;2224:k0+5(*10),minh0+80(i1),3/r;2222:k5+10(*5),j6+5(*5)
        group.m_item[n].i[5] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 10;
        group.m_item[n].i[7] += 10;

        n = 1;
        Item::getItem(40201, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 10822; //45%:i-30(i1)*2(2)
        group.m_item[n].methods[2] = 11922; //70%:j7+45,j11+20
        group.m_item[n].i[7] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[5] += 20;

        n = 2;
        Item::getItem(40102, group.m_item[n]);
        group.m_item[n].star = group.star;
        group.m_item[n].methods[1] = 10924; //40%:j0+20,-400
        group.m_item[n].methods[2] = 14024; //40%:i3+30,-2*180(i3)
        group.m_item[n].i[4] += 20 + 10 * (5 + group.star);
        group.m_item[n].i[6] += 20;
    } break;

    case 9999: {
        QVector<int> items, methods, strategys;
        for (int i = 0; i < 50000; ++i)
        {
            if (Item::getItem(i, group.m_item[0]))
            {
                items.append(i);
            }
        }
        for (int m = 0; m < 5000000; ++m)
        {
            QSharedPointer<Method> method = Method::getMethod(m);
            if (!method.isNull() && method->id > 0)
            {
                methods.append(m);
            }
        }
        for (int s = 9000; s < 10000; ++s)
        {
            QSharedPointer<Strategy> strategy = Strategy::getStrategy(s);
            if (!strategy.isNull() && strategy->id > 0)
            {
                strategys.append(s);
            }
        }
        QVector<int> ii, mm, ss;
        mm.append(2223);
        int i, m, s;
        group.formation = qrand() % 8 + 1;
        for (int n = 0; n < 3; ++n)
        {
            do { i = qrand() % items.size(); i = items.at(i); } while (ii.contains(i)); ii.append(i);
            Item::getItem(i, group.m_item[n]);
            do { m = qrand() % methods.size(); m = methods.at(m); } while (mm.contains(m)); mm.append(m);
            group.m_item[n].methods[1] = m;
            do { m = qrand() % methods.size(); m = methods.at(m); } while (mm.contains(m)); mm.append(m);
            group.m_item[n].methods[2] = m;
            do { s = qrand() % strategys.size(); s = strategys.at(s); } while (ss.contains(s)); ss.append(s);
            group.m_item[n].strategys[1] = s;
            do { s = qrand() % strategys.size(); s = strategys.at(s); } while (ss.contains(s)); ss.append(s);
            group.m_item[n].strategys[2] = s;
            group.m_item[n].i[4] += 68;
            group.m_item[n].i[5] += 68;
            group.m_item[n].i[6] += 68;
            group.m_item[n].i[7] += 68;
            ss.clear();
        }
        n = 2;
        Item::getItem(10601, group.m_item[2]);
        group.m_item[n].methods[1] = 70124; //75%:-40(r+12)*3,50%(i1):again
        group.m_item[n].methods[2] = 50220; //2223:k2+7(5),50%:2223
        group.m_item[n].i[5] += 68;
        group.m_item[n].i[5] += 18;
        group.m_item[n].i[7] += 18;
    } break;
#endif
        return false;
    }

    Name::groupName(id, &group);

    int size = sizeof(Group);
    char* buf = new char[size];
    memcpy(buf, &(group), size);
    QFile f(QString::asprintf("./bin/%d.bin", id));
    if (f.open(QIODevice::WriteOnly))
    {
        f.write(buf, size);
    }
    f.close();
    return true;
}

bool Group::getGroupF(int id, Group& group)
{
    int size = sizeof(Group);
    char* buf = new char[size];
    QFile f(QString::asprintf("./bin/%d.bin", id));
    if (!f.open(QIODevice::ReadOnly))
    {
        return false;
    }
    f.read(buf, size);
    f.close();
    memcpy(&group, buf, size);
    return true;
}

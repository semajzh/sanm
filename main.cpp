#include <QCoreApplication>
#include "dispatcher.h"
#define S6
#include <QMap>
#include <QDateTime>
#if 1
#include "log/logger.h"
#include "item.h"
#include "group.h"
#include "strategy/strategy.h"
#include "method/method.h"
#include "relation/relation.h"
#endif


//unsigned short CalulateMinutes(unsigned int const curhour, unsigned int const curmin, unsigned int const sethour, unsigned int const setmin)
//{
//    unsigned int result = 0U;

//    if(curhour < sethour)
//    {
//        result = sethour - curhour;
//    }
//    else
//    {
//        result = (24 - curhour) + (sethour);
//    }

//    result *= 60; /* parasoft-suppress MISRA2008-0_1_6-2 "Used in alternate conditions" */
//    if(curmin < setmin)
//    {
//        result = result + (setmin-curmin);
//    }
//    else
//    {
//        result = result + (60 - curmin) + (setmin);  /* parasoft-suppress MISRA2008-0_1_6-2 "Used in alternate conditions" */
//    }

//    return static_cast<unsigned short>(result);
//}

#include <QFile>
#include <QTextStream>
void autoCoding(const QStringList& list)
{
    for (const QString& str : list)
    {
        if (str.contains("method"))
        {
            QStringList info = str.split(',');
            QString id = info.at(1);
            QString name = info.at(2);
            int nid = id.toUInt();
            bool zb = info.size() > 3 && info.at(3).contains("zb");
            bool nb = info.size() > 3 && info.at(3).contains("nb");

            // method.cpp
            {
                QFile fin("E:/Qt/QtProjects/san/method/method.cpp");
                QFile fout("E:/Qt/QtProjects/san/method/method.cpp.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = (id.length() < 7) ? "insert include" : "insert item include " + id.left(1);
                    QString key2 = (id.length() < 7) ? "insert case" : "insert item case " + id.left(1);
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%07d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                         #include "method4130220.h"
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("#include \"method%07d.h\"\r\n", nid);
                        }
//                        case 4130220: {
//                            unsigned char ch[] = {0xe9, 0xa9, 0xb1, 0xe5, 0x85, 0xbd, 0xe5, 0xbe, 0xa1, 0xe8, 0xb1, 0xa1};
//                            Logger::H().printname(ch, sizeof(ch), id);
//                            method = QSharedPointer<Method4130220>::create();
//                        } break;
                        if (line.contains(key2))
                        {
                            tsout << QString::asprintf("    case %7d: {\r\n", nid);
                            QByteArray ba = name.toUtf8();
                            QString str;
                            for (int i = 0; i < ba.size(); ++i)
                            {
                                str += QString::asprintf("0x%02x, ", (unsigned char)ba.at(i));
                            }
                            str.resize(str.length() - 2);
                            tsout << "        unsigned char ch[] = {" << str << "};\r\n";
                            tsout << "        Logger::H().printname(ch, sizeof(ch), id);\r\n";
                            tsout << QString::asprintf("        method = QSharedPointer<Method%07d>::create();\r\n", nid);
                            tsout << "    } break;\r\n";
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/method/method.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/method/method.cpp", "E:/Qt/QtProjects/san/method/method.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/method/method.cpp.new", "E:/Qt/QtProjects/san/method/method.cpp");
                    }
                }
            }

            // name.cpp
            {
                QFile fin("E:/Qt/QtProjects/san/ui/name.cpp");
                QFile fout("E:/Qt/QtProjects/san/ui/name.cpp.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = (id.length() < 7) ? "insert method" : "insert item method " + id.left(1);
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%07d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                        case 4130220: {
//                            unsigned char ch[] = {0xe9, 0xa9, 0xb1, 0xe5, 0x85, 0xbd, 0xe5, 0xbe, 0xa1, 0xe8, 0xb1, 0xa1};
//                            memcpy(method->name, ch, sizeof(ch));
//                        } break;
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("    case %7d: {\r\n", nid);
                            QByteArray ba = name.toUtf8();
                            QString str;
                            for (int i = 0; i < ba.size(); ++i)
                            {
                                str += QString::asprintf("0x%02x, ", (unsigned char)ba.at(i));
                            }
                            str.resize(str.length() - 2);
                            tsout << "        unsigned char ch[] = {" << str << "};\r\n";
                            tsout << "        memcpy(method->name, ch, sizeof(ch));\r\n";
                            tsout << "    } break;\r\n";
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/ui/name.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/ui/name.cpp", "E:/Qt/QtProjects/san/ui/name.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/ui/name.cpp.new", "E:/Qt/QtProjects/san/ui/name.cpp");
                    }
                }
            }

            // method.*
            if (!QFile::exists(QString::asprintf("E:/Qt/QtProjects/san/method/method%07d.h", nid)))
            {
                int type = nid % 100 + (zb ? 5 : 0);
                QFile fin(QString::asprintf("E:/Qt/QtProjects/san/base/method%d.h", type));
                QFile fout(QString::asprintf("E:/Qt/QtProjects/san/method/method%07d.h", nid));
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    tsout << tsin.readAll().replace("9999999", QString::asprintf("%07d", nid));
                    fin.close();
                    fout.close();
                }
                QFile fin2(QString::asprintf("E:/Qt/QtProjects/san/base/method%d.cpp", type));
                QFile fout2(QString::asprintf("E:/Qt/QtProjects/san/method/method%07d.cpp", nid));
                if (fin2.open(QFile::ReadOnly | QIODevice::Text) && fout2.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin2);
                    QTextStream tsout(&fout2);
                    QString s1 = tsin.readAll();
                    QString s2 = s1.replace("id = 9999999", QString::asprintf("id = %d", nid));
                    QString s3 = s2.replace("9999999", QString::asprintf("%07d", nid));
                    tsout << s3;
                    fin2.close();
                    fout2.close();
                }
            }

            // buff.*
            if (!nb || !QFile::exists(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%07d.h", nid)))
            {
                QFile fin("E:/Qt/QtProjects/san/base/buff.h");
                QFile fout(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%07d.h", nid));
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString s1 = tsin.readAll();
                    QString s2 = s1.replace("id = 9999999", QString::asprintf("id = %d", nid));
                    QString s3 = s2.replace("9999999", QString::asprintf("%07d", nid));
                    tsout << s3;
                    fin.close();
                    fout.close();
                }
                QFile fin2("E:/Qt/QtProjects/san/base/buff.cpp");
                QFile fout2(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%07d.cpp", nid));
                if (fin2.open(QFile::ReadOnly | QIODevice::Text) && fout2.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin2);
                    QTextStream tsout(&fout2);
                    tsout << tsin.readAll().replace("9999999", QString::asprintf("%07d", nid));
                    fin2.close();
                    fout2.close();
                }
            }

            // san.pro
            {
                QFile fin("E:/Qt/QtProjects/san/san.pro");
                QFile fout("E:/Qt/QtProjects/san/san.pro.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = (id.length() < 7) ? "insert method cpp" : "insert item method cpp " + id.left(1);
                    QString key2 = "insert buff cpp";
                    QString key3 = (id.length() < 7) ? "insert method h" : "insert item method h " + id.left(1);
                    QString key4 = "insert buff h";
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%07d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                        method/method0120321.cpp
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("        method/method%07d.cpp \\\r\n", nid);
                        }
//                        buff/buff4130220.cpp
                        if (!nb && line.contains(key2))
                        {
                            tsout << QString::asprintf("        buff/buff%07d.cpp \\\r\n", nid);
                        }
//                        method/method0120321.h
                        if (line.contains(key3))
                        {
                            tsout << QString::asprintf("    method/method%07d.h \\\r\n", nid);
                        }
//                        buff/buff4130220.h
                        if (!nb && line.contains(key4))
                        {
                            tsout << QString::asprintf("    buff/buff%07d.h \\\r\n", nid);
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/san.pro.old");
                        QFile::rename("E:/Qt/QtProjects/san/san.pro", "E:/Qt/QtProjects/san/san.pro.old");
                        QFile::rename("E:/Qt/QtProjects/san/san.pro.new", "E:/Qt/QtProjects/san/san.pro");
                    }
                }
            }
        }
        else if (str.contains("strategy"))
        {
            QStringList info = str.split(',');
            QString id = info.at(1);
            QString name = info.at(2);
            int nid = id.toUInt();

            // strategy.cpp
            {
                QFile fin("E:/Qt/QtProjects/san/strategy/strategy.cpp");
                QFile fout("E:/Qt/QtProjects/san/strategy/strategy.cpp.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = "insert include " + id.left(1);
                    QString key2 = "insert case " + id.left(1);
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%06d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                         #include "strategy413021.h"
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("#include \"strategy%06d.h\"\r\n", nid);
                        }
//                        case 413021: {
//                            unsigned char ch[] = {0xe5, 0xb7, 0xab, 0xe5, 0x8c, 0xbb, 0xe5, 0x8f, 0xa4, 0xe5, 0x8d, 0xb7};
//                            Logger::H().printname(ch, sizeof(ch), id);
//                            strategy = QSharedPointer<Strategy413021>::create();
//                        } break;
                        if (line.contains(key2))
                        {
                            tsout << QString::asprintf("    case %6d: {\r\n", nid);
                            QByteArray ba = name.toUtf8();
                            QString str;
                            for (int i = 0; i < ba.size(); ++i)
                            {
                                str += QString::asprintf("0x%02x, ", (unsigned char)ba.at(i));
                            }
                            str.resize(str.length() - 2);
                            tsout << "        unsigned char ch[] = {" << str << "};\r\n";
                            tsout << "        Logger::H().printname(ch, sizeof(ch), id);\r\n";
                            tsout << QString::asprintf("        strategy = QSharedPointer<Strategy%06d>::create();\r\n", nid);
                            tsout << "    } break;\r\n";
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/strategy/strategy.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/strategy/strategy.cpp", "E:/Qt/QtProjects/san/strategy/strategy.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/strategy/strategy.cpp.new", "E:/Qt/QtProjects/san/strategy/strategy.cpp");
                    }
                }
            }

            // name.cpp
            {
                QFile fin("E:/Qt/QtProjects/san/ui/name.cpp");
                QFile fout("E:/Qt/QtProjects/san/ui/name.cpp.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = "insert strategy " + id.left(1);
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%06d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                        case 413021: {
//                            unsigned char ch[] = {0xe5, 0xb7, 0xab, 0xe5, 0x8c, 0xbb, 0xe5, 0x8f, 0xa4, 0xe5, 0x8d, 0xb7};
//                            memcpy(strategy->name, ch, sizeof(ch));
//                        } break;
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("    case %6d: {\r\n", nid);
                            QByteArray ba = name.toUtf8();
                            QString str;
                            for (int i = 0; i < ba.size(); ++i)
                            {
                                str += QString::asprintf("0x%02x, ", (unsigned char)ba.at(i));
                            }
                            str.resize(str.length() - 2);
                            tsout << "        unsigned char ch[] = {" << str << "};\r\n";
                            tsout << "        memcpy(strategy->name, ch, sizeof(ch));\r\n";
                            tsout << "    } break;\r\n";
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/ui/name.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/ui/name.cpp", "E:/Qt/QtProjects/san/ui/name.cpp.old");
                        QFile::rename("E:/Qt/QtProjects/san/ui/name.cpp.new", "E:/Qt/QtProjects/san/ui/name.cpp");
                    }
                }
            }

            // strategy.*
            if (!QFile::exists(QString::asprintf("E:/Qt/QtProjects/san/strategy/strategy%06d.h", nid)))
            {
                QFile fin("E:/Qt/QtProjects/san/base/strategy.h");
                QFile fout(QString::asprintf("E:/Qt/QtProjects/san/strategy/strategy%06d.h", nid));
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    tsout << tsin.readAll().replace("999999", QString::asprintf("%06d", nid));
                    fin.close();
                    fout.close();
                }
                QFile fin2("E:/Qt/QtProjects/san/base/strategy.cpp");
                QFile fout2(QString::asprintf("E:/Qt/QtProjects/san/strategy/strategy%06d.cpp", nid));
                if (fin2.open(QFile::ReadOnly | QIODevice::Text) && fout2.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin2);
                    QTextStream tsout(&fout2);
                    QString s1 = tsin.readAll();
                    QString s2 = s1.replace("id = 999999", QString::asprintf("id = %d", nid));
                    QString s3 = s2.replace("999999", QString::asprintf("%06d", nid));
                    tsout << s3;
                    fin2.close();
                    fout2.close();
                }
            }

            // buff.*
            if (!QFile::exists(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%06d.h", nid)))
            {
                QFile fin("E:/Qt/QtProjects/san/base/buff.h");
                QFile fout(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%06d.h", nid));
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString s1 = tsin.readAll();
                    QString s2 = s1.replace("id = 9999999", QString::asprintf("id = %d", nid));
                    QString s3 = s2.replace("9999999", QString::asprintf("%06d", nid));
                    tsout << s3;
                    fin.close();
                    fout.close();
                }
                QFile fin2("E:/Qt/QtProjects/san/base/buff.cpp");
                QFile fout2(QString::asprintf("E:/Qt/QtProjects/san/buff/buff%06d.cpp", nid));
                if (fin2.open(QFile::ReadOnly | QIODevice::Text) && fout2.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin2);
                    QTextStream tsout(&fout2);
                    tsout << tsin.readAll().replace("9999999", QString::asprintf("%06d", nid));
                    fin2.close();
                    fout2.close();
                }
            }

            // san.pro
            {
                QFile fin("E:/Qt/QtProjects/san/san.pro");
                QFile fout("E:/Qt/QtProjects/san/san.pro.new");
                if (fin.open(QFile::ReadOnly | QIODevice::Text) && fout.open(QFile::Append | QFile::Truncate))
                {
                    QTextStream tsin(&fin);
                    QTextStream tsout(&fout);
                    QString line;
                    QString key1 = "insert strategy cpp " + id.left(1);
                    QString key2 = "insert buff cpp";
                    QString key3 = "insert strategy h " + id.left(1);
                    QString key4 = "insert buff h";
                    bool skip = false;
                    while (tsin.readLineInto(&line))
                    {
                        if (line.contains(QString::asprintf("%06d", nid)))
                        {
                            skip = true;
                            break;
                        }
//                        strategy/strategy413021.cpp
                        if (line.contains(key1))
                        {
                            tsout << QString::asprintf("        strategy/strategy%06d.cpp \\\r\n", nid);
                        }
//                        buff/buff413021.cpp
                        if (line.contains(key2))
                        {
                            tsout << QString::asprintf("        buff/buff%06d.cpp \\\r\n", nid);
                        }
//                        strategy/strategy413021.h
                        if (line.contains(key3))
                        {
                            tsout << QString::asprintf("    strategy/strategy%06d.h \\\r\n", nid);
                        }
//                        buff/buff413021.h
                        if (line.contains(key4))
                        {
                            tsout << QString::asprintf("    buff/buff%06d.h \\\r\n", nid);
                        }
                        tsout << line << "\r\n";
                    }
                    fin.close();
                    fout.close();
                    if (!skip)
                    {
                        QFile::remove("E:/Qt/QtProjects/san/san.pro.old");
                        QFile::rename("E:/Qt/QtProjects/san/san.pro", "E:/Qt/QtProjects/san/san.pro.old");
                        QFile::rename("E:/Qt/QtProjects/san/san.pro.new", "E:/Qt/QtProjects/san/san.pro");
                    }
                }
            }
        }
    }
}

void writeExcel()
{
    QFile file("./excel/item.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        return;
    }

    QString line;
    unsigned char ts[5][7] = {{0xe8, 0xa2, 0xab, 0xe5, 0x8a, 0xa8, 0}, {0xe6, 0x8c, 0x87, 0xe6, 0x8c, 0xa5, 0}, {0xe4, 0xb8, 0xbb, 0xe5, 0x8a, 0xa8, 0}, {0}, {0xe8, 0xbf, 0xbd, 0xe5, 0x87, 0xbb, 0}};
    for (int i = 10000; i <= 49999; ++i)
    {
        Item item;
        if (Item::getItem(i, item))
        {
            QSharedPointer<Method> method = Method::getMethod(item.methods[0]);
            line = item.name;
            line += ",";
            line += method->name;
            line += QString::asprintf(",%d,%s,%d\n", method->id, ts[method->id % 10], method->luck);

            file.write(line.toUtf8());
        }
    }
    for (int i = 10000; i <= 199999; ++i)
    {
        QSharedPointer<Method> method = Method::getMethod(i);
        if (method.isNull() || method->id == 0)
        {
            continue;
        }
        line = ",";
        line += method->name;
        line += QString::asprintf(",%d,%s,%d\n", method->id, ts[method->id % 10], method->luck);

        file.write(line.toUtf8());
    }
    for (int i = 100000; i <= 499999; ++i)
    {
        QSharedPointer<Strategy> strategy = Strategy::getStrategy(i);
        if (strategy.isNull() || strategy->id == 0)
        {
            continue;
        }
        Item item;
        if (Item::getItem(i/10, item))
        {
            line = item.name;
            line += ",";
            line += strategy->name;
            line += QString::asprintf(",%d\n", strategy->id);

            file.write(line.toUtf8());
        }
    }
    for (int i = 1000; i <= 2000; ++i)
    {
        QSharedPointer<Strategy> strategy = Strategy::getStrategy(i);
        if (strategy.isNull() || strategy->id == 0)
        {
            continue;
        }
        line = ",";
        line += strategy->name;
        line += QString::asprintf(",%d\n", strategy->id);

        file.write(line.toUtf8());
    }
    for (int i = 100; i <= 600; ++i)
    {
        QSharedPointer<Relation> relation = Relation::getRelation(i);
        if (relation.isNull() || relation->id == 0)
        {
            continue;
        }
        line = ",";
        line += relation->name;
        line += QString::asprintf(",%d\n", relation->id);

        file.write(line.toUtf8());
    }
    file.close();
    printf("done");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#if 0
    QStringList list;
//    list.append("method,3150121,焰燎江天");
//    list.append("strategy,315011,势连");
//    list.append("method,3150221,凤仪淑慎");
//    list.append("strategy,315021,慈训");
//    list.append("method,150120,拔刀相向");
//    list.append("method,150221,潜师袭远");
    autoCoding(list);
    printf("done");
    return a.exec();
#endif

#if 0
    writeExcel();
    return a.exec();
#endif

#if 0
    unsigned char ch[4] = {0xf2, 0x34, 0x0, 0x0};
    int i1 = *reinterpret_cast<const unsigned short*>(ch);
    unsigned int i2 = *reinterpret_cast<const unsigned short*>(ch);
    double d1 = i1;
    double d2 = i2;

    return a.exec();
#endif

#if 0
    float k = 0.0f;
    float k1 = 0.0f;
    for (int i = 0; i < 5; ++i)
    {
        k += 1.8;
        k1 += 1.8;
    }
    k1 -= k;
    return a.exec();
#endif
#if 0
    qsrand(QDateTime::currentSecsSinceEpoch());
    int a1 = 0, a2 = 0, a3 = 0;
    QVector<int> m = {1, 2, 3};
    QVector<int> n;
    for (int i = 0; i < 3000000; ++i)
    {
        n = Cmn(m, 3);
        if (n.contains(1))
            ++a1;
        if (n.contains(2))
            ++a2;
        if (n.contains(3))
            ++a3;
    }
    printf("%d %d %d\n", a1, a2, a3);
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int g = 1; g <= 4; ++g)
    {
    Item item;
    for (int i = g * 10000; i <= g * 10000 + 9999; ++i)
    {
        Item::getItem(i, item);
    }
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    Group group;
    for (int i = 1; i <= 999; ++i)
    {
        Group::getGroup(i, group);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 1000; i <= 9999; ++i)
    {
        Strategy::getStrategy(i);
    }
    for (int i = 100000; i <= 499999; ++i)
    {
        Strategy::getStrategy(i);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    QVector<int> ms = {30422,60121,90121,1011320,1090121,3020122,4020122,4091424};
    for (int m : ms)
    {
        Method::getMethod(m);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 10000; i <= 199999; ++i)
    {
        Method::getMethod(i);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 10000; i <= 49999; ++i)
    {
        Method::getMethod(i*100+20);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 10000; i <= 49999; ++i)
    {
        Method::getMethod(i*100+21);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 101; i <= 49999; ++i)
    {
        Method::getMethod(i*100+22);
    }
    return a.exec();
#endif
#if 0
    Logger::H().setlevel(5);
    for (int i = 2224000; i <= 2224999; ++i)
    {
        Method::getMethod(i);
    }
    for (int i = 101; i <= 2099; ++i)
    {
        Method::getMethod(i*10000+2224);
    }
    for (int i = 10000; i <= 49999; ++i)
    {
        Method::getMethod(i*100+24);
    }
    return a.exec();
#endif
#if 0
    writeExcel();
    return a.exec();
#endif

    Dispatcher dpt(1);
    dpt.start();
    dpt.wait();

    return a.exec();
}



/*
item id(5)          : G(1) S(2) N(2)
                      4    01   03
                      1    08   02
method id(7)        : G(1) S(2) N(2) T
                      4    01   03   22
                      0    01   51   22
                      1    08   02   21
strategy id(7)      : G(1) S(2) N(2) C(1)
                      4    01   03   1
                      4    01   03   7
                      4    01   03   8
                      0    01   01   0
                      3    03   01   3-8
                      1    08   02   1
buff id(8/4)        : G(1) S(2) N(2) X    F(1)
                      4    01   03   22   1
                      0    07   06   22   1
                      4    01   03   1    1
                      4    01   03   7    1
                      4    01   03   8    1
                      0    01   01   0    1
                      1    08   02   21   1
                      T(1) N(2) F(1)
                      1    01   1

G: [0,4]
S: [01,99]
N: [01,99]
C: [1,9]
F: [1,9]
*/


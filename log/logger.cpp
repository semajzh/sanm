#include "logger.h"
#include "logger1.h"
#include "logger2.h"
#include "ground.h"
#include <windows.h>
#include <iostream>

Logger::Logger()
{

}

Logger::~Logger()
{

}

Logger& Logger::H()
{
    static Logger1 logger;
    return logger;
}

void Logger::printname(const QString& name)
{
//        return;
    QByteArray ba = name.toUtf8();
    for (int i = 0; i < ba.size(); ++i)
    {
        printf("0x%02x, ", (unsigned char)ba.at(i));
    }
    printf("\n");
}

void Logger::printname(unsigned char ch[], int size, int id, int b)
{
    if (!b && level != 5)
    {
        return;
    }
    qDebug() << id << QString::fromUtf8(QByteArray::fromRawData((const char*)ch, size));
}

//void Logger::check(Ground* ground)
//{
//    for (int g = 0; g < 2; ++g)
//    {
//        for (int i = 0; i < 3; ++i)
//        {
//            for (int k = 0; k < 4; ++k)
//            {
//                if (ground->m_group[g].m_item[i].i[k] < 0 || ground->m_group[g].m_item[i].i[k] > 1000)
//                {
//                    int j = 0;
//                }
//            }
//        }
//    }
//}

void Logger::enableVTMode()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE) return;

    DWORD dwMode = 0;
    if (!GetConsoleMode(hOut, &dwMode)) return;

    dwMode |= 0x0004;
    SetConsoleMode(hOut, dwMode);
}

bool Logger::inittable(int row, int col)
{
    enableVTMode();

    for (int x = 0; x < row; ++x)
    {
        if (x < 8)
        {
            printf("%d", x + 1);
        }
        else if (x == 8)
        {
            printf("+");
        }
        else if (x == row - 1)
        {
            printf("=");
        }
        for (int y = 0; y < col; ++y)
        {
            printf(" %4d", 0);
        }
        if (x < row - 1)
        {
            printf("\n");
        }
    }
    m_row = row;
    m_col = col + 1;

    return true;
}

void Logger::printtable(int r, int c, int value)
{
    if (r < m_row)
    {
        printf("\033[%dA", m_row - r);
    }
    if (r > m_row)
    {
        printf("\033[%dB", r - m_row);
    }
    if (c > m_col)
    {
        printf("\033[%dC", (c - m_col) * 5);
    }
    if (c < m_col)
    {
        printf("\033[%dD", (m_col - c) * 5);
    }
    printf(" %4d", value);
    m_row = r;
    m_col = c + 1;
}

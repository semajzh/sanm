#include "logger2.h"

Logger2::Logger2()
{
    level = 5;
}

Logger2::~Logger2()
{

}

void Logger2::print21()
{
    if (level < 5)
    {
        return;
    }
}

#include "leap.h"
bool leap_year(int year)
{
    // Type 1: 普通闰年，可以被4整除但是不可以被100整除
    bool type1 = (year % 4 == 0) && (year % 100 != 0);

    // Type 2: 世纪闰年，可以被4整除、同时也可以被100整除、同时也可以被400整除，即被400整除
    bool type2 = (year % 400 == 0);

    return type1 || type2; //两种情况都可以，都是闰年
}
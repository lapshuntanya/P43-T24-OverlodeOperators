#include "Date.h"

Date::Date()
{
    auto pc_time = time(NULL);
    tm* obj = new tm;
   
    localtime_s(obj, &pc_time); //VS
   // obj = localtime(&pc_time); //Xcode, Clion, Online

}

Date::Date(int year, int month, int day)
{
}

bool Date::isLeapYear() const
{
    return false;
}

int Date::monthDays() const
{
    return 0;
}

void Date::nextDate()
{
}

void Date::prevDate()
{
}

void Date::setYear(int year)
{
}

int Date::getYear() const
{
    return 0;
}

void Date::setMonth(int month)
{
}

int Date::getMonth() const
{
    return 0;
}

void Date::setDay(int day)
{
}

int Date::getDay() const
{
    return 0;
}

void Date::showDate() const
{
}

bool Date::valid() const
{
    return false;
}

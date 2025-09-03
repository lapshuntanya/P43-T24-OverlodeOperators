#include "Date.h"

Date::Date()
{
    auto pc_time = time(NULL);
    tm* obj = new tm;
   
    localtime_s(obj, &pc_time); //VS
   // obj = localtime(&pc_time); //Xcode, Clion, Online

    year = obj->tm_year + 1900;
    month = obj->tm_mon + 1;
    day = obj->tm_mday;
}

Date::Date(int year, int month, int day)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

bool Date::isLeapYear() const
{
    return year%4 == 0 && year%100 != 0  || year%400 == 0;
}

int Date::monthDays() const
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return isLeapYear() ? 29 : 28;
}

void Date::nextDate()
{
    if (day == 31 && month == 12) {
        year++;
        day = 1;
        month = 1;
    }
    else if (day == monthDays()) {
        month++;
        day = 1;
    }
    else {
        day++;
    }
}

void Date::prevDate()
{
    if (day == 1 && month == 1) {
        year--;
        day = 31;
        month = 12;
    }
    else if (day == 1) {
        month--;
        day = monthDays();
    }
    else {
        day--;
    }
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
    cout << day / 10 << day % 10 << "." << month / 10 << month % 10 << "." << year << endl;
}

bool Date::valid() const
{
    return false;
}

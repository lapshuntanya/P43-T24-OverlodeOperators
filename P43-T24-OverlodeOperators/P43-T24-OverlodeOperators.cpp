

#include "Date.h"

int main()
{
    Date today;
    Date d1(2025, 1, 1);

    today.showDate();
    d1.showDate();
    cout << "-----------------------------------\n\n";

    today.nextDate();
    d1.prevDate();
    today.showDate();
    d1.showDate();
}


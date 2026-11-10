#include <iostream>

bool leap_year (int year) {
    bool ly = false;

    // THIS CAN BE SIMPLIFIED INTO:
    // return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
    // can use this format if there are only a few conditions that I need to check. 
    if ((year % 4) == 0) {
        if ((year % 100) == 0) {
            if ((year % 400) == 0) {
                ly = true;
            }
        }
        else {
            ly = true;
        }
    }

    return ly;
}

// checks if the date is the last date in the month
bool last_date_in_month (int date, int month, int year) {
    bool last = false;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (date == 30) {
            last = true;
        }
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
        if (date == 31) {
            last = true;
        }
    }
    else if (month == 2) {
        if (leap_year (year)) {
            if (date == 29) {
                last = true;
            }
        }
        else if (date == 28) {
            last = true;
        }
    }

    return last;
}

void next_date (int d1, int m1, int y1, int& d2, int& m2, int& y2) {
    if (last_date_in_month (d1, m1, y1)) {
        // CAN COMBINE BOTH STATEMENTS INTO: 
        // this only works for the month. the year needs more advanced knowledge. 
        // d2 = 1;
        // m2 = (m1 % 12) + 1; so if it is dec, it wraps. if it isnt, then it stays the same

        if (m1 == 12) {
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }
        else {
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }
    }
    else {
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}

int main () {
    int d1, m1, y1, d2, m2, y2;

    d1 = 1, m1 = 1, y1 = 2001;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 2) << (m2 == 1) << (y2 == 2001) << std::endl;
    
    d1 = 17, m1 = 2, y1 = 2001;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 18) << (m2 == 2) << (y2 == 2001) << std::endl;

    d1 = 31, m1 = 10, y1 = 2001;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1) << (m2 == 11) << (y2 == 2001) << std::endl;

    d1 = 30, m1 = 6, y1 = 2001;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1) << (m2 == 7) << (y2 == 2001) << std::endl;

    d1 = 31, m1 = 12, y1 = 2001;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1) << (m2 == 1) << (y2 == 2002) << std::endl;

    d1 = 31, m1 = 12, y1 = 2008;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1) << (m2 == 1) << (y2 == 2009) << std::endl;

    d1 = 28, m1 = 2, y1 = 2004;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 29) << (m2 == 2) << (y2 == 2004) << std::endl;

    d1 = 28, m1 = 2, y1 = 2100;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1) << (m2 == 3) << (y2 == 2100) << std::endl;

    d1 = 28, m1 = 2, y1 = 2000;
    next_date (d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 29) << (m2 == 2) << (y2 == 2000) << std::endl;

}
#include <iostream>

bool leap_year(int year){
    bool ly;

    if ((year % 4) == 0) {
        if ((year % 100) == 0){
            if ((year % 400) == 0) {
                ly = true;    
            }
            else {
                ly = false;
            }
        }
        else {
            ly = true;
        }
    }
    else {
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    m2 = m1;
    y2 = y1;
    if ((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10) || (m1 == 12)){
        if (d1 == 30){
            d2 = d1 + 1;
        }
        else if (d1 == 31){
            if (m1 == 12){
                y2 = y1 + 1;
                d2 = 1;
                m2 = 1;
            }
            else {
                d2 = 1;
                m2 = m1 + 1;
            }
        }
        else {
            d2 = d1 + 1;
        }
    }
    else {
        if (m1 == 2) {  
            if ((d1 == 28) && (leap_year(y1))){
                d2 = 29;
            }
            else if ((d1 == 28) && (not(leap_year(y1)))){
                d2 = 1;
                m2 = 3;
            }
            else {
                d2 = d1 + 1;
            }
        }
        else {
            if (d1 == 30){
                d2 = 1;
                m2 = m1 + 1;
            }
            else {
                d2 = d1 + 1;
            }
        }
    }
}

int main(){
    int a, b, c;
    std::cout << "Please write the date as '01 03 2024' for example" << std::endl;
    std::cin >> a >> b >> c;
    int a1 = 0, b1 = 0, c1 = 0;

    next_date (a, b, c, a1, b1, c1);

    std::cout << "The next day is " << a1 << "/" << b1 << "/" << c1 << ".";
}
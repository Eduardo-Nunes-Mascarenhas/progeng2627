/* UNDERSTANDING =

#include <iostream>

int main (){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;
    // I expect c = 3

    c = a + b;

    std::cout << c << std::endl;
    // I expect c = 4
}

*/

/* RECTANGLES

#include <iostream>

int main(){
    double l1, l2, area;

    std::cout << "please enter the 1st side" << std::endl;
    std::cin >> l1;

    std::cout << "please enter 2nd side" << std::endl;
    std::cin >> l2;

    area = l1 * l2;

    std::cout << "The area is " << area << std::endl;
}

*/

/* CURRENCY CONVERSION

#include <iostream>

int main(){
    double amountP, exc_rate, amountE;

    std::cout << "Enter amount of British Pounds" << std::endl;
    std::cin >> amountP;

    std::cout << "Enter the exchange rate" << std::endl;
    std::cin >> exc_rate;

    amountE = amountP * exc_rate;

    std::cout << "The amount in Euros is " << amountE << std::endl;
}

*/

/* TEMPERATURE CONVERSION
#include <iostream>

 int main(){
    double tempC, tempF;

    std::cout << "Enter the temperature in Celsius degrees" << std::endl;
    std::cin >> tempC;

    tempF = (tempC*9/5) + 32;

    std::cout << "The temperature in Fahrenheit degrees is " << tempF << std::endl;
}

 */
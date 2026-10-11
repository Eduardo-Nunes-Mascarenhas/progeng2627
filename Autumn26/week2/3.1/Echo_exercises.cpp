/*ECHO WITHIN RANGE

#include <iostream>

int main(){
    int n;

    std::cin >> n;

    while( (-11 < n) && (n < 11) ){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}

*/

/* ECHO WITH TEXT

#include <iostream>
#include <string>

int main(){
    std::string n;
    bool go = true;

    std::cin >> n;

    while(go){
        if ((n=="STOP") || (n=="Stop") || (n=="stop")) {
            go = false;
        }
        else {
            std::cout << n << std::endl;
            std::cin >> n;
        }
    }
}

*/

/* THE SUM SO FAR

#include <iostream>

int main(){
    double n, sum = 0;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;

    while (n != 0) {
        sum = sum + n;
        std::cout << "The sum so far is: " << sum << std::endl;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
    }
}

*/

/* THE AVERAGE SO FAR

#include <iostream>

int main(){
    double n, avg, sum = 0, counter = 1;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;

    while (n != 0) {
        sum = sum + n;
        avg = sum / counter;
        std::cout << "The average so far is: " << avg << std::endl;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
        counter = counter + 1;
    }
}

*/

/* DIVISION AS REPEATED SUBTRACTION

#include <iostream>

int main(){
    int a, b, q = 0, d;
    std::cin >> a >> b;
    d = a;

    while (a > b) {
        a = a - b;
        q = q+1;
    }

    std::cout << d << " / " << b << " has quotient " << q << " and remainder " << a << std::endl;
}

*/
#include <iostream>

int main(){

    double x, n, acc = 0;
    int counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << " x " << n <<  " = " << acc << std::endl;

}


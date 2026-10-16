#include <iostream>

int main(){
    int n, max, steps = 0;
    std::cin >> n;

    max = n;

    while (n != 1){
        if ((n % 2) == 0){
            n = n/2;
        }
        else {
            n = 3*n + 1;
        }
        steps++;
        std::cout << n << "\t";
        if (n > max) {
            max = n;
        }
    }
    
    std::cout << std::endl;
    std::cout << "The maximum number is " << max << std::endl;
    std::cout << "The number of steps is " << steps << std::endl;


}
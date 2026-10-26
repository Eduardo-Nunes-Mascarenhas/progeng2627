#include <iostream>
#include <cmath>

int main(){
    int x, n, sum = 0, p;
    std::cin >> x >> n;

    for (int i = 1; i < (n+1); i++){
        p = std::pow(x, i);
        sum = sum + p;
    }

    std::cout << sum << std::endl;
}
#include <iostream>

double mypow(double base, int exp){
    double result = 1; 

    if (exp >= 0){
        for (int i = 0; i < exp; i++){
            result = result*base;
        }  
    }
    else {
        for (int j = 0; j < (-exp); j++){
            result = result*(1/base);
        }
    }

    return result;
}

int main(){
    int x, n, sum = 0;
    std::cin >> x >> n;

    for (int i = 1; i < (n+1); i++)
        sum = sum + mypow(x, i);

    std::cout << sum << std::endl;
}
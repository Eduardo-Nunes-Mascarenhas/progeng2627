#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n, b;
    std::cin >> n >> b;
    for (int i = n; i < (b+1); i++){
        if (smallest_factor(i) == 0){
            std::cout << i << std::endl;
        }
    }
}


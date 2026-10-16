#include <iostream>

int main (){
    
    int n1, n2;

    std::cin >> n1 >> n2;
    
    int b = n1;

    for (int i = 0; i < (n2-1); i++){
        n1 = n1*b;
    }

    std::cout << b << " ^ " << n2 << " = " << n1;
}
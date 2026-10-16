#include <iostream>

int main(){

    int n1, c1, c2;

    std::cin >> n1;

    c1 = n1;
    c2 = n1;

    if (n1 == 0){
        c2 = 1;
    }
    else{
        for (int i = 0; i < (c1-1); i++){
            n1 = (c1 - (i+1));
            c2 = c2 * n1;
        }
    }

    std::cout << c1 << "! = " << c2 << std::endl;
}


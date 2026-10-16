#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            int c = (j+1)*(i+1);
            std::cout << c;
            std::cout << "\t";
        }
        std::cout << std::endl;
    }
}


/* CODE USING FOR LOOPS

#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int c2 = 0; c2 < n; c2++){

        for(int c = 0; c < n; c++){
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

*/

// CODE WITH WHILE LOOPS

#include <iostream>

int main(){
    int n, i = 0, j = 0;
    std::cin >> n;

    while (j < n){
        while (i < n){
            std::cout << "*";
            i++;
        }
        j++;
        i = 0;
        std::cout << std::endl;
    }
}
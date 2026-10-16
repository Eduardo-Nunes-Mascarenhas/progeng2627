#include <iostream>
#include <string>

int main() {
    std::cout << "Higher or Lower GAME. Bounds: 0-1000 inclusive" << std::endl;
    int n = 500;
    int c = n;
    std::string guess = "NO";
    while (guess != "YES") {
        std::cout << "Is the number higher or lower than " << n << "? (ANS 'YES' if this number is correct)" << std::endl;
        std::cin >> guess;
        if ((c != (0 || 1))) {
            c = c/2;
        }
        else {
            c = 1;
        }
        if (guess == "lower"){
            n = n - c;
        }
        else if (guess == "higher"){
            n = n + c;
        }
    }
     
}
#include <iostream>

// this is the only different line:
void myswap(int& n1, int& n2){

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    int a, b;

    std::cout << "please enter two values" << std::endl;
    std::cin >> a >> b;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << a << std::endl;
    std::cout << "n2: " << b << std::endl;

    myswap(a, b);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << a << std::endl;
    std::cout << "n2: " << b << std::endl;
}


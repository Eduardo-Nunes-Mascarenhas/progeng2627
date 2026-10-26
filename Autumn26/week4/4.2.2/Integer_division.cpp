#include <iostream>

void division(int &a, int &b){
    int D = a/b;
    int R = a - D*b;
    a = D;
    b = R;
}

int main(){
    int x, y;
    std::cin >> x >> y;
    int x1 = x, y1 = y;
    division(x, y);
    std::cout << x1 << " / " << y1 << " = " << x << " with remainder " << y << "." << std::endl; 
}
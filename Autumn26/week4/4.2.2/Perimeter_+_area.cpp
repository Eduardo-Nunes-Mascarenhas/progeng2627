#include <iostream>

void Rectangle(double &n1, double &n2){
    double Area = n1*n2;
    double Perimeter = n1*2 + n2*2;
    n1 = Area;
    n2 = Perimeter;
}

int main(){
    double a, b;
    std::cin >> a >> b;
    Rectangle(a, b);
    std::cout << "Area: " << a << ". " << "Perimeter: " << b << std::endl;
}
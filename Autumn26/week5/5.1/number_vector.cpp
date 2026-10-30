#include <iostream>
#include <vector>

int main(){
    std::vector<double> n;
    n.push_back(10);
    n.push_back(1.5);
    n.push_back(30);

    double n1;

    n1 = n[0] * (n[1] + n[2]);
    
    std::cout << n1 << std::endl;
}



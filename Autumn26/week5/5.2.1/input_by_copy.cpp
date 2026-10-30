#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    std::cout << "n:" << std::endl;
    int n, i, temp;
    std::cin >> n;
    
    for (i = 0; i < n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}



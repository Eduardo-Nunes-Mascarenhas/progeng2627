#include <iostream>
#include <vector>

int main(){
    std::vector<double> v;

    std::cout << "n:" << std::endl;
    int n, i, temp;
    std::cin >> n;
    
    for (i = 0; i < n; i++){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "t:" << std::endl;
    int t;
    std::cin >> t;

    for (int j = 0; j < v.size(); j++){
        if (v[j] < t){
            std::cout << v[j] << std::endl;
        }
    }

}
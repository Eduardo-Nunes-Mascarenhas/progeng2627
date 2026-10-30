#include <iostream>
#include <vector>

int main(){
    std::vector<double> v;
    std::vector<int> index;

    std::cout << "n:" << std::endl;
    int n, i, temp;
    std::cin >> n;
    
    for (i = 0; i < n; i++){
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "t:" << std::endl;
    int t, sum = 0;
    std::cin >> t;

    for (int j = 0; j < v.size(); j++){
        if (v[j] == t){
            sum++;
            index.push_back(j);
        }
    }

    std::cout << "there are " << sum << " ocurrences of " << t << " at indices:" << std::endl;
    for (int l = 0; l < index.size(); l++){
        std::cout << index[l] << std::endl;
    }
    
}


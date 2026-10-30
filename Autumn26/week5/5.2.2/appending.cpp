#include <iostream>
#include <vector>

void appending(std::vector<int> &v1, std::vector<int> &v2, std::vector<int> &vout){
    
    for (int i = 0; i < v1.size(); i++){
        vout.push_back(v1[i]);
    }
    for (int j = 0; j < v2.size(); j++){
        vout.push_back(v2[j]);
    }
}

int main(){
    std::vector<int> v1{1, 5, 98, -23}, v2{-4, 2, 3}, v3;
    appending(v1, v2, v3);
    for (int o = 0; o < v3.size(); o++){
        std::cout << v3[o] << std::endl;
    }
}



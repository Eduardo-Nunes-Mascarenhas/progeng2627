#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            merged.push_back(v1[i]);
            i++;
        } else {
            merged.push_back(v2[j]);
            j++;
        }
    }

    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i++;
    }

    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j++;
    }
}

int main(){

    std::vector<int> v1, v2, v3, v4, v5, v6, out1, out2, out3;

    std::vector<int> expected_output1, expected_output2, expected_output3;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output1 = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out1);

    if(out1 == expected_output1){
        std::cout << "passed1" << std::endl;
    }
    else{
        std::cout << "not passed1" << std::endl;
    }

    v3 = {1, 2, 3, 4};
    v4 = {5, 6, 7};
    expected_output2 = {1, 2, 3, 4, 5, 6, 7};

    merge_vectors_int(v3, v4, out2);

    if(out2 == expected_output2){ 
        std::cout << "passed2" << std::endl;
    }
    else{
        std::cout << "not passed2" << std::endl;
    }

    v5 = {0, 51, 1000, 1001};
    v6 = {50, 52, 92};
    expected_output3 = {0, 50, 51, 52, 92, 1000, 1001};

    merge_vectors_int(v5, v6, out3);

    if(out3 == expected_output3){
        std::cout << "passed3" << std::endl;
    }
    else{
        std::cout << "not passed3" << std::endl;
    }
    
}
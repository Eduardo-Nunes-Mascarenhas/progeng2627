#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin){

    if (vin.size() > 0){
        double min = vin[0];
        
        for (int j = 0; j < vin.size(); j++){
            if (vin[j] < min){
                min = j;
            }
        }

        return min;
    }
    else {
        return -1;
    }

}

int main(){
    std::vector<double> v{102, 0.5, -20, 30, 2, 40, 45};
    
    std::cout << min_vector_element(v) << std::endl;

}



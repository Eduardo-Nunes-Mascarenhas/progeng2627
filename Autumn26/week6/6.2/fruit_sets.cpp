#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int j = 0; j < vin2.size(); j++){
        vout.push_back(vin2[j]);
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        for (int j = 0; j < vin2.size(); j++){
            if (vin1[i] == vin2[j]) {
                vout.push_back(vin1[i]);
            }
        }
    }
}

int main(){

    std::string inputfilename1, inputfilename2;
    std::cout << "Please enter first input file name:" << std::endl;
    std::cin >> inputfilename1;
    std::cout << "Please enter second input file name:" << std::endl;
    std::cin >> inputfilename2;

    std::ifstream input1, input2;
    input1.open(inputfilename1);
    input2.open(inputfilename2);

    std::vector<std::string> v1, v2, vunion, vintersection;
    
    if (!(input1.is_open() || !(input2.is_open()))){
        std::cout << "ERROR READING FILES" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while (input1 >> tmp) {
        v1.push_back(tmp);
    }
    while (input2 >> tmp) {
        v2.push_back(tmp);
    }

    union_vector(v1, v2, vunion);
    intersection_vector(v1, v2, vintersection);

    std::ofstream output1, output2;
    output1.open("union.txt");
    output2.open("intersection.txt");

    for (int i = 0; i < vunion.size(); i++){
        output1 << vunion[i] << std::endl;
    }
    for (int j = 0; j < vintersection.size(); j++){
        output2 << vintersection[j] << std::endl;
    }

}



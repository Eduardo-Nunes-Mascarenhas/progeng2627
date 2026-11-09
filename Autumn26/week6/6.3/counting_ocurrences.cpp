#include <iostream>
#include <fstream>
#include <vector>

void counting(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        for (int j = 0; j < vin2.size(); j++){
            if (vin1[i] == vin2[j]) {
                vout.push_back(vin1[i]);
            }
        }
    }
}

int main(){

    std::ifstream infile1, infile2; 
    infile1.open("text.txt");
    infile2.open("words.txt");

    std::string tmp, tmp2;
    std::vector<std::string> v1, v2, vout;

    while (infile1 >> tmp){
        v1.push_back(tmp); 
    }
    while (infile2 >> tmp2){
        v2.push_back(tmp2); 
    }

    infile1.close();
    infile2.close();

    counting(v1, v2, vout);

    int sum;

    for (int i = 0; i < v2.size(); i++){
        sum = 0;
        for (int j = 0; j < vout.size(); j++){
            if (v2[i] == vout[j]) {
                sum++;
            }
        }
        std::cout << v2[i] << ":" << " " << sum << std::endl;
    }



}
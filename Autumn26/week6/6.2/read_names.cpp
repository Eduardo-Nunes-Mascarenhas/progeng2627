#include <iostream>
#include <fstream>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;

    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    std::ofstream outfile;
    outfile.open(outputfilename);

    int tmp;
    std::vector<int> v;

    while (infile >> tmp){
        v.push_back(tmp); 
    }

    for (int i = 0; i < v.size(); i++) {
        outfile << v[i] << std::endl;
    }

    outfile.close();

}


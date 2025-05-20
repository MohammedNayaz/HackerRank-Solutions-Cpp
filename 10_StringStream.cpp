xc#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    std::string n,temp;
    std::getline(std::cin,n);
    std::stringstream ss(n);
    std::vector<int> num;
    
    while(std::getline(ss,temp,',')){
        num.push_back(std::stoi(temp));
    }
    for (int num:num){
        std::cout<< num <<endl;   
    }
    return 0;
}

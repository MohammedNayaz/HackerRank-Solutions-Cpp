#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::string a,b;
    std::cin >> a >> b;
    
    std::cout<< a.size()<<" "<<b.size()<< endl << a + b <<endl;
    std::swap(a[0],b[0]);
    std::cout<< a << " " <<b<<endl;
    return 0; 
}

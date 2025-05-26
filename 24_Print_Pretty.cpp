#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    double a, b, c;
    
    std :: cin >> t;
    
    for(int i=0 ; i<t ; i++){
        std :: cin >> a >> b >> c;
        
        std :: cout << "0x" << hex <<nouppercase << (long long)a <<endl ;
        std :: cout << showpos << fixed << setprecision(2) << setw(15) << setfill('_') << b << endl;
        std :: cout << noshowpos << scientific << uppercase << setprecision(9)  << c << endl;
    }  
    return 0;
}

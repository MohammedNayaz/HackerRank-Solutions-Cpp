#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    std::cin>> n >> q;
    
    std::vector<std::vector<int>> a(n);
    
    for(int i=0; i<n ; i++){
        int k;
        std::cin>>k;
        a[i].resize(k); 
        for(int j=0; j<k; j++){
            std::cin>>a[i][j];
        }
    }
    
    for(int i=0; i<q ; i++){
        int aI, eI;
        std::cin >>aI >> eI;
        std::cout<< a[aI][eI] << endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int  n, q, y ;
    std :: cin >> n;
    std :: vector<int> ar(n);
    
    for(int i=0 ; i<n ; i++){
     std :: cin >> ar[i];
    }
        
    std :: cin >> q;
    for(int i=0 ; i<q ; i++){
        std :: cin >> y;
        
        auto temp = std :: lower_bound(ar.begin(), ar.end(), y);
        int pos = temp - ar.begin();
        
        if(pos < n && ar[pos] == y){
        std :: cout<< "Yes " << pos+1 << endl;
        }
        else{
        std :: cout<< "No " << pos+1 <<endl ;
        }
    }
    return 0;
}

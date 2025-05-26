#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, y, x;
    std :: cin >> q;
    set<int> s;
    
    for(int i=0 ; i<q ; i++){
       std :: cin >> y >> x;
       
       if( y == 1){s.insert(x);}
       else if ( y == 2){s.erase(x);}
       else if ( y ==3){
        if( s.find(x) != s.end()){
            std :: cout << "Yes" << endl;
        }
        else{
            std :: cout << "No" << endl;
        }
       }
    }
    return 0;
}

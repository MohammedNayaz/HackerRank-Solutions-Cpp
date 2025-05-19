#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a , b;
    string str[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    std:: cin >> a >> b;
    for ( int i=a ; i<=b ; i++){
        if(i>9){
            if(i%2==0){cout<<"even"<<endl;}
            else {cout<<"odd"<<endl;}
        }
        else {cout<<str[i-1]<<endl;}
    }
    return 0;
}
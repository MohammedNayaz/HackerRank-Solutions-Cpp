#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void pointr(int *a, int *b){
    cout <<*a + *b<<endl;
    if(*a>*b){cout <<*a - *b;}
    else {cout <<*b - *a;}
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;
    std::cin>>a>>b;
    pointr(&a,&b);
    return 0;
}

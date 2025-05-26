#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type, marks;
    string name;
    std :: cin >> q;
    std :: map<std :: string, int> student_marks;
    
    for(int i=0 ; i<q ; i++){
       std :: cin >> type >> name;
       
       if( type == 1){
        std :: cin >> marks;
        student_marks[name] += marks;
        }
       else if ( type == 2){
        student_marks.erase(name);
        }
       else if ( type ==3){
        if( student_marks.find(name) != student_marks.end()){
            std :: cout << student_marks[name] << endl;
        }
        else{
            std :: cout << 0 << endl;
        }
       }  
    }
    return 0;
}

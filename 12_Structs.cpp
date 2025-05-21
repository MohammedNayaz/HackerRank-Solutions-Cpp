#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

struct Student{
    int age, std;
    string f_name, l_name;    
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student s;
    std::cin>>s.age>>s.f_name>>s.l_name>>s.std;
    std::cout<<s.age<<" "<<s.f_name<<" "<<s.l_name<<" "<<s.std;
    return 0;
}

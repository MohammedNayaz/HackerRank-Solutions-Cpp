#include <cmath>
#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age, std;
        string f_name, l_name; 
    public:
    
    void set_age(int a){age=a;}
    int get_age()const {return age;}
    
    void set_first_name(string b){f_name=b;}
    string get_first_name(){return f_name;}
    
    void set_last_name(string c){l_name=c;}
    string get_last_name(){return l_name;}
    
    void set_standard(int d){std = d;}
    int get_standard(){ return std;}
    
    string to_string(){
        std::stringstream ss;
        ss<<age<<","<<f_name<<","<<l_name<<","<<std;
        return ss.str();
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
    
    int age, std;
    string f_name, l_name;
    
    std::cin>>age>>f_name>>l_name>>std;
    
    s.set_age(age);
    s.set_first_name(f_name);
    s.set_last_name(l_name);
    s.set_standard(std);
     
    cout<<s.get_age() <<endl<<s.get_last_name()<<", "<<s.get_first_name()<<endl<<s.get_standard()<<endl<<endl<<s.to_string();
    
    return 0;
}

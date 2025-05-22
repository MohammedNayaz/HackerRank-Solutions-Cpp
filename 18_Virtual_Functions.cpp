#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int age;
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
        
};

class Professor : public Person{
    private:
        int cur_id, publications;
        static int count;
        
    public:
    
        Professor(){cur_id = ++count;}
        
        void getdata(){
            cin>> name >> age >> publications;
        }
        void putdata(){
            cout << name <<" " << age <<" " << publications << " " << cur_id << endl;
        }
};
int Professor:: count = 0;

class Student : public Person{
    private:
        vector<int> marks; 
        int cur_id;
        static int count;
    public:
    
        Student(){
            cur_id = ++count;
            marks.resize(6);
        }
        
        void getdata() {
            cin >> name >> age ;
            for (int i =0; i<6 ; i++){
                cin>> marks[i];
            }
        }
        void putdata() {
            int t_marks=0;
            for (int mark : marks){
                t_marks += mark;
            }
            cout << name <<" "<< age <<" "<< t_marks << " " << cur_id <<endl;
        }
    
};
int Student :: count = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box{
    private:
        int length, breadth, height;
    public:  
        Box() :length(0),breadth(0),height(0){}
        
        Box(int l, int b, int h): length(l), breadth(b), height(h) {}
            
        Box(const Box& other) : length(other.length), breadth(other.breadth), height(other.height) {}
        
        int getLength() const {return length;}
        int getBreadth() const {return breadth;}
        int getHeight() const {return height;}
        
        long long CalculateVolume() const{
            return static_cast<long long>(length)*breadth*height;
        }
        
        bool operator<(const Box& other){
            if(length < other.length){return true;}
            else if (length == other.length && breadth < other.breadth) {return true;}
            else if (length == other.length && breadth == other.breadth && height == other.height) {return true;}
            else return false;
        }
        
        friend std::ostream& operator<<(std::ostream& os, const Box& box){
            os << box.length << " " << box.breadth << " " << box.height;
            return os; 
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    Box b1;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<b1<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            b1=NewBox;
            cout<<b1<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<b1){cout<<"Lesser"<<endl;}
            else{cout<<"Greater"<<endl;}
        }
        if(type==4){cout<<b1.CalculateVolume()<<endl;}
        if(type==5)
        {
            Box NewBox(b1);
            cout<<NewBox<<endl;
        }
    }
    return 0;
}










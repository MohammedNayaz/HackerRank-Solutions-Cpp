#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

class Rectangle{
    public:
        int width, height;
        void read_input(){
            std :: cin >> width >> height;
        }
        void display(){
            std:: cout << width <<" "<< height <<endl;
        }
};

class RectangleArea : public Rectangle {
    public:
    void display(){
            std:: cout << width * height;
        }  
};
int main() {
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();
    
    return 0;
}

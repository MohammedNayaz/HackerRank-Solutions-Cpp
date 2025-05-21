#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

class Student{
    private:
        vector<int> scores;
    public:
        void input(){
            for(int i=0 ; i<5 ; i++){
                int score;
                std::cin>>score;
                scores.push_back(score);
            }            
        }
        
        int calculateTotalScore() const{
            int sum=0;
            for(int score : scores){sum += score;} 
            return sum;
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count=0;
    std::cin>>n;
    vector<Student> st(n);
    
    for(int i=0 ; i<n ; i++){st[i].input();}
    
    int st_score = st[0].calculateTotalScore();
    
    for(int i=1; i<n; i++){
        if (st[i].calculateTotalScore() > st_score){
            count++;
        }
    }
    cout<<count;
    return 0;
}

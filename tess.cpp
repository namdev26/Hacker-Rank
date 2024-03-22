#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    int p1,p2 ,p3, p4, p5;
public:
    void input (int p1,int p2,int p3,int p4,int p5){
        this->p1=p1;
        this->p2=p2;
        this->p3=p3;
        this->p4=p4;
        this->p5=p5;
    }
    int CalculateTotalScore(){
        int sum =0;
        sum = this->p1 + this ->p2 + this->p3+this->p4 + this ->p5;
        return sum;
    }
};

int main (){
    int t; cin >> t;
    int p1,p2 ,p3, p4, p5;
    int count =0;
    cin >> p1 >> p2 >> p3 >> p4 >> p5;
    Student Kirten ;
    Kirten.input(p1,p2,p3,p4,p5);
    Kirten.CalculateTotalScore();
    for ( int i =1; i <= t-1; i++){
        Student others;
        cin >> p1 >>p2 >> p3 >> p4 >> p5;
        others.input(p1,p2,p3,p4,p5);
        others.CalculateTotalScore();
        if (others.CalculateTotalScore() > Kirten.CalculateTotalScore()) count ++;
    }
    cout << count << endl;

}
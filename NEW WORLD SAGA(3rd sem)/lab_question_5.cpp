#include<iostream>
using namespace std;

class Shape{
    int x,y;
public:
    double area(double side){
        return side*side;
    }
    double area(double l, double b){
        return l*b;
    }
};

int main(){
    
    return 0;
}
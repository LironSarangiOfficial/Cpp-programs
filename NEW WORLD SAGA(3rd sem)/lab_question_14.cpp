#include<iostream>
using namespace std;

class Container{
protected:
    double side;
public:
    virtual int volume() = 0;
};

class Sphere: public Container{

};

class Cube: public Container{
public:
    
};

int main(){
    
    return 0;
}
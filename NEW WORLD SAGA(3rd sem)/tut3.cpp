#include<iostream>
using namespace std;

class BaseClass{
public:
    int var_base = true;
    virtual void display(){
    // void display(){
        cout << "Displaying var_base: " << var_base << endl;
    }
};

class DerivedClass: public BaseClass{
public:
    int var_derived = 22;
    void display(){
        cout << "Displaying var_base: " << var_base << endl;
        cout << "Displaying var_derived: " << var_derived << endl;
    }
};

int main(){
    BaseClass* base_class_pointer ;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
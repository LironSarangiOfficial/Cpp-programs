/*
#include<iostream>
using namespace std;

void swap(int &a,int &b);

int main(){
    int a=3,b=5;
    swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}


void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
*/

#include<iostream>
using namespace std;

class Demo1{
    int a;
public:
    int b;
    void set_val(int,int);
    void set_val();
    void display(){
        cout << "a = " << a << ", b = " << b << endl;
    }
};

void Demo1::set_val(){
    cin >> a >> b;
}



int main(){
    Demo1 A;
    A.set_val();
    A.display();
    return 0;
}
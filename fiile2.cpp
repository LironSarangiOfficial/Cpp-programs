#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* b = &a;

    int** c = &b;

    cout<<"ADDRESS AT B: "<<c<<endl<<" address at a: "<<b<<endl;
    return 0;
}
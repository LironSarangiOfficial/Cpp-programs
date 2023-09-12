#include<bits/stdc++.h>

using namespace std;

int & switchvar(int & a, int & b){
    int temp = a;
    a=b;
    b=temp;
    return a;
}


int main(){
    int x=10,y=20;
    cout<<"This is the value of x:  "<<x<<endl<<" and this is the value of y: "<<y<<endl;
    switchvar(x,y);
    cout<<"This is the value of x:  "<<x<<endl<<" and this is the value of y: "<<y<<endl;
    switchvar(x,y)=100;
    cout<<"This is the value of x:  "<<x<<endl<<" and this is the value of y: "<<y<<endl;
    system("pause");
    return 0;
}
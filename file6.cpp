#include<bits/stdc++.h>

using namespace std;

void swapreference(int &a,int &b){
    int temp =a;
    a = b;
    b = temp;
}

int main(){
    int x=4,y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapreference(x , y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}
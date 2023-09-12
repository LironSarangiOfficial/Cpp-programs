// #include<iostream>
// #include<string>
// #include<cmath>
// using namespace std;

// // double exp(int n1,int n2){
// //     double ans = 1;
// //     do{
// //         ans *= n1;
// //     } while (n2--);
// //     return ans;
// // }

// // void swap(int *a, int *b){
// //     int t = *a;
// //     *a = *b;
// //     *b = t;
// // }

// void swap(int &a, int &b){
//     int t = a;
//     a = b;
//     b = t;
// }

// int main(){
//     // int n1=10,n2=20;
//     // cin >> n1 >> n2;
//     // cout << pow(n1,n2) << endl;
//     // cout << n1 << " " << n2 << endl;
//     // swap(n1,n2);
//     // cout << n1 << " " << n2 << endl;
//     // int &n3 = n1;
//     // // cout << n1 << endl;
//     // n3 = 30;
//     // n1 = 25;
//     // cout << n1 << "  " << n3 << endl;
//     return 0;
// }

// Lab question 2
#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
protected:
    int a,b,c;
public:
    void setdata(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void printArea(){
        double s = (a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Area: " << area << endl;
    }
};

int main(){
    
    return 0;
}
/* Hello There,
             I am the creator and the Author of this file called "one-shot_C++.cpp".
I had a very difficult time studying c++ by searching on YouTube and different websites like "GeeksforGeeks" and more of that later..... .
I have created this file along with the path that I follow during my learning process and in hope that somebody finding this file after
me can benifit from it in the futu....  OHH!! How rude of Me!....

    Myself Liron Sarangi........ I know I know , a very peculiar name among the Indians..... But that is not the point I
was gonna state here....

    As I was saying.. my utmost objective is that I track down my learning process so that anybody can benifit from this file if
he or she can follow the comments and the code following that to get a good hold of the concepts like pointers...(duh...)
and also classes and objects...(interesting..)

    It starts from the basic concept of variables, iterations, loops, statements, header files, etc....   including a fun game in between
all the way to classes and objects .... . However, Data structures and Algorithms will be out of the scope of this file as this file is
intended for only revision purposes (for those who have learnt and forgotten) and learning the basic concepts of the language to start out
with another section of this Huge world of Programming

    I think I have wasted enough of your time already.... so without any further ad0,

    L            EEEEEEEEE   TTTTTTTTTTTT  "  SSSSSSSSSS              GGGGGGGGGGG       OOOOOOO            !!!
    L            E                T        "  S                      G                 O       O           !!!
    L            E                T        "  S                     G                 O         O          !!!
    L            EEEEEEEEE        T           SSSSSSSSSS            G      GGGGG      O         O          !!!
    L            EEEEEEEEE        T                    S            G          G      O         O          !!!
    L            E                T                    S             G         G      O         O          !!!
    L            E                T                    S              G        G       O       O           !!!
    Llllllllllll EEEEEEEEE        T           SSSSSSSSSS               GGGGGGGGG        OOOOOOO            !!!

                                                                                                          !!!!!
                                                                                                          !!!!!

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int a =3;
// do
// {
//     cout<<"Hello World!!"<<endl;
//     cout<<"a="<<a<<endl;
//     a--;
// } while (a);
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// int main(){
// int run = 1;
// while (run==1){
//     int strength;
//     cout<<"Please select and enter a strength value (chakra level) from the following:-\n";
//     cout<<"[10, 40, 95, 200, 2000, 10000, 70707]\n";
//     cout<<"---->  ";
//     cin>>strength;
//     switch (strength){
//         case 10:
//             cout<<"You're at the In-Training Stage of Evolution\n\n\n";
//             break;
//         case 40:
//             cout<<"You've Evolved into the Rookie Power Level\n\n\n";
//             break;
//         case 95:
//             cout<<"Mega Evolution Successful!!\nTraining Zone for Ultimate Morph Unlocked! SuperUser access granted!!\n\n\n";
//             break;
//         case 200:
//             cout<<"Congratulations on achieving Enlightened Apprentice Level!\n This enables you to control the elements , namely\n1. Fire\n2. Water\n3. Earth\n4. Ether\n5. Wind\n6. Energy\n\n\n";
//             break;
//         case 2000:
//             cout<<"Ultimate Morphed! Invincibility Unlocked !!\nYou are now capable of Controlling the elements \n7.Metal \n8.Light \n9.Dark\n\n\n";
//             break;
//         case 10000:
//             cout<<"Super Saiyan God Mode Transformation Complete...!\nYou Really seem to have the potential of Becoming the greatest Hero of all-time!!Elemental Control Added--\n10. Yin\n11. Yang\n12. Ability of Creation and Formation awakened!!\n\n\n";
//             break;
//         case 70707:
//             cout<<"Congratulations on reaching the HYPER-PHENOMAL stage of development!\nYou can now perform Sannin-Hokage Level Jutsu With 150 percent perfection !!!\nElemental control added --\t\t13.TIME AND SPACE\n\n\n";
//             break;
//         default:
//             cout<<"Not a correct option. Please choose again\n\n\n";
//             break;
//     }
//     cout<<"Wanna Check again?\t[0 for no]\t[1 for yes]\n";
//     cin>>run;
// }
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// int main(){
// int r=1;
// while (r=1){
//     cout<<"Hello there! This is test"<<endl;
//     cin>>r;
// }
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// You cannot print the array like python with just print(list) or cout<<list;  , You need to run a loop and iterate through each element and print it seperately..

// int main(){
// int arr[5] = {10,20,30,40,50};
// int* p = arr;
// cout<<p<<endl;
// p++;
// cout<<p<<endl;
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// Here we learn about the pointers and arrays. In an array , the variable name of the array is used as address which stores the address of the first element of the array.
// IT IS NOT A POINTER (and therefore cannot be used in pointer arithmetic) but it can act as one. If we dereference the value from the variable name of the array, it will give us the value of the first element (Of course there are other ways to get the first element of an array).

// int main(){
// int t[8] = {1,3,5,7,9,11,13,15};
// int* tp=t;
// cout<<tp<<"  <>  "<<*tp<<"  <>  "<<&tp<<endl;
// tp++;
// cout<<tp<<"  <>  "<<*tp<<"  <>  "<<&tp<<endl;
// int** tpp = &tp;
// cout<<tpp<<endl;
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// Now let's talk about incrementing a pointer and some real life pointer application

// ^1
// wrong function
// void increment(int x){
//     x++;
// }
// right function
// void increment(int* x){
//     (*x)++;
// }

// int main(){
//^1
// int a=2;
// cout<<"value of A is "<<a<<endl;
// increment(a);                          // Pass by value , meaning only the value is given to function and not the actual variable
// cout<<"value of A is "<<a<<endl;
// increment(&a);                         // Pass by reference , meaning the actual variable's address has been passed and any evaluation will be performed upon the original vairable
// cout<<"value of A is "<<a<<endl;
// return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

//  ^2
// inline int product(int a, int b){
//     return a*b;
// }

// auto start = chrono::steady_clock::now();
// int main(){
//     // Inline Functions : It is not recommended to use inline functions when 1. Recursion is used inside the function  2. static variables are being used inside the function 3. whenever the code inside the function is too large to be replaced by the actual function 4. when the input data is too big in order to replace the function call by the actual function

//     int a,b;
//     cout<<"please enter the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<endl;
//     auto end = chrono::steady_clock::now();
//     auto diff = end - start;
//     cout<< "Runtime: ";
//     cout << chrono::duration<float, milli>(diff).count() << " ms" << endl;
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include <bits/stdc++.h>
// using namespace std;
// auto start = chrono::steady_clock::now();
// int hcf(int a,int b)
// {
//     if (b>a){
//         int temp = a;
//         a=b;
//         b=temp;
//     }
//     int Q=a,R=a;
//     while(R){
//         Q=a/b;
//         R=a%b;
//         a=b;
//         b=R;
//     }
//     return a;
// }
// int main()
// {
// 	int t;
// 	cin>>t;
// 	for(int a=0;a<t;a++)
// 	{
// 	    int n,count=0;
// 	    cin>>n;
// 	    int A[n];
// 	    for(int f=0;f<n;f++)
// 	    {
// 	        cin>>A[f];
// 	    }
//         for (int j=1;j<=n;j++)
//         {
//             for (int i=1;i<j;i++)
//             {
//                 int gcd = hcf(A[i-1],A[j-1]);
//                 if (gcd == A[i-1]*A[j-1]/gcd){
//                     count += 1;
//                 }
//             }
//         }
//         cout<<count<<endl;
// 	}
// 	return 0;
// }

// for _ in range(int(input())):
//     n = int(input())
//     count = 0
//     arr = list(map(int, input().split(" ")))
//     for j in range(1,n+1):
//         for i in range(1,j):
//             gcd = hcf(arr[i-1],arr[j-1])
//             if gcd == arr[i-1]*arr[j-1]//gcd:
//                 count += 1
//     print(count)

//_________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b, c;
// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "The value a of " << a << endl;
//         cout << "The value b of " << b << endl;
//         cout << "The value c of " << c << endl;
//         cout << "The value d of " << d << endl;
//         cout << "The value e of " << e << endl;
//     }
// };
// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main()
// {
//     Employee harry;
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(2, 4, 8);
//     harry.getData();
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include <bits/stdc++.h>
// using namespace std;
// class Employee
// {
//     int id;
//     int salary;
// public:
//     void setId(void)
//     {
//         salary = 122;
//         cout << "Enter the id of employee " << endl;
//         cin >> id;
//     }
//     void getId(void)
//     {
//         cout << "The id of this employee is " << id << endl;
//     }
// };
// int main()
// {
//     Employee Infosys[4];
//     for (int i = 0; i < 4; i++)
//     {
//         Infosys[i].setId();
//         Infosys[i].getId();
//     }
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include <iostream>
// using namespace std;
// class Complex;
// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumRealComplex(Complex, Complex);
// };
// class Complex
// {
//     int a, b;
//     friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "Your number is " << a
//          << " + " << b << "i" << endl;
//     }
// };
// int Calculator ::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// };
// int main()
// {
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//         Complex(int a1, int b1);
//         void printnumber(){
//             cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// Complex :: Complex (int a1, int b1){
//     cout<<"Please give the real and imaginary part of the complex number:-"<<endl;
//     cin>>a>>b;
//     // a = a1;
//     // b = b1;
// }
// int main(){
//     Complex c1 (2,3);
//     c1.printnumber();
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include <bits/stdc++.h>
// using namespace std;
// class Point
// {
//     int x, y;
// public:
//     Point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void dispP()
//     {
//         cout << "(" << x << ", " << y << ")";
//     }
//     friend double P_dist(Point A, Point B);
// };
// double P_dist(Point A, Point B)
// {
//     return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
// }
// int main()
// {
//     Point P(1, 1), Q(4, 5);
//     cout << "The distance between points ";
//     P.dispP();
//     cout << " and ";
//     Q.dispP();
//     cout << " is " << P_dist(P, Q);
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// The compiler by default makes it's own copy constructor if you do not provide it with one. Whenever an object of a class is being created, the copy constructor is being called, but not when a curently present object is having itself made a copy of another object by an assignment operator.
// Example:-  Number z(45), z1;
// z1 = z;       This case will not call the Copy Constructor
// #include<bits/stdc++.h>
// using namespace std;
// class Number
// {
//     int a;
//     public:
//         Number(){}
//         Number(int num)
//         {
//             a = num;
//         }
//         Number(Number &obj)
//         {
//             a = obj.a;
//         }
//         void display(){
//             cout<<"The number for this object is "<< a << endl;
//         }
// };
// int main(){
//     Number x,y,z(45);
//     x.display();
//     y.display();
//     z.display();
//     // z1 should exactly resemble z or x or y
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

// #include<iostream>
// using namespace std;
// // Base Class
// class Employee
// {
// public:
//     int id;
//     float salary;
//         Employee(int inpId){
//             id = inpId;
//             salary = 34.0;
//         }
//         Employee(){};
// };
// // Derived Class syntax
// /*class {{derived-class-name}} : {{visibility-mode = [private]}} {{base-class-name}}
// {
//     class members/methods/etc....
// }
// */
// class Programmer : Employee {
//     public:
//         Programmer(int inpId){
//             id = inpId;
//         }
//         int languageCode = 9;
// };
// int main(){
//     Employee harry(1), rohan(2);
//     cout<<harry.salary<<endl;
//     cout<<rohan.salary<<endl;
//     Programmer Liron(1);
//     return 0;
// }

// _________________________________________X___X___X___X___X___X___X______________________________________________________________________

#include<iostream>
using namespace std;
class SimpleCalc
{
protected:
    int a,b;
    int add()
    {
        return (a+b);
    }
    int subtract()
    {
        return (a-b);
    }
    int multiply()
    {
        return (a*b);
    }
    int divide()
    {
        return (a/b);
    }
public:
    void do_op_simple()
    {
        while (true)
        {

        }
    }
};
class ScientificCalc
{
protected:
    int p,q;
public:
    void do_op_scientific()
    {
        while (true)
        {
            
        }
    }
};
class HybridCalc : public SimpleCalc, public ScientificCalc
{

};
int main(){
    
    return 0;
}
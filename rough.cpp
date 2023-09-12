/*
This is only for testing and rough work purposes

*/


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s = "Eternal Mangekyou Sharingan";
//     int l = s.length();
//     for (int i=0;i<l;i++)
//     {
//         cout<<s[i];
//     }
//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <sstream> // this will allow you to use stringstream in your program

// using namespace std;

// int main() {
//     //create a stringstream object, to input/output strings
//    stringstream ss; 
   
//    // a variable named str, that is of string data type
//    string str = "7";
   
//    // a variable named num, that is of int data type
//    int num;
   
   
//    //extract the string from the str variable (input the string in the stream)
//    ss << str;
   
//    // place the converted value to the int variable
//    ss >> num;
   
//    //print to the consloe
//    cout << num << endl; // prints the intiger value 7
// }


#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};

int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}
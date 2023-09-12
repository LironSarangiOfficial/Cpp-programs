#include<iostream>
#include<vector>
#include<stack>


using namespace std;

class Employee{
    int emp_id;
    double emp_salary;
    int age;
public:
    Employee(){}

    // Employee(int id,double sal){
    //     this->emp_id = id;
    //     this->emp_salary = sal;
    //     this->age = 25;
    // }

    Employee(int emp_id,double sal,int age = 25){
        this->emp_id = emp_id;
        this->emp_salary = sal;
        this->age = age;
    }
    // void setData(int id,double salary){
    //     emp_id = id;
    //     emp_salary = salary;
    // }


    // Employee(Employee &obj){
    //     cout << "Ore wa, Copy Constructa da!\n";
    //     emp_id = obj.emp_id;
    //     emp_salary = obj.emp_salary;
    // }
    ~Employee(){/* cout << "\n!!!!\nDestruct\n!!!!\n";*/}
    friend void increment(Employee&, double);
    void print(){
        cout << "ID: " << emp_id << endl << "Salary: " << emp_salary << endl;
    }
};

// int apple(int a, int b);
// int apple(int x,int y, int z);


void increment(Employee &emp,double f){
    emp.emp_salary += f*emp.emp_salary;
}

int main(){
    // cout << fact(10) << endl;
  
    // Employee kunal(10,14000.23),vishal(13,21284.442),murad;
    // // Employee kunal;
    // // kunal.setData(10,14000);
    

    // Employee suhel(kunal);  
    // suhel.print();
    // kunal.print();


    // vector<int> v1;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << "->";
    // }
    // stack<int> st;
    // st.push(3);
    // st.push(5);
    // st.push(7);

    // while (st.empty() != true)
    // {
    //     cout << st.top() <<endl;
    //     st.pop();
    // }
    

    return 0;
}
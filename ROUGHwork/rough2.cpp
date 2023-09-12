#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator{
    protected:
        int a,b;
    public:
        SimpleCalculator(){}
        SimpleCalculator(int o1,int o2){
            a = o1;
            b = o2;
        }
        int add(){
           return (a+b);
        }
        int subtract(){
            return (a-b);
        }
        int multiply(){
            return (a*b);
        }
        float divide(){
            return ((float)a/(float)b);
        }
        void display(){
            cout<< "Addition: " << add() << endl
                << "Subtraction: " << subtract() << endl
                << "Multiplication: " << multiply() << endl
                << "Division: " << divide() << endl;
        }
};
class ScientificCalculator{
    protected:
        int number;
    public:
        ScientificCalculator(){}
        ScientificCalculator(int num){
            number = num;
        }
        float sinC(){
            return sin(number);
        }
        float cosC(){
            return cos(number);
        }
        float expC(){
            return exp(number);
        }
        float logtenC(){
            return log10(number);
        }
        void display(){
            cout<< "sin("<< number << ") = " << sinC() << endl
                << "cos("<< number << ") = " << cosC() << endl
                << "e raised to the power of "<< number << " = " << expC() << endl
                << "log base 10 of "<< number << " = " << logtenC() << endl;
        }
};


class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    public:
        HybridCalculator(int x,int y,int z){

        }
        void Simpledisplay(){
            SimpleCalculator :: display();
        }
        void Scientificdisplay(){
            ScientificCalculator :: display();
        }
};


int main(){
    HybridCalculator calc(1,2);
    calc.display();
    return 0;
}
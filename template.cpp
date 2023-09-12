#include<iostream>
using namespace std;

class vector{
    public:
        int *arr;
        int size;
        vector(int m){
            size = m;
            arr = new int[size];
        }
        int dotProduct(vector &v){
            int d=0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
            
        }
};

int main(){
    vector v1(4),v2(4);
    for (int i = 0; i < 4; i++)
    {
        int item; cin >> item;
        v1.arr[i] = item;
    }
    for (int i = 0; i < 4; i++)
    {
        int item; cin >> item;
        v2.arr[i] = item;
    }
    

    cout << v1.dotProduct(v2) << endl;

    return 0;
}
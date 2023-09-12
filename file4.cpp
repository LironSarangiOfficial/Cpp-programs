#include<bits/stdc++.h>

using namespace std;

int main()
{
    int marks[] = {10,20,30,400};
    int* p = marks;
    // for(int i=0;i<4;i++)
    // {
    //     cout<<p<<"\t\t\t"<<p[i]<<endl;
    // }
    for(int i=0;i<4;i++)
    {
        cout<<*p<<endl;
        p++;
    }


    return 0;
}


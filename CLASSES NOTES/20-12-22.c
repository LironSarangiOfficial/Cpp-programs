// #include<stdio.h>
// int main(){
//     printf("2");
//     for(int i=3;i<=100;++i)
//     {
//          if primechk(i) 
//              printf("%d\n",);

//     }
//     return 0;
// }

// #include<stdio.h>
// int primechk(int n)
// {
//     for (int i = 2; i <= n/2; ++i)
//     {
//         if (n%i == 0) return 0;
//         // else return 1;
//     }
//     return 1;
// }

// int main(){
//     int x = primechk(49);
//     printf("%d",x);
//     return 0;
// }

int fact(n)
{
    if (n==1) 
        return 1;
    else 
        return n*fact(n-1);
}


// Fibonacci function
int Fibo(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    return Fibo(n-1) + Fibo(n-2);
}

#include<stdio.h>
int main(){
    // RECURSIVE FUNCTIONS


    // PRINT NTH FIBONACCI NUMBER  
    // int n=10; int F0 = 0, F1 = 1, Fn;
    // for(int i=2;i<=n;++i)
    // {
    //     Fn = F1 + F0;
    //     F0 = F1;
    //     F1 = Fn;
    // }
    // printf("Fn = %d",Fn);

    // Now using Recursive Functions 
    // int n=8;
    // printf("F(%d) = %d",n,Fibo(n));

    // order of execution 
    /*
    Fibo(8)
    Fibo(7)
    Fibo(6)
    Fibo(5)
    Fibo(4)
    Fibo(3)
    Fibo(2)
    Fibo(1)
    Fibo(0)
    Then the respective functions call the respective functions
    */

    // Arrays
    /*
    IT IS A COLLECTION OF DATA HAVING SAME DATA TYPES
    THEY THEY OCCUPY SPACE IN CONTIGUOUS MEMORY LOCATION
    2000 2004 2008 2012 ....
    [  ] [  ] [  ] [  ]   ....
    */
    int x[5];
    char p[3];





    return 0;
}
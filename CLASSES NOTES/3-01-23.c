/*
An array is a series of elements
int A[size]; is an array of size "size".
It can also be declared as
double X[10];
char arr[5];


input can be taken in dynamic form as follows: 

int A[10];

for(int i=0;i<10;++i)
{
    scanf("%d",&A[i]);
}

This will dynamically insert all the elements of the array into the array directly

__________2-DIEMNSIONAL-ARRAY__________________

declared like: int A[2][3];

*Contiguous memory locations*

A[0][0] --->  2000(addresses)
A[0][1] --->  2004(addresses)
A[0][2] --->  2008(addresses)
A[1][0] --->  2012(addresses)
A[1][1] --->  2016(addresses)
A[1][2] --->  2020(addresses)

___________ARRAY-IN-FUNCTIONS__________________


func(size_t arr[], int n);      HERE N IS the size of the array , arr[] is the array

for more than one array 

func(size_t arr1[],size_t arr2[],size_t arr3[],int n);


EXAMPLE:
    int maxA(int A[], int n)
    {
        int mx = A[0];
        for(int i=1;i<n;++i)                 // A[0] nahi , usko to le liya, already taken;
        {
            if (A[i]>mx)
                mx = A[i];
        }
        return mx;
    }

*/


/*
# WAP TO ADD TWO VECTORS (ARRAYS)

#include<stdio.h>

int addV(int A[],int B[], int C[],int);

int main(){
    int A[10],B[10],C[10];
    int i,m;
    printf("Enter array: ");
    for(int i=0;i<10;++i)
        scanf("%d",&A[i]);

    for(int i=0;i<10;++i)
        scanf("%d",&B[i]);
    
    addV(A,B,C,10);

    for(int i=0;i<10;++i)
        printf("%d",C[i]);
    return 0;
}

int addV(int A[],int B[], int C[],int){
    for(int i=0;i<n;++i)
        C[i] = A[i] + B[i];
}

# WAP TO 
        I. do matrix addition
        II. do matrix multiplication
        III. calculate transverse of a matrix 

KHUD KARNA !!

*/


#include<stdio.h>

int maxA(int A[],int);

int main(){
    int A[10];
    int i,m;
    printf("Enter array: ");
    for(i=0;i<10;++i)
        scanf("%d",&A[i]);

    m = maxA(A,10);
    printf("max = %d",m);
    return 0;
}

int maxA(int A[], int n)
{
    int mx = A[0];
    for(int i=1;i<n;++i)                 // A[0] nahi , usko to le liya, already taken;
    {
        if (A[i]>mx)
            mx = A[i];
    }
    return mx;
}
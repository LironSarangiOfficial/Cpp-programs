/*
SEARCH AN ELEMENT IN AN 1D ARRAY:
    IF FOUND --> RETURN THE INDEX OF THE ELEMENT
    IF NOT FOUND --> RETURN -1

*/

/*
#include<stdio.h>

int lsearch(int A[],int,int);


int main(){
    int arr[10];
    return 0;
}

int lsearch(int A[], int n,int x)
{
    for(int i=0;i<n;++i)
    {
        if (A[i] == x)
            return i;
         
        return -1;
    }
}
*/


// WAP TO ENTER AN ARRAY, SEPERATE ODD ELEMENTS IN AN ARRAY AND EVEN ELEMENTS IN A SEPERATE ARRAY
/*
#include<stdio.h>
int main(){
    int Arr[10], odd[10],oddi=0, even[10],eveni=0;
    for(int i=0;i<10;++i)
    {
        scanf("%d",&Arr[i]);
    }
    for(int i=0;i<10;++i)
    {
        if (Arr[i]%2 == 0){
            even[eveni] = Arr[i];
            eveni++;
        }   
        else{
            odd[oddi] = Arr[i];
            oddi++;
        }

    }
    return 0;
}
*/



// SORT THE ELEMENTS OF THE ARRAY


/*
BUBBLE SORT  O(n^2)
        PLACE THE ELEMENTS VERTICALLY 
        START COMPARING FROM BOTTOM
        IF BOTTOM ELEMENT OF THE TWO ADJACENT ELEMENTS IS SMALLER, SWAP THEM
        OR ELSE DO NOT SWAP
*/

// #include<stdio.h>
// int main(){
//     int A[10],n;

//     // sorting algorithm
//     for(int i=0;i<n-1;++i)
//     {
//     int flag=0
//         for(int j=n-1;j>i;--j)
//         {
//             if (A[j] < A[j-1]){
//                 int temp = A[j];
//                 A[j] = A[j-1];
//                 A[j-1] = temp;
//             }
//         }
//     if (flag==0)
//         break;
//     }
//     
//     return 0;
// }





/*
INSERTION SORT

        SELECTING A NEW ELEMENT FROM THE ARRAY EACH TIME AND INSERTING IN THE TEMPORARILY SORTED ARRAY
*/

/*
#include<stdio.h>
int main(){
    int n; scanf("%d",&n);

    for(int i=0;i<n;++i)
    {
        int t=A[i];
        for(int j=i-1;j>=0;--j)
        {
            if(A[j]>t)
                A[j+1] = A[j];
            else 
                break;
        }
    }
    return 0;
}
*/
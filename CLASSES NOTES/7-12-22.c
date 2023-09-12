// print the following patterns
/*
1.
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

answer code:
#include<stdio.h>
int main(){
    int n,count; scanf("%d",&n);
    count = n;
    while(count--)
    {
        for(int j=1;j<=n;++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

------x------

2.
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

answer code:
#include<stdio.h>
int main(){
    int n,count; scanf("%d",&n);
    count = n;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

------x------

3.
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

answer code:
#include<stdio.h>
int main(){
    int n,count; scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<=n-i;++j)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}

------x------

4.
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

answer code:
#include<stdio.h>
int main(){
    int n,count; scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<i;++j)
        {
            printf("  ");
        }
        for(int j=n-i;j>0;--j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

-----x-----

5.
1 2 3 4 5 4 3 2 1
  2 3 4 5 4 3 2
    3 4 5 4 3
      4 5 4
        5

6.
    *
   * *
  * * *
 * * * *
* * * * *

7.
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

/*without using math library, Find the value using power series (taylor series), upto accuracy 0.00001*/

// #include<stdio.h>
// int main(){
//     int n; scanf("%d",&n);
//     for(int i=0;i<n;++i)
//     {
//         for(int j=0;j<i;++j)
//         {
//             print("  ");
//         }
//         for(int j=i+1;j<=n;++j)
//         {
//             printf("%d",j);
//         }
//         for(int j=n-1;j>i;--j)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    char ch;
    for(ch=1;ch<=128;ch++)
    {
        printf("%d\t",ch);
    }
    return 0;
}






/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
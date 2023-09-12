/*
POINTERS FOR AN ARRAY


*/


#include<stdio.h>
#include<string.h>

char * strrev(char *s);

int main()
{
    // int A[5];
    // int *p = A;
    // // for printing the address and the value at address respectively
    // for(int i=0;i<5;++i)
    // {
    //     printf("%u",p);
    //     printf("%d",*p);
    // }

    // int A[5];

    // int *p = &A;

    // for (int i = 0; i < 2; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         printf("%u", *(p + i) + j);
    //         printf("  ");
    //     }
    // }
    // printf("\n");
    // for (int i = 0; i < 2; ++i)
    // {
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         printf("%u", *(A + i) + j);
    //         printf("  ");
    //     }
    // }

    // int i = 1;
    // printf("%u\n", A);
    // printf("%u\n", *A);
    // printf("%u\n", (A + i));
    // printf("%u\n", *(A + i));

    // char str[10];
    // char *s;
    // s = str;

    char *r;
    char name[] = "India";
    r = strrev(name);
    printf("%s",r);
    return 0;
}

char* strrev(char *str)
{
    char* r; int l = strlen(str); int i;
    for(i=0;i<l/2;i++)
    {
        r[i] = str[l-i-1];
    }
    r[i] = '\0';
    return r;
}
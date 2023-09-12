#include <stdio.h>

/*
DEFINE A STRUCTURE time with hour, minute and second.
Enter two time t1 and t2 and display the sum
Minute and sec should not exceed 60.
*/

typedef struct time
{
    int hh;
    int mm;
    int ss;
} TIME;

void display(TIME x){
    printf("Time is %d:%d:%d",x.hh,x.mm,x.ss);
}


int main()
{
    TIME t1, t2,t3;
    printf("Enter time 1:\n");
    scanf("%d:%d:%d",&t1.hh,&t1.mm,&t1.ss);
    printf("Enter time 2:\n");
    scanf("%d:%d:%d",&t2.hh,&t2.mm,&t2.ss);

    t3.hh = t1.hh + t2.hh;
    t3.mm = t1.mm + t2.mm;
    t3.ss = t1.ss + t2.ss;

    if (t3.mm > 60)
    {
        t3.hh += t3.mm / 60;
        t3.mm %= 60;
    }
    if (t3.ss > 60)
    {
        t3.mm += t3.ss / 60;
        t3.ss %= 60;
    }
    display(t3);
    return 0;
}


/*

UNION
IF WE DEFINE UNION, it allocates the largest memory among the members. Only one variable can be assigned at a time. 
example
union  
*/
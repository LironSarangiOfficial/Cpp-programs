/*
-> Switch case is an alternative tool to if else ladder
-> syntax 
    switch (expr){
        case val1:
            body1;
        case val2:
            body2;
        case val3:
            body3;
        default:
            bodyn;
            break;
    }


example code:
                    int n;
                    scanf("%d",&n);
                    switch(n/10){
                        case 0:
                        case 1:
                        case 2:
                        case 3:
                            printf("F grade\n");
                            break;
                        case 4:
                        case 5:
                            printf("C grade\n");
                            break;
                        case 6:
                        case 7:
                            printf("B grade\n");
                            break;
                        case 8:
                        case 9:
                        case 10:
                            printf("A grade\n");
                    }
    
LOOPS :
    THERE ARE TWO TYPES OF LOOPS --> ENTRY CONTROLLED AND EXIT CONTROLLED WHILE LOOP
        ENTRY CONTROLLED: while loop
            initialization;
            while(conditino check)
            {
                body;
                increment/decrement;
            }
        
        ENTRY CONTROLLED: for loop
            for (initialization;condition check;increment/decrement)
            {
                body;
            }

    example: to print numbers from 1 to 100

    code:
            int i=1;
            while(i<=100)
            {
                printf("%d\t",i);
                i++;
            }
            printf("%d",i);                         // output will be 101

    code:
            int 1;
            for(i=1;i<=100;++i)
            {
                printf("%d\t",i);
            }
    code:
            int i=1;
            for(;;){
                printf("%d\t",i);
                i++;
                if(i>100) break;                          // this shows that entry controlled loop can also be treated as exit controlled loop. for loop does not need to have intialization, condition check, andincrement/decrement. 
            }

    
    EXIT CONTROLLED LOOP: do-while
    do{
        body;
    }while(condition check);

    code:
            int i=1;
            do{
                printf("%d\t",i);
                i++;
            }while(i<=100);


    CONTROL STATEMENTS:
        break: EXIT FROM THE LOOP
        continue: SKIP TO THE NEXT ITERATION
    

NESTING OF LOOPS
    for(int i=1;i<5;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("%d %d\t",i,j)
        }
        printf("\n");
    }


*/



// #include<stdio.h>
// int main(){
//         int n;
//     scanf("%d",&n);
//     switch(n/10){
//         case 0:
//         case 1:
//         case 2:
//         case 3:
//             printf("F grade\n");
//             break;
//         case 4:
//         case 5:
//             printf("C grade\n");
//             break;
//         case 6:
//         case 7:
//             printf("B grade\n");
//             break;
//         case 8:
//         case 9:
//         case 10:
//             printf("A grade\n");
//             break;
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int a=4,b=5;
    printf("%d",(a+b));
    return 0;
}


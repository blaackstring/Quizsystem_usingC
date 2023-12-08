

#include <stdio.h>
int main()
{int flag;
    printf("press  any key to start(in digits); \n");
    printf("enter 0 to quit\n");
    int x;
    scanf("%d", &x);
    if (x!=0)
    {
        
        printf("(Q1)who created the first mobile phone\n");
        printf("(1)  nokia\n");
        printf("(2)  samsung\n");

        printf("mark the option 1 or 2 ");
       
        scanf("%d", &x);
        if (x == 2)
        {
            printf("correct answer\n");
            flag=flag+5;
    
            printf("you got %d points\n",flag);
        }
        else
        {
            printf(" wrong answer\n");
             flag;
            printf("you got %d points\n",flag);
        }
        if (x == 2)
        {
            printf("(Q2) heat can flow from--------to---------\n");
            printf(" (1) lower to higher\n ");
            printf("(2)  higher to lower\n ");
            printf("mark the option 1 or 2 ");
        }
        scanf("%d", &x);
        if (x == 2)
        {
            printf("correct answer\n");
              flag=flag+5;
            printf("you got %d points\n",flag);
        }
        else
        {
            printf(" wrong answer\n");
            flag;
            printf("you got %d points\n",flag);
        }
        if (x == 2)
        {
            printf("(Q3) square of 2\n");
            printf("(1) four\n");
            printf("(2) six\n");
            printf("mark the option 1 or 2 ");
        }
    
        scanf("%d", &x);
        if (x == 1)
        {
            printf("correct answer\n");
            flag=flag+5;
            printf("you got %d points\n",flag);
        }
        else
        {
            printf("wrong answer\n");
            flag;
            printf("you got %d points\n",flag);
        }

        printf("designed by shahan ");
    }

    else
    {
        printf("gameover\n");
    }
}

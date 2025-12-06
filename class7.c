#include <stdio.h>

int main()
{
    int c,sum ,sub,x,y;
    printf("MENU 1.ADD 2.SUB 3.DIVISION 4.MULTIPLICATION");
    printf("enter thr choice of operation");
    scanf("%d", &c);
    switch (c)
    {
    case1:
        sum = x + y;
        printf("sum = %d", sum);
        break;
    case2:
        diff = x - y;
        printf("sub =%d", sub);
        break;
    default:
        printf("invalid choice");
        break;
    }
    return 0;
}

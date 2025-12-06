#include <stdio.h>
void add(int, int);
void main()
{
    int n1, n2;
    printf("enter the first number");
    scanf("%d", &n1);
    printf("enter the second number");
    scanf("%d", &n2);
    add(n1, n2);
}
add(int x, int y)
{
    int sum;
    sum = x + y;
    printf("the sum of these number is %d",x +y);
}


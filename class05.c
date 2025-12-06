#include <stdio.h>

int main()
{
    int length;
    int width;
    printf("enter the length");
    scanf("%d", &length);
    printf("enter the width");
    scanf("%d", &width);
    printf("the area of the reactangle is %d\n", length * width);
    printf("the perimeter of the reactangle is %d\n", 2 * (length + width));
    return 0;
}

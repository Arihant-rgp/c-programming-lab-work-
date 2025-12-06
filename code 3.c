#include <stdio.h>

int main()
{
    FILE*fp;
    fp = fopen("arihant.txt", "w");
    if (fp == NULL)
    printf("hello! how r u?")
    {
        printf("file is empty");
        return 0;
    }
    else
    {
        fgets("%s", 50, fp);
        fclose(fp);
    }
    return 0;
}

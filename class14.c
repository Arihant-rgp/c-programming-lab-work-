//Open an existing file and read its content character by character, and then close the file.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("siddharth3.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
   
    return 0;
}
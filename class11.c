#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello Mayank! This is your first file.\n");
    fclose(fp);
    printf("File created and text written successfully.\n");
    return 0;
}

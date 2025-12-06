//Write a program to create a new file and write text into it.

#include <stdio.h>

int main() {
    FILE *fp = fopen("siddharthp.txt", "w");

    if (fp == NULL) {
        printf("the file is empty");
        return 1; 
    }
   
    fprintf(fp, "hello how r u");

    fclose(fp); 
    return 0;
}

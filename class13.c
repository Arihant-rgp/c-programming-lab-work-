//Open a file, read its content line by line, and display each line on the console.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch[100]; 

    fp = fopen("siddharth2.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(ch, sizeof(ch), fp)) {
        printf("%s", ch); 
    }

    fclose(fp);
    return 0;
}

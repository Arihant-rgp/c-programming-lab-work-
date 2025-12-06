#include <stdio.h>
#include <string.h>
struct person{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[10];
    char state[20];
    int zip;
};
int main(){
struct person p1;
strcpy(p1.name, "Mayank");
strcpy(p1.home_address, "444/29 Tilak Nagar");
strcpy(p1.hostel_address, "Green View");
strcpy(p1.city, "Rohtak");
strcpy(p1.state, "Haryana");
p1.zip = 124001;

printf("name = %s\n", p1.name);
printf("home address = %s\n", p1.home_address);
printf("name = %s\n", p1.hostel_address);
printf("name = %s\n", p1.city);
printf("name = %s\n", p1.state);
printf("name = %d\n", p1.zip);

return 0  ;}

#include <stdio.h>
#include <string.h>

typedef struct try {
    int error : 1;
    int a;
} try;

int main() {
    try g;
    g.a = sizeof(try);  // store size in g.a
    g.error = 1;        // initialize bit-field

    printf("%d\n", g.a);
    printf("%d\n", g.error);

    return 0;
}




#include <stdio.h>

int main() {

    int x = 5;
    int *p = &x;
    printf("%d\n", x);
    printf("%d\n", *p);

    *p = 10;
    printf("%d\n", x);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "systems";

    printf("%s", name);
    int lenn = strlen(name);

    char copy[lenn] ;

    strcpy(copy,name);

    printf("%s", copy);

    return 0;
}

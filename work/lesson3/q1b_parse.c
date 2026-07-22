#include <stdio.h>

int main() {
    FILE *fp = fopen("id_marks.csv", "r");

    char buf[256];
    int id, mark;   // will hold each line's parsed values

    while (fgets(buf, sizeof(buf), fp) != NULL) {

        sscanf(buf, "%d , %d", &id ,  &mark);

        printf("%d, %d", id, mark);


    }

    fclose(fp);
    return 0;
}

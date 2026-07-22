#include <stdio.h>

int main() {
    FILE *fp = fopen("stu_marks.csv", "r");

    char buf[256];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("I just read this line: %s", buf);
    }

    fclose(fp);
    return 0;
}

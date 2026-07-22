#include <stdio.h>
#include <stdlib.h>   // needed for atoi()

int main() {
    FILE *fp = fopen("stu_marks.csv", "r");

    char buf[256];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        int mark = atoi(buf);          // turns the text "77\n" into the number 77
        printf("I just read this line: %d\n",mark);
    }

    fclose(fp);
    return 0;
}

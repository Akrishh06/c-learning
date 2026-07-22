#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("stu_marks.csv", "r");

    char buf[256];
    float sum = 0;
    int count = 0;

    while (fgets(buf, sizeof(buf), fp) != NULL) {
        int mark = atoi(buf);
        sum = sum + mark;
        buf ++;
    }

    fclose(fp);

    float avg = sum / 256;
    printf("Average: %.2f\n", avg);
    return 0;
}

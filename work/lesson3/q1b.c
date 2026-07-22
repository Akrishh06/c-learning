#include <stdio.h>

int main() {
    FILE *fp = fopen("id_marks.csv", "r");

    char buf[256];
    int id, mark;
    int count = 0;
    int sum = 0;
    float average = 0;



    while (fgets(buf, sizeof(buf), fp) != NULL) {

        sscanf(buf, "%d , %d", &id ,  &mark);

        printf("%d, %d", id, mark);

        sum = sum + mark;
        count ++;

    }

    average =  (float)sum / count;

    printf("average:%f", average);

    fclose(fp);
    return 0;
}

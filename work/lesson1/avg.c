#include <stdio.h>

int main() {
    int marks[4] = {77,54,42,99};
    float sum = 0;
    float avg = 0;
    for (int i =0; i<4; i++){
        sum = sum + marks[i];
    }
    avg = sum / 4;



    printf("avg:%f", avg);

    return 0;
}

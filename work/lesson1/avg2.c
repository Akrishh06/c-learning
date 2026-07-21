#include <stdio.h>

float average(int *arr, int n) {

    float sum = 0;
    float average = 0;
    for(int i = 0; i<n;i++){

        sum = sum + arr[i];
    }

    average = sum / n;

    return average;

    }



int main() {
    int marks[4] = {77, 54, 42, 99};
    printf("avg:%f", average(marks, 4));
    return 0;
}

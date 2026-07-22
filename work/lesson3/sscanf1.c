#include <stdio.h>

int main(){

    int id, mark;

    sscanf("212345,77", "%d , %d", &id ,  &mark);

    printf("%d, %d", id, mark);

    return 0;

}

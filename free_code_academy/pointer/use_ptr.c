#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 386;

    int *ptr_a = &a;

    *ptr_a = 100;

    printf("%d\n",a);

    printf("%p\n",ptr_a);

    int **p2p = &ptr_a;

    printf("%p\n",p2p);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 26;
    double height = 173.69;
    char gender = 'M';

    printf("%p\n",&age);
    printf("%p\n",&height);
    printf("%p\n",&gender);

    return 0;
}
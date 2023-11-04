#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1;
    float b = 2.3;
    double c = 3.14159;
    char d ='A';
    char str[] = "String is basically an array of characters";

    // let us find address of above vars
    int *ptr_a = &a;
    float *ptr_b = &b;
    double *ptr_c = &c;
    char *ptr_d = &d;
    char *ptr_str = str;

    printf("a = %d @ %p\n",a,ptr_a);
    printf("b = %f @ %p\n",b,ptr_b);
    printf("c = %lf @ %p\n",c,ptr_c);
    printf("d = %c @ %p\n",d,ptr_d);
    printf("str = %s @ %p\n",str,ptr_str);

    return 0;



}
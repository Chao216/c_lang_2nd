#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10086;
    char c = 'C';

    int * ptr_a = &a;
    char * ptr_c = &c;

    printf("%p\n",ptr_a);
    printf("%p\n",ptr_c);

    *ptr_a = 99;
    *ptr_c = '$';

    printf("%d\n",a);
    printf("%c\n",c);
    
    // &var gives you address of variable
    //*pointer dereference the pointer to the variable
    // *ptr_a  could be seen equevalent to a

    int Month = 11;

    printf("adress of Month \t%p\n",&Month);
    printf("adress of Month \t%p has a value of \t%d\n",&Month, *&Month);

    return 0;
}
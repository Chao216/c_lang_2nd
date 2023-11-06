#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char optr;

    printf("please enter the first number: ");
    scanf("%lf",&num1);
    printf("which arithmetic operator you want + - * /: ");
    scanf(" %c",&optr);
    printf("please enter the first number: ");
    scanf("%lf",&num2);

    if (optr == '+'){
        printf("%lf\n",num1+num2);
    } else if ( optr =='-') {
        printf("%lf\n",num1 - num2);
    } else if (optr == '*'){
        printf("%lf\n",num1*num2);
    } else {
        printf("%lf\n",num1/num2);
    }

    




    return 0;
}


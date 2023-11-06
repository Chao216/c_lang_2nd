#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    char optr;
    double num2;

    printf("Eneter first number: ");
    scanf("%lf",&num1);
    printf("type of Operation: ");
    scanf(" %c",&optr);
    printf("Enter the second number: ");
    scanf("%lf",&num2);

    switch (optr)
    {
    case '+':
        printf("%f\n",num1 + num2);
        break;
    case '-':
        printf("%f\n",num1 - num2);
        break;
    case '*':
        printf("%f\n",num1 * num2);
        break;
    case '/':
        printf("%f\n",num1 / num2);
        break;
    
    default:
        printf("Please enter a correct operator from +-*/\n");
        break;
    }

    return 0;
}
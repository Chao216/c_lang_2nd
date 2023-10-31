#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1;
    double n2;

    int operation;

    printf("please enter the first number: ");
    scanf("%lf",&n1);
    printf("please enter the second number: ");
    scanf("%lf",&n2);
    printf("what operations to proceed  1. add, 2. subtract, 3. mul, 4 div: ");
    scanf("%d",&operation);

    switch (operation)
    {
    case 1:
        printf("%lf\n",n1 + n2);
        break;
    case 2:
        printf("%lf\n",n1-n2);
        break;
    case 3:
        printf("%lf\n", n1 * n2);
        break;
    case 4:
        printf("%lf\n",n1 / n2);
        break;
    
    default:
        printf("Invalid operation, please choose between 1 and 4!\n");
        break;
    }



    return 0;
}
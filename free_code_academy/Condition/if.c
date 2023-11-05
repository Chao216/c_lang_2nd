#include <stdio.h>
#include <stdlib.h>

int getBig(int n1, int n2){
    
    if (n1 > n2){
        return n1;
    }

    return n2;
}

int Max(int a, int b, int c){

    if (a >= b && a >= c){
        return a;
    } else if (b >= a && b >= c)
    {
        return b;   /* code */
    }

    return c;
    
}

int main(){

    printf("%d\n",getBig(10,3));
    printf("%d\n",Max(10,10086,3));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int getBig(int n1, int n2){
    
    if (n1 > n2){
        return n1;
    }

    return n2;
}

int main(){

    printf("%d\n",getBig(10,3));

    return 0;
}
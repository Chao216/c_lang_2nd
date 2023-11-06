#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int i = 0; i <= 10; i++){
        printf("%d\n",i);
    }

    printf("**************************************\n");
    // loop through an array

    int array[9] = {1,2,3,4,5,6,7,8,9};

    for (int j = 0; j<= 8; j++){
        printf("%d\n",array[j]);
    }

    int  length = sizeof(array) / 4; // because size of int is 4; 4*9 = 36
    printf("Size of array is %d\n",length);

    printf("##########################################################\n");

    for (int  i = 0; i <= sizeof(array)/4 -1; i++)
    {
        printf("%dth element is %d\n",i,array[i]);
    }
    


    return 0;
}
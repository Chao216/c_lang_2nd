#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 10; j < 20; j++){
            for (int k = 20; k < 30; k++){
                printf("%dth times \t%d\n",count, +j+k);
                count++;
            }
        }
    }

    return 0;
}
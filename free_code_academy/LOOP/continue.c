#include <stdio.h>
#include <stdlib.h>

int main(){

    int begin = 0;

   

    while (begin <= 10){
        
        if (begin == 4){
            begin++;
            continue;
        }
        
        printf("%d\n",begin);
        printf("Not skipped !\n");
        begin++;
    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int secret = 693;
    int count = 1;

    int guess;

    while (guess != secret){
        printf("guess the number: ");
        scanf("%d",&guess);
        ++count;
        if(guess == secret){
            printf("Congratulation, you got me!\n");
            break;
        }
    
        
        if (count >3){
            printf("You have used all three chances\n");
            break;
        }
    }

        

    

    return 0;

}
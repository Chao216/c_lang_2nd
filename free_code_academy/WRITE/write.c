#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ptr_file = fopen("demo.txt","w");
    
    fprintf(ptr_file,"Hello Bro!\n");

    fclose(ptr_file);

    FILE * pointerFIle = fopen("demo.txt","a");

    fprintf(pointerFIle,"What's Up!\n");

    fclose(pointerFIle);

    FILE * ptr = fopen("TWIB.txt","r");

    char c;

    while ((c=fgetc(ptr))!= EOF){

        printf("%c",c);

    }

    fclose(ptr);





    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    int age;

    printf("what is your name: ");
    scanf("%s",&name);
    printf("how old are you: ");
    scanf("%d",&age);
    printf("%s is %d years old\n",name,age);

    return 0;



}
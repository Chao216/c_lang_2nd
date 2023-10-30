#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    int age;
    char girl[20];

    printf("what is your name: ");
    scanf("%s",&name);
    printf("how old are you: ");
    scanf("%d",&age);
    printf("%s is %d years old\n",name,age);

    printf("who is you favorite actress: ");
    getchar(); // change to a new line
    fgets(girl,20,stdin); // get multiple lines
    printf("You favorite girl is %s.\n",girl);

    
    return 0;



}
#include <stdio.h>
#include <stdlib.h>

void sayHi();// you have to declare first before main function
int main(){

    sayHi("Tony");
    sayHi("Lucy");
    sayHi("Brian");
    sayHi("William");
    sayHi("Ella");
    sayHi("Monica");


}

void sayHi(char name[]){
    printf("Hi! %s\n",name);
}
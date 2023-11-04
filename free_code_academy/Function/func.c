#include <stdio.h>
#include <stdlib.h>

void sayHi();// you have to declare first before main function
double adder();
int main(){

    sayHi("Tony");
    sayHi("Lucy");
    sayHi("Brian");
    sayHi("William");
    sayHi("Ella");
    sayHi("Monica");

    printf("%lf\n",adder(3.6,2.7));


}

void sayHi(char name[]){
    printf("Hi! %s\n",name);
}

double adder(double d1, double d2){
    return d1 + d2;
}
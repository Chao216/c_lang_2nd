#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    char country[20];
    char gender[6];
    int age;
    double gpa;
};


int main(){

    // struct actually looks like Class object in Java

    struct Student stu1;

    strcpy(stu1.name,"Vova");
    strcpy(stu1.country,"Finland");
    strcpy(stu1.gender,"Male");
    stu1.age = 29;
    stu1.gpa = 4.8;

    struct Student stu2;

    strcpy(stu2.name,"Apurva");
    strcpy(stu2.country,"Intia");
    strcpy(stu2.gender,"Female");
    stu2.age = 27;
    stu2.gpa = 5.0;
    
    printf("%s\n",stu2.country);
    printf("%lf\n",stu1.gpa);
    printf("%s\n",stu2.name);
    printf("%s\n",stu1.name);



}
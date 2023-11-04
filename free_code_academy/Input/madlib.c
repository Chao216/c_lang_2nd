#include <stdio.h>
#include <stdlib.h>

int main(){
    char color[20];
    char Noun[20];
    char Fname[10];
    char Lname[10];

    printf("Your favorite color: ");
    scanf("%s",color);
    printf("Something you want now: ");
    scanf("%s",Noun);
    printf("Who is your favorite actress: ");
    scanf("%s%s",Fname,Lname);

    printf("%s looks good on me!\n",color);
    printf("I am gonna buy a %s later\n",Noun);
    printf("%s %s is so stunnging!\n",Fname,Lname);

    return 0;

}
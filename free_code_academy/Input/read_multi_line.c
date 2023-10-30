#include <stdio.h>

int main(){
    char name[20];
    char country[20];
    char job[20];

    printf("what is her name: ");
    fgets(name,20,stdin);
    printf("where is she from: ");
    getchar();
    fgets(country,20,stdin);
    printf("what does she do: ");
    getchar();
    fgets(job,20,stdin);

    printf("%s is from %s, and she is an %s",name,country,job);

    return 0;
}
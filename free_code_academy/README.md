format string 	input type

%c 	            character
%d 	            digit (integer)
%f 	            float
%lf 	        double
%u 	            unsigned
%s 	            string

comments in C
```c
// this is single line comment

/*
this is 
multi line
comments 
if you need 
write more
*/
```

get use input with scanf

```c
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
    fgets(girl,20,stdin);
    printf("%s is you favorite girl.",girl);

    return 0;



}
```

Switch Case in C

```c
 switch (operation)
    {
    case 1:
        printf("%lf\n",n1 + n2);
        break;
    case 2:
        printf("%lf\n",n1-n2);
        break;
    case 3:
        printf("%lf\n", n1 * n2);
        break;
    case 4:
        printf("%lf\n",n1 / n2);
        break;
    
    default:
        printf("Invalid operation, please choose between 1 and 4!\n");
        break;
    }
```
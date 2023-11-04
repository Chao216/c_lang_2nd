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

pointer must be declared and initialized as the same type of the variable where is ppinter is pointing to.

when use printf, %p is the place holder for pointers

e.g.
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1;
    float b = 2.3;
    double c = 3.14159;
    char d ='A';
    char str[] = "String is basically an array of characters";

    // let us find address of above vars
    int *ptr_a = &a;
    float *ptr_b = &b;
    double *ptr_c = &c;
    char *ptr_d = &d;
    char *ptr_str = str;

    printf("a = %d @ %p\n",a,ptr_a);
    printf("b = %f @ %p\n",b,ptr_b);
    printf("c = %lf @ %p\n",c,ptr_c);
    printf("d = %c @ %p\n",d,ptr_d);
    printf("str = %s @ %p\n",str,ptr_str);

    return 0;



}

```
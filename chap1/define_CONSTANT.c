#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 5

void main()
{
for (int i = LOWER; i <= UPPER; i = i + STEP){
 	printf("%3d %6.2f\n",i,(5.0/9.0)*(i-32.0));
 }
}

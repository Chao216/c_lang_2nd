#include <stdio.h>

void main(){
int c, i, nwhite, nother;
int ndigits[10];
nwhite = nother = 0;
for (i = 0; i < 10; ++i){
		
	ndigits[i]=0;
	}

for (i = 0; i < 10; ++i){

	printf("%d\n",ndigits[i]);
	}


/*let us start from here*/

while ((c=getchar()) != EOF){
	if (c>= '0' & c <= '9'){
		++ndigits[c-'0'];
		/* if c == 3, ++ndights[3-0] */

	}	
	else if (c==' ' || c == '\n' || c == '\t'){
		++nwhite;
	}
	else {
		++nother;
	}


	}
	printf("digits = \n");
	for (i = 0; i < 10; ++i){
		printf("%d ====> %d\n",i,ndigits[i]);
	}

	printf("\n whitespace == %d,\nothers==> %d",nwhite,nother);

}

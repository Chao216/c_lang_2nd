#include <stdio.h>
#define IN 1
#define OUT 0
/*we have defined 2 constant above*/

void main()
{

int c, nl, nw, nc, state;

state = OUT;
/*first inital state is OUT side a word*/

nl = nc = nw = 0;

while ((c = getchar()) != EOF) {
	++nc;
	/* increase char count*/
	if (c == '\n') {
		++nl;
		/* change line, nl increase*/
	}
	if (c == ' ' || c == '\t' || c == '\n') {
		/* if new char is space, \t, \n means cursor out of a word we need change state to OUT*/
		state = OUT;
	}


	if (state == OUT) {
		/*change state back to IN, and increase number of word*/
		state = IN;
		++nw;
	}

}
	printf("number of line: %d\tnumber of word: %d\tnumber of char: %d",nl,nw,nc);
}

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);/*declare first if before main function*/
void copy(char from[], char to[]);

void main(){
	int len; /*current line length */
	int max /* max length seen so far*/

	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved so far */


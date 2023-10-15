#include <stdio.h>

int power(int base, int n);
void main(){
	printf("let us write a function in c");
	int a = power(10,3);
	printf("a = %d\n",a);
}

int power(int base, int n){
	int i,ans;
	ans = base;
	for (i = 1; i < n; ++i){
		ans = base * ans;
	}
	return ans;
}


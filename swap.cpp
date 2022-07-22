#include<stdio.h>
int main(){
	int a=4, b=7;
	printf("Before swap %d, %d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap %d,%d",a,b);
	return(0);
}

#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("Enter a number", n);
	scanf("%d",&n);
	while(n>0){
		i=n%10;
		n=n/10;
		sum= sum+i;
	}
	printf("%d",sum);
}


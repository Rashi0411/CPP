#include<stdio.h>
main(){
	int n,r;
	printf("Enter a number ",n);
	scanf("%d",&n);
	while(n){
		r=n%10;
		printf("%d", r);
		n=n/10;
		
	}
	if(n==r){
		printf("Palindrome");
	}
	else{
		printf("Not palindrome");
	}
}

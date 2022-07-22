#include<stdio.h>
main(){
	int a[100],*p,i,sum=0,n;
	p=&a[0];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
		sum=sum+(*(p+i));
	}
	printf("%d",sum);
}

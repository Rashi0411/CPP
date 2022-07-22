#include<stdio.h>
main(){
	int y,a,b;
	printf("Enter the years ",a,b);
	scanf("%d %d",&a,&b);
	if(a>b)
	a=a+b-(b=a);
	for(y=a;y<=b;y++){
		if(y%4==0 && y%100!=0 || y%400==0)
		printf("%d ",y);
		
	}
}
	
	

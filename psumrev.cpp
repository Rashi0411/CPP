#include<stdio.h>
void numtasks(int n,int*sum,int *rev){
    int r;
    *sum=*rev=0;
    while(n){
    r=n%10;
    *sum=*sum+r;
    *rev=(*rev)*10+r;
    n=n/10;
    }  
}
main(){
    int num,sum,rev;
    printf("Enter the number:");
    scanf("%d",&num);
    numtasks(num,&sum,&rev);
    printf("sum of digits is=%d,reverse is=%d",sum,rev);
    }

#include<stdio.h>
typedef struct{
	char first[51],middle[51],last[51];
}name;

typedef struct{
	int rollno;
	char course[51], 
	char branch[51];
	name selfname,fathername;
}student;
void main(){
	student s;
	printf("Roll No : ");scanf("%d",&s.rollno);
	printf("Self Name(First-Middle-Last) : ");fflush(stdin);
	scanf("%c%*c%c%*c%c",&s.selfname.first,&s.selfname.middle,&s.name.last);
	printf("Father's Name(First-Middle-Last) : ");fflush(stdin);
	scanf("%c%*c%c%*c%c",&s.fathername.first,&s.fathername.middle,&s.fathername.last);
	printf("Course : ");fflush(stdin);gets(s.course);
	printf("Branch : ");fflush(stdin);gets(s.branch);
	
	
	printf("%d %s-%s-%s %s-%s-%s %s %s",s.rollno,s.selfname,s.fathername,s.course,s.branch);
}


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[100];
  	int i;
  	printf("\n Enter the String : ");
  	gets(Str1);
  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] = Str1[i] - 32;
		}		
  		else if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The Given String after toggling is = %s", Str1);
  	return 0;
}
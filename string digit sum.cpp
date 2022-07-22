#include <stdio.h>
#include<ctype.h>
main()
{
    char str[80];
    int i, n = 0, sum = 0;
    printf("Enter the string\n");
    gets(str);
    while (str[i])
    {
    	if((str[i]>='0'&&str[i]<='9'))
        
        {
            sum += (str[i] - '0');
        }
        i++;
    }
    printf("Sum of all digits = %d\n", sum);
}

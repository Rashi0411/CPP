main()
{
	char str[100];
	int length = strlen(str);
	int i;
	for (i=length-1;i>=0;i++)
	{
		if(str[i]==' '){
			str[i]='\0';
			printf("%s",&(str[i])+1);
		}
	}
	printf("%s", str);
}

#include<stdio.h>
int main()
{
	char str1[] = {'H', 'A', 'I'}; 
	char str2[] = {'H', 'A', 'I'};
	if (strcmp(str1, str2))
	{
		printf("strings are not equal");
	}
	else
	{
		printf("strings are equal");		
	}
	return 0;
}

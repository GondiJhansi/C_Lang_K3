#include<stdio.h>
int main()
{
	char arr[] = "function\0";
	int num = strlen(arr);
	printf("Length of function is  %d", num);
	return 0;	
}

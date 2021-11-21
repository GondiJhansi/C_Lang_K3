#include<stdio.h>
int main()
{
    int a=0,b=5;
    if(a++ && ++b)
    {
	printf("if: %d %d",a,b);
    }
    else
    {
	printf("else: %d %d",a,b);
    }
    return 0;
}

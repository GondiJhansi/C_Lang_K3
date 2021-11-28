#include<stdio.h>
int main()
{
	void swap(); 
	int x = 5, y = 10;
	swap(&x, &y);
	printf("x = %d y = %d",x,y);
	return 0;
}
void swap(int *a, int *b)
{
	*a ^= *b, *b ^= *a, *a ^= *b;
}

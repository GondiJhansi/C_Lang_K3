#include<stdio.h>
void fun(int*, int);
void (*ptr[1])(int*, int);
int main()
{
	int a = 2;
	int b = 4;
	ptr[0] = fun;
	ptr[0](&a, b);
	printf("%d %d ", a, b);
	return 0;
}
void fun(int *p, int q)
{
	int tmp = *p;
	*p = q;
	q = tmp;
}


#include<stdio.h>
void ptr(char**);
int main()
{
	char *argv[] = { "abc", "def", "ghi", "jkl", "mno", "pqr" };
	ptr(argv);
	return 0;
}
void ptr(char **p)
{
	char *t;
	t = (p += sizeof(int))[-1];
	printf("%s\n", t);
}


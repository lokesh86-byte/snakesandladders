#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers :");
	scanf(" %d %d", &a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped numbers of a, b are %d %d",a, b);
	return 0;
}

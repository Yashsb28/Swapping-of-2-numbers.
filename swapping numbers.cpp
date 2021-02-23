#include<stdio.h>
main()
{
	int a=2,b=4;
	printf("The value of a and b is : %d and %d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n Post swapping, the value of a and b are %d and %d respectively.", a,b);
}

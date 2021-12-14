#include<stdio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:printf("Even Number");break;
		default:printf("Odd Number");
	}
}

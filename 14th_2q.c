#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the secound number:");
	scanf("%d",&b);
    switch(a>b)
    {
    	case 1:printf("a is maximum");break;
    	case 0:printf("b is maximum");break;
	}
}

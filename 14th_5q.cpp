#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the secound number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
    switch(a<b&&a<c)
    {
    	case 1:printf("a is minimum");break;
    	case 0:switch(b<c&&b<a)
    	{
    		case 1:printf("b is minimum");break;
    		default:printf("c is minimum");break;
		}
	}
}

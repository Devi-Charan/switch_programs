#include<stdio.h>
main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
    switch(a>0)
    {
    	case 1:printf("a is positive");break;
    	case 0:switch(a<0)
    	{
    		case 1:printf("a is negative");break;
    		default:printf("a is zero");break;
		}
        
	}
}

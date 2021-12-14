#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,r1,r2;
	printf("Enter the vale of a:");
	scanf("%d",&a);
	printf("Enter the vale of b:");
	scanf("%d",&b);
	printf("Enter the vale of c:");
	scanf("%d",&c);
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	switch(d>0)
	{
	case 1:printf("Root1 and Root2 are:%f   %f they are real and unequal",r1,r2);break;
	case 0:switch(d<0)
	       {
	       	case 1:printf("Root1 and Root2 are:%f   %f they are imaginary and unequal",r1,r2);break;
	        case 0:printf("Root1 and Root2 are:%f   %f they are real and equal",r1,r2);break;
		   }
    } 
}

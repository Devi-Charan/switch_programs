#include<stdio.h>
main()
{
    int a,b,add,sub,multiplication,division;
    char c;
    printf("Enter the character:");
	scanf("%c",&c);
    printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the secound number:");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	multiplication=a*b;
	division=a/b;
	switch(c)
	{
		case '+':printf("Adittion of two numbers is %d",add);break;
		case '-':printf("substraction of two numbers is %d",sub);break;
		case '*':printf("multiplication of two numbers is %d",multiplication);break;
		case '/':printf("division of two numbers is %d",division);break;
	}
}

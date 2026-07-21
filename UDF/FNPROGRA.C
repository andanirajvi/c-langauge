/*
	author:rajvi;
	doc:20-07-2026;
	obj: UDF ;
*/
#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
	printf("Addition of %d and %d is %d\n",a,b,a+b);
}
void sub(int a,int b)
{
	printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}
void mul(int a,int b)
{
	printf("Multipliction of %d and %d is %d\n",a,b,a*b);
}
void divi(int a,int b)
{
	if(b!=0)
	{
		printf("Division of %d and %d is %d\n",a,b,a/b);
	}
	else
	{
		printf("Division by zero is not possible.\n");
	}
}
void mod(int a,int b)
{
	if(b!=0)
	{
		printf("Modulo of %d and %d is %d\n",a,b,a%b);
	}
	else
	{
		printf("Modulo by zero is not possible.\n");
	}
}
void main()
{
	int choice,a,b;
	clrscr();
	while(1)
	{
		printf("\nPress 1 for +");
		printf("\nPress 2 for -");
		printf("\nPress 3 for *");
		printf("\nPress 4 for /");
		printf("\nPress 5 for %");
		printf("\nPress 0 for Exit");

		printf("\n\nEnter your choice :");
		scanf("%d",&choice);

		if(choice==0)
		{
			exit(0);
		}

		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);

		switch(choice)
		{
			case 1:
				add(a,b);
				break;
			case 2:
				sub(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				divi(a,b);
				break;
			case 5:
				mod(a,b);
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	getch();
}
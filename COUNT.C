
/*
	Author:Rajvi;
	doc:2-06-2026;
	object:count the total number of degits
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count = 0;
	clrscr();
	printf("Enter Number :");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n = n%10;
	}
	printf("Number of digits = %d",count);
	getch();
}


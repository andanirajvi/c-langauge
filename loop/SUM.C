/*
	Author:Rajvi;
	doc:2-07-2026;
	object:sum 0f last and first digits.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,first,last;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	last = n%10;
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	printf("sum=%d",first+last);
	getch();
}
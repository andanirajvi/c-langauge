/*
	Author:Rajvi;
	doc:6-07-2026;
	object:	1 3 5 7 9
		1 3 5 7
		1 3 5
		1 3
		1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i,j;
	clrscr();
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",2*j-1);
		}
		printf("\n");
	}
	getch();
}
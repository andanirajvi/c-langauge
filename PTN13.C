/*
	Author:Rajvi;
	doc:5-07-2026;
	object:	      A
		      B A
		      C B A
		      D C B A
		      E D C B A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
	getch();
}
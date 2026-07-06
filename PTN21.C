/*
	Author:Rajvi;
	doc:6-07-2026;
	object:   * * * * *
		  *       *
		  * * * * *
		  *
		  *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==3)
		{
			for(j=1;j<=5;j++)
			{
				printf("* ");
			}
		}
		else if(i==2)
		{
			printf("*");
			for(j=1;j<=7;j++)
			{
				printf(" ");
			}
			printf("*");
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
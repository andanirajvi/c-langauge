/*
	Author:Rajvi;
	doc: 6-07-2026;
	object:	1 0 1 0 1
		  1 0 1 0
		    1 0 1
		      1 0
			1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=6-i;j++)
		{
			if(j%2==1)
			{
				printf("1");
			}
			else{
				printf("0");
			     }
		}
		printf("\n");
	}
	getch();
 }
/*
	Author:Rajvi;
	doc:6-07-2026;
	object:    5
		 4 5
	       3 4 5
	     2 3 4 5
	   1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r=5,k,i,j;
	clrscr();
	for(i=1;i<=r;i++)
	{
	      for(k=1;k<=r-i;k++)
	      {
		printf("  ");
	      }
	      for(j=r-i+1;j<=r;j++)
	      {
		printf("%d ",j);
	      }
	      printf("\n");
	}
	getch();
}


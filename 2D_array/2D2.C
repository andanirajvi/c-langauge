/*
	Author:Rajvi;
	doc:10/07/2026;
	object:Largest Element in 2d array.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100][100],row,col,i,j,max;
	clrscr();
	printf("Enter rows :");
	scanf("%d",&row);
	printf("Enter columns :");
	scanf("%d",&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter elements[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]>max)
			max=arr[i][j];
		}
	}
	printf("Largest element =%d",max);
	getch();
}
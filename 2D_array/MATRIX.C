/*
	Author:Rajvi;
	doc:11/07/2026;
	object:Two metrix addition;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10][10],arr1[10][10],arr2[10][10];
	int i,j,row,col;
	clrscr();
	printf("Enter number of rows :");
	scanf("%d",&row);
	printf("Enter number of columns :");
	scanf("%d",&col);

	printf("Enter elements of First Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("Enter elements of Second Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr2[i][j]=arr[i][j]+arr1[i][j];
		}
	}

	printf("Addition of Two Matrices :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",arr2[i][j]);
		}
		printf("\n");
	}
	getch();
}

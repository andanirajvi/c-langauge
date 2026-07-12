/*
	Author:Rajvi;
	doc:9-07-2026;
	object:2d array;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	clrscr();
	printf("Enter Element :\n");
	for(i=0;i<5;i++)
	{
		printf("arr[%d] =",i);
		scanf("%d",&arr[i]);
	}
	printf("Negative elements form an Array :");
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
		{
			printf(" %d ",arr[i]);
		}
	}
	getch();
}
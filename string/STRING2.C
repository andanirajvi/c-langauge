/*
	Author:Rajvi;
	doc:15-07-2026;
	object:Frequency of each letter;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[50];
	int i,j,count;
	clrscr();

	printf("Enter any String ==> ");
	scanf("%s",name);

	for(i=0 ; name[i] !='\0';i++)
	{

		count=0;

		for(j=0;name[j]!='\0';j++)
		{
			if(name[i] == name[j])
			{
				count++;
			}
		}
		printf("%c = %d\n", name[i], count);
	}
	getch();
}
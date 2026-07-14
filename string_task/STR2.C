/*
	Author:Rajvi;
	doc:14/07/2026;
	object: convert upper to iowercase.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i=0;
	clrscr();
	printf("Enter any string :");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		(str[i]>='A'&& str[i]<='Z')&&(str[i]= str[i]+32);

	}
	printf("Lowercase string : %s",str);
	getch();
}
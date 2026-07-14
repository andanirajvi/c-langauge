/*
	Author:Rajvi;
	doc:14/07/2026;
	object: Toggle Case.
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
		(str[i]>='a'&& str[i]<='z')&&(str[i]= str[i]-32) ||
		(str[i]>='A'&& str[i]<='Z')&&(str[i]= str[i]+32);

	}
	printf("Toggle case string : %s",str);
	getch();
}
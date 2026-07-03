/*
	Author:Rajvi;
	doc:30-07-2026;
	object:skip 3 alphabet;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a';
	clrscr();
	do{
		printf(" %c",ch);
		ch=ch+4;
	}
	while(ch<='z');
	getch();
}

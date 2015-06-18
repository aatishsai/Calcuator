#include<stdio.h>
#include<conio.h>
int subract(int,int);
void main()
{
	int a,b,s;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	s=subract(a,b);
	printf("Subraction of two number: %d",s);
	getch();
}
int subract(int c,int d)
{
	int sub;
	if(c>d)
	{
		sub=c-d;
	}
	else 
	{
		sub=d-c;
	}
	return sub;
}

#include<stdio.h>

#include "add.c"
#include "division.c"
#include "exp.c"
#include "factorial.c"
#include "greaterthen.c"
#include "mod1.c"
#include "multi.c"
#include "percentage.c"
//#include "squareroot.c"
#include "subraction.c"

int main(){

	int x,y;

	printf("Enter the first number\n");
	scanf("%d",&x);

	printf("Enter the second number\n");
	scanf("%d",&y);

	printf("%f\n",fun_addition(x,y) );

	printf("%s\n", );

	//printf("%s\n", );
	return 0;
}
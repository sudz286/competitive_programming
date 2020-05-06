#include<stdio.h>
#include<stdlib.h>

void main()
{
	char c,*ch;
	int a,*ah;
	float f,*fh;

	printf("Enter char,float and int values:");
	scanf("%c%f%d",&c,&f,&a);
	ch = &c;
	fh = &f;
	ah = &a;

	printf("\nVariable\tAddress\n");
	printf("CHAR=%c\t\t%u",*ch,ch);
	printf("\nFLOAT=%f\t%u",*fh,fh);
	printf("\nINT=%d\t\t%u",*ah,ah);
}
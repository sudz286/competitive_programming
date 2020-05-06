#include<stdio.h>
#include<stdlib.h>

int squareN(int *a)
{
	return *a*(*a);
}

void main(){
	int a;
	printf("Enter integer a:");
	scanf("%d",&a);
	printf("\na squared = %d",squareN(&a));
}
#include<stdio.h>
#include<stdlib.h>
#include "inverse.c"


void main()
{
	int a[3][4] ={{1,2,3,4},{11,12,13,14},{21,22,23,24}};
	int (*p)[4];
	p = a;
	printf("%p %p %p\n",p,p+1,p+2);
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",*(*(p+i)+j));
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
	}

}
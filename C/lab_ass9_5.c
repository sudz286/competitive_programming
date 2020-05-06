#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[] = {4,8,1,9,2,7,21,78,11,0};
	int *ptr,max = 0;

	// ptr = &a[0];

	for(ptr = &a[0];ptr!=&a[9];ptr++){
		printf("%d\t",*ptr);
		if(*ptr>max)
			max = *ptr;
	}

	printf("\nMax element:%d",max);
}
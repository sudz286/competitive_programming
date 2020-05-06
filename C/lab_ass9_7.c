#include<stdio.h>
#include<stdlib.h>

void dupl(int a[16])
{
	int *ptr;
	for(ptr = &a[0];*ptr!=0;ptr++){
		if(a[abs(*ptr)] >=0){
			a[abs(*ptr)] = -a[abs(*ptr)];
		}
		else{
			printf("%d\t",abs(*ptr));
		}
	}
}

void main()
{
	int a[16];
	printf("Enter array with values from 0 to n-1:");
	int i;	
	for(i=0;i<16;i++){
		scanf("%d",&a[i]);
	}

	dupl(a);
}
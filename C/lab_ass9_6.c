#include<stdio.h>
#include<stdlib.h>



void main()
{
	int a[100],n;
	printf("Enter N:");
	scanf("%d",&n);
	printf("\nEnter array values:");
	int i;
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int *p,**q;

	for(p = &a[0];p!=&a[n];p++){
		q = &p;
		*p+=5;
		printf("%d",**q);
	}

}
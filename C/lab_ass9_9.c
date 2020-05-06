#include<stdio.h>
#include<stdlib.h>


float sum(float *a,int n){
	int i;
	float sum;
	for(i=0;i<n;i++){
		sum +=a[i];
	}
	return sum;
}

void main(){
	int n,i;
	float *a;
	printf("Enter number of integers:");
	scanf("%d",&n);
	a = (float *)malloc(sizeof(float) * n);
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("%f",sum(a,n));
	free(a);
}
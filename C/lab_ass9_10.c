#include<stdio.h>
#include<stdlib.h>


int nvalue(float a[100],int n){
	int i,count=0;
	float avg=0;
	for(i=0;i<n;i++){
		avg+=a[i];
	}
	avg = avg/n;
	for(i=0;i<n;i++){
		if(a[i]<avg)
			count++;
	}
	return count;
}



void main(){
	int n;
	float a[100];
	printf("Enter number of integers:");
	scanf("%d",&n);
	printf("\nEnter array values:");
	int i;
	for(i = 0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("Number of values lesser than average value of the array are: %d",nvalue(a,n));
}
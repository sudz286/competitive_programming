#include<stdio.h>
#include<stdlib.h>


int analyser=0;

int spec_search(int a[100],int n,int x){
	int i,j,iter=x;
	for(i=0;i<n;i++){	
			for(j = 0;j < n;j++){
				analyser++;
				if(x == a[i+(j*iter)]&&(i+(j*iter))<n){
				printf("Element found at %d index\t",(i+(j*iter)));
				return analyser;
			}
		}	
	}
	
}

int linear_search(int a[100],int n,int x){
	int i;
	analyser = 0;
	for(i=0;i<n;i++){
		analyser++;
		if(a[i] == x){
			printf("Element found at %d index\t", i);
			return analyser;
		}
	}
	
}


void main()
{	
	int a[100],i,j,search,n;
	printf("Enter the length of the array:");
	scanf("%d",&n);
	printf("Enter values:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter search value:");
	scanf("%d",&search);
	printf("\nEfficiency of special search:%d\n",spec_search(a,n,search));
	printf("\nEfficiency of linear search:%d\n",linear_search(a,n,search));

}
#include<stdio.h>
#include<stdlib.h>

//Global variables for swap and comparision counter
int comp=0,swaps=0;


void comparison()
{
	comp++;
}

void swapesh()
{
	swaps++;
}

int bubblesort(int a[100],int n)
{	
	int i,j,temp;
	for(i = 0 ; i < n - 1; i++)
	{
		for(j = 0 ; j < n-i-1; j++)
		{
			if(a[j] > a[j+1]) 
			{
				comparison();
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swapesh();
			}
		}
	} 

}

int main()
{
	int i, temp;
	int a[100];
	int n;

	//Inputing array from user
	printf("Enter Number of elements:");
	scanf("%d",&n);

	printf("\nEnter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	bubblesort(a,n);

	printf("Bubble Sorted Array\n");
	printf("Swaps = %d Comparisons = %d\n",swaps,comp); 
	for(i = 0; i < n; i++)
		printf("%d\",t a[i]);

	return 0;
}
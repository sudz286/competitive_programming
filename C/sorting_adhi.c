#include<stdio.h>
#include<stdlib.h>

//Global variables for swap and comparision counter
int comp=0,swaps=0;


void comparison()
{
	comp++;
}


void swap()
{
	swaps++;
}

void swapcompzero(){

	swaps = 0;
	comp = 0;
}

int bubblesort(int a[100],int n)
{	
	int i,j,temp;
	for(i = 0 ; i < n - 1; i++)
	{
		for(j = 0 ; j < n-i-1; j++)
		{
			comparison();
			if(a[j] > a[j+1]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap();
			}
		}
	} 
	printf("Swaps = %d Comparisons = %d\n",swaps,comp); 
	swapcompzero();
}

void insertionSort(int a[100], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = a[i]; 
        j = i - 1;
        comparison(); 
        while (j >= 0 && a[j] > key) { 
            a[j + 1] = a[j]; 
            j = j - 1; 
            swap();
        } 
        a[j + 1] = key; 
        swap();
    } 
    printf("Swaps = %d Comparisons = %d\n",swaps,comp);
    swapcompzero();

} 

void selectionSort(int a[100], int n) 
{ 
	int i,j,temp;
	for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
        	comparison();
         	if(a[i]>a[j]){
            	temp=a[i];
            	a[i]=a[j];
            	a[j]=temp;
            	swap();
         	}
      	}
   }
   printf("Swaps = %d Comparisons = %d\n",swaps,comp);
   swapcompzero();
}



int main()
{
	int i,a[100],a1[100],a2[100],n;

	//Inputing array from user
	printf("Enter Number of elements:");
	scanf("%d",&n);

	printf("\nEnter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		a1[i] = a[i];
		a2[i] = a[i];
	}

	bubblesort(a,n);
	
	printf("Bubble Sorted Array\n");
	for(i = 0; i < n; i++)
		printf("%d\n", a[i]);
		

	insertionSort(a1,n);

	printf("Insertion Sorted Array\n");
	for(i = 0; i < n; i++)
		printf("%d\n", a1[i]);
 
	selectionSort(a2,n); 

	printf("Selection Sorted Array\n");
	for(i = 0; i < n; i++)
		printf("%d\n", a2[i]);

	return 0;
}
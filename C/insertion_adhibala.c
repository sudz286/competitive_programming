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

void insertionSortAscending(int a[100], int n) 
{ 
    int i, key, j; 
    printf("InsertionSortAscending:\n");
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

void insertionSortDescending(int a[100],int n)
{
	int i, key, j;
	printf("InsertionSortDescending:\n"); 
    for (i = 1; i < n; i++) { 
        key = a[i]; 
        j = i - 1;
        comparison(); 
        while (j >= 0 && a[j] < key) { 
            a[j + 1] = a[j]; 
            j = j - 1; 
            swap();
        } 
        a[j + 1] = key; 
        swap();
    } 
    printf("Swaps = %d Comparisons = %d\n",swaps,comp);
}

void printArray(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void main()
{
	int i,a[100],n;
	//Inputing array from user
	printf("Enter Number of elements:");
	scanf("%d",&n);

	printf("\nEnter array elements in sorted order(ASCENDING):");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	insertionSortAscending(a,n);
	printArray(a,n);
	insertionSortDescending(a,n);
	printArray(a,n);

}
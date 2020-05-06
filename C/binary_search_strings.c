#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int bin_sea_str(char a[50][50],int low,int high,char key[50])
{
	int mid;
	while(low<=high)
 	{
 		mid=(low+high)/2;
 		if(strcmp(key,a[mid])==0)
 		{
 			return mid;
 		}
 		else if(strcmp(key,a[mid])>0)
 		{
 			high=high;
 			low=mid+1;
 		}
 		else
 		{
 			low=low;
 			high=mid-1;
 		}
 	}
 	return -1;
}

void main()
{
	int i,n;
	char a[50][50],key[50];
	printf("Enter N:");
	scanf("%d",&n);
	printf("\nEnter strings in ascending order\n");
	for(i=0;i<n;i++){
		scanf(" %[^\n]",a[i]);
	}
	printf("Enter Key:");
	scanf(" %[^\n]",key);
	int ans =bin_sea_str(a,0,n-1,key);
	if(ans==-1){
		printf("Search unsuccesful");
	}
	else{
		printf("Element found at %d index",ans);
	}
	
}
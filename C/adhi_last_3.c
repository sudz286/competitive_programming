#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define r 100
int main()
{
    int i,j,n;
    char *arr[r],c,*tmp;
    printf("Enter number of names:");
    scanf("%d",&n);
    printf("Enter %d names:\n",n);
    
    for (i=0; i<n; i++) 
    {
        arr[i] = (char*)malloc(c * sizeof(char));
        scanf("%s",arr[i]);
    }
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++){
         if(strcmp(arr[i],arr[j])>0){
            tmp= arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
         }
      }
    printf("Sorted Names:\n");
    for(i=0;i<n;i++)
        printf("%s\n",arr[i]);

    for(i=0;i<n;i++)
        free(arr[i]);
    
}
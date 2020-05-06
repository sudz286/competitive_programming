#include<stdio.h>
#include<stdlib.h>

void main()
{
	float arr[2][2];
	int i,j;
	printf("Enter 2x2 matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%f",&arr[i][j]);
		}
	}
	float det,temp;
	det = (arr[0][0]*arr[1][1]-(arr[0][1]*arr[1][0]));
	if(det==0){
		printf("Division by zero error");
	}

	else{
		det = 1/det;
		//Swapping extreme elements
		temp = arr[1][1];
		arr[1][1] = arr[0][0];
		arr[0][0] = temp;
		//Negating the rest
		arr[0][1]*=-1;
		arr[1][0]*=-1;
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			arr[i][j]*=det;
		}
	}
	printf("Inverse is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%f\t",arr[i][j]);
		}
		printf("\n");
	}
	}
	

}
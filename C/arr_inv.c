#include<stdio.h>
#include<stdlib.h>

void inverse(float *arr[]);
void mul(float *a[],float *b[]);

void inverse(float *arr[2]){
	float det,temp;
	int i,j;
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

void mul(float*a[2],float*b[2]){
	int i,j,k;
	float **c = (float **)malloc(2*sizeof(float *));
	for(i=0;i<2;i++){
		c[i] = (float *)malloc(sizeof(float));
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];    
			}
		}
	}
	printf("Multiplication is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%f\t",c[i][j]);
		}
		printf("\n");
	}
	inverse(c);
}



void main()
{
	int i,j;
	float **a = (float **)malloc(2*sizeof(float *));
	for(i=0;i<2;i++){
		a[i] = (float *)malloc(sizeof(float));
	}
	printf("Enter array elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%f",&a[i][j]);
		}
	}

	float **b = (float **)malloc(2*sizeof(float *));
	for(i=0;i<2;i++){
		b[i] = (float *)malloc(sizeof(float));
	}
	printf("Enter array elements:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%f",&b[i][j]);
		}
	}
	mul(a,b);
	mul(b,a);
}

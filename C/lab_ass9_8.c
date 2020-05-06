#include<stdio.h>
#include<stdlib.h>

int addesh(int *a,int *b){
	*a +=2;
	*b+=2;
	printf("%d\n",*a+*b);
}

int mult(int *a,int *b){
	*a*=6;
	*b*=6;
	printf("%d\n",*a*(*b));
}

int modesh(int *a,int *b){
	if(*a>*b){
		printf("%d\n",*a%(*b));
	}
	else{
		printf("%d\n",*b%(*a));
	}
}



void main(){
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	addesh(&a,&b);
	mult(&a,&b);
	modesh(&a,&b);
	printf("a = %d b = %d",a,b);

}
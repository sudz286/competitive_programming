#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){
	return a+b;
}
int subtract(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int divi(int a, int b){
	return a/b;
}

int (*p[4]) (int x, int y);

void main()
{
	int i,j,op,result;
	p[0] = sum; 
  	p[1] = subtract; 
  	p[2] = mul; 
  	p[3] = divi; 
 	while(1){
 		printf("\nMENU");
 		printf("\nEnter 1->ADD,2->SUB,3->MUL,4->DIV,ANY OTHER VALUE TO EXIT:");
 		scanf("%d",&op);
 		if(op<0||op>4)
 			exit (1);
 		else{
 		printf("\nEnter 2 values:");
 		scanf("%d%d",&i,&j);
 		result = (*p[op-1]) (i, j);
 		printf("%d",result);
 		}
 	}
 }


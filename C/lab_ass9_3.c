#include<stdio.h>
#include<stdlib.h>


int call_by_ref(int *a){
	*a += 5;
	return *a;
}
void main()
{
	int a = 5;
	printf("a = %d\n",a);
	printf("a = %d",call_by_ref(&a));

}
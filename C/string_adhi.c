#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char alphabets[26][2],c;
	char input[100],output[100];
	int weight[26],i=0,j;

	for(c='a';c<='z';c++){
		alphabets[i][0] = c;
		alphabets[i][1] = i;
		i++;
	}

	printf("Enter message received:\n");
	gets(input);
	i = 0;

	for(i=0;i<strlen(input);i++){
		c = input[i];
		for(j=0;j<26;j++){
			if(c==alphabets[j][0]){
				if((int)(alphabets[j][1])<3){
					output[i] = alphabets[j+23][0];
				}
				else{
					output[i] = alphabets[j-3][0];
				}
			}
		}
	}

	printf("Decoded Message is:\n");
	printf("%s",output);
}
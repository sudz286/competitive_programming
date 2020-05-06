#include<stdio.h>
#include<stdlib.h>

int fl_plan[11];

// struct b_pass{
// 	char name[20];
// 	char sex;
// 	int s_no;
// 	char class;
// };

// int if_full()
// {
// 	int i;
// 	int status=1;
// 	for (i=0;i<10;1++){
// 		if(fl_plan[i]==0)
// 			status = 0;
// 	}
// 	return status;
// }

int if_fc_full(){
	int i;
	int status = 1;
	for(i=1;i<6;i++){
		if(fl_plan[i]==0)
			status = 0;
	}
	return status;
}

int if_econ_full(){
	int i;
	int status = 1;
	for(i=6;i<11;i++){
		if(fl_plan[i] == 0){
			status = 0;
		}
	}
	return status;
}

void print_b_pass(int position,int check){
	printf("\tBOARDING PASS\n");
	printf("\n SEAT NO:%d",position);
	if(check==1){
		printf("\t CLASS:FIRST CLASS\n");
	}
	else{
		printf("\t CLASS: ECONOMY\n");
	}

}

void assign_seat(int check){
	int i=0;
	if(check==1){
		for(i=1;i<6;i++){
			if(fl_plan[i]==0){
				fl_plan[i]=1;
				print_b_pass(i,check);
				break;
			}
		}
	}
	if(check == 2){
		for(i=6;i<11;i++){
			if(fl_plan[i]==0){
				fl_plan[i]=1;
				print_b_pass(i,check);
				break;
			}	
		}
	}

}



void main()
{
	int check;
	int change_class;
	// struct b_pass ticket[10];
	while(1){
	printf("\nWelcome to the flight,Enter 1-FC 2-Econ: ");
	scanf("%d",&check);

	if(!if_fc_full()&&check==1){
		assign_seat(check);
		continue;
	}

	if(!if_econ_full()&&check == 2){
		assign_seat(check);
		continue;
	}

	if(if_fc_full()&&!if_econ_full()&&check==1){
		printf("\nDo you wish to sit in Econ?Y=1,N=0: ");
		scanf("%d",&change_class);
		if(change_class){
			assign_seat(2);
			continue;
		}
		else{
			printf("\nThe next flight is in 3 hours");
			continue;
		}
	}
	if(!if_fc_full()&&if_econ_full()&&check==2){
		printf("\nDo you wish to sit in FC?Y=1,N=0: ");
		scanf("%d",&change_class);
		if(change_class){
			assign_seat(1);
			continue;
		}
		else{
			printf("\nThe next flight is in 3 hours");
			continue;
		}
	}

	if(if_fc_full()&&if_econ_full()){
		printf("\nFlight is full.The next flight is in 3 hours\n");
		break;
	}
}
}


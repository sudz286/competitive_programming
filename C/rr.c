#include<stdio.h>
int tq;
struct process
{
	int pid, at, bt, ft, wt, tat,rt,finished;

};

void read(struct process s[], int n)
{
	int i;
	printf("Enter pid, at, bt: \n");
	for (i=0; i < n; i++)
	{
		scanf("%d%d%d", &s[i].pid, &s[i].at, &s[i].bt);
		s[i].rt=s[i].bt;
		s[i].finished=0;
	}
}

/*void sortArrival(struct process s[], int n)
{
	int i, j;
	struct process temp;
	for (i=0; i < n; i++)
	{
		for (j=i; j < n; j++)
		{
			if (s[j].at < s[i].at)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}*/

void rr(struct process s[], int n)
{
	int i=0,j,count=0,last_ft=0;
	while(count<n)
	{
		while(s[i].finished!=1)
		{
		if(s[i].rt<=tq)
		{
			s[i].ft+=s[i].rt;
			last_ft=s[i].ft;
			s[i].rt=0;
			count++;
			s[i].finished=1;
		}
		else
		{

			last_ft+=tq;
			s[i].ft=last_ft;
		}
		i=i+1%n;
		}
		
	}
	for(i=0;i<n;i++)
	{
		s[i].tat=s[i].ft-s[i].at;
		s[i].wt=s[i].tat-s[i].bt;
	}

}

void display(struct process s[], int n)
{
	int i;
	printf("PID\tAT\tBT\tFT\tWT\tTAT\n");
	for (i=0; i < n; i++)
		printf("%d\t%d\t%d\t%d\t%d\t%d\n", s[i].pid, s[i].at, s[i].bt, s[i].ft, s[i].wt, s[i].tat);
}

void main()
{
	int n, i, tot_wt=0, tot_tat=0;
	float awt, atat;
	printf("%d",5>2);
	struct process s[10];
	printf("Enter number of processes: ");
	scanf("%d", &n);
	printf("Enter TQ");
	scanf("%d",&tq);
	read(s, n);
	rr(s, n);
	display(s, n);
	for (i = 0; i < n; i++)
	{
		tot_wt += s[i].wt;
		tot_tat += s[i].tat;
	}
	awt = tot_wt / (float)n;
	atat = tot_tat / (float)n;
	printf("Avg waiting time: %f\n", awt);
	printf("Avg Turnaround time: %f\n", atat);
}

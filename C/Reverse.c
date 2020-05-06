#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node *head,*head1;
void display();
void push(int );
void create(int );

void main()
{
	int n,ch,x;
	struct node *temp,*temp1;
	head=(struct node*)malloc(sizeof(struct node));
	head1=(struct node*)malloc(sizeof(struct node));
	head->data=-1;
	head->next=NULL;
	head1->data=-1;
	head1->next=NULL;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter elements of linked list :\n");
	create(n);
	printf("The Linked list is :\n");
	display();
	temp=head->next;
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->next;
	}
	printf("Reversed Linked List is :\n");
	temp=head->next;
	temp1=head1->next;
	while(temp!=NULL)
	{
		temp->data=temp1->data;
		temp=temp->next;
		temp1=temp1->next;
	}
	display();

}

void create(int n)
{
	struct node *p,*temp;
	int i;
	p=head;
	printf("Enter data:");
	for(i=0;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->data);
		p->next=temp;
		temp->next=NULL;
		p=temp;

	}
}

void push(int x)
{
	struct node *p,*temp;
	p=head1;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=p->next;
	p->next=temp;
}

void display()
{
	struct node *temp;
	temp=head->next;
	if(temp==NULL)
	{
		printf("The list is empty");
	}
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}


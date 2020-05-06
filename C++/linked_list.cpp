#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class SinglyLinkedList{
	public:
		node *head,*tail;
		SinglyLinkedList(){
			head = NULL;
			tail = NULL;
		}

		void insert_at_end(int n){
			node *temp = new node;
			temp->data = n;
			temp->next = NULL;
			if(head==NULL){
				head = temp;
				tail = temp;
			}
			else{
				tail->next = temp;
				tail = tail->next;
			}
		}
		void insert_at_beg(int n){
			node *temp = new node;
			temp->data = n;
			temp->next = NULL;
			if(head==NULL){
				head = temp;
				tail = temp;
			}
			else{
				temp->next=head;
				head= temp;
			}
		}
		void delete_node(int x){
			node*temp = head;
			if(x==0){
				head=head->next;
				delete temp;
			}
			for(int i=0;i<x;i++){
				temp = temp->next;
			}
			temp->next=temp->next->next;
			de
		}

		int search(int x){
			node *temp;
			temp = head;
			int i=0;
			while(temp!=NULL){
				i++;
				if(temp->data==x){
					return i-1;
				}
				temp = temp->next;
			}
			return -1;
		}

		void print(){
			node *temp = head;
			while(temp!=NULL){
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
			cout<<"\n";
		}

		// void update()

};

int main(){
	SinglyLinkedList s;
	s.insert_at_beg(1);
	s.insert_at_end(2);
	s.insert_at_beg(0);
	s.insert_at_end(3);
	s.print();
	cout<<s.search(2);
	return 0;


}
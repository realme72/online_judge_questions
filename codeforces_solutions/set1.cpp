#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;	
};

void printList(Node *n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
	Node *head=NULL;
	Node *second=NULL;
	Node *third=NULL;

	head=new Node();
	second=new Node();
	third=new Node;

	head->data=1;			//assign data in first node 
	head->next=second;		//link first node with second

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;

	printList(head);

	return 0;
}

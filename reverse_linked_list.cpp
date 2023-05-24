/*
Algorithm:

To solve the problem we follow this algorithm,

There is a function named as Reverse(start_node, k) and it reverses the k nodes from the start_node and every time it returns a starting node of that group.

1. We store the next pointer into node variable and connect the current pointer to the head of another node variable name as prev.
2. In the reverse list head node of the linkedlist will come to the tail and we connect the next node to next pointer of the head.
*/

#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

//Create a new node
struct node* create_node(int x){
    struct node* temp= new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}

//Enter the node into the linked list
void push(node** head,int x){
    struct node* store=create_node(x);
    if(*head==NULL){
        *head =store;
        return;
    }
    struct node* temp=*head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=store;
}

//Reverse the linked list
struct node* reverse(node* head, int k){
	if(head==NULL){
		return NULL;
	}
	struct node* next=NULL;
	struct node* prev=NULL;
	struct node* curr=head;
	int count=0;
	while(curr && count<k){
		//we store the next pointer into next
		//and connect the  current pointer to the head of the prev
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		count++;
	}
	//in the reverse list head node of the linkedlist will come to the tail
	//for this we connect the next node to it's next pointer 
	head->next=reverse(curr,k);
	return prev;
}

//Print the list
void print(node* head){
	struct node* temp=head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
    struct node* l=NULL;
    push(&l,1);
    push(&l,2);
    push(&l,3);
    push(&l,4);
    push(&l,5);
    push(&l,6);
    cout<<"Before the reverse operation"<<endl;
    print(l);
    l=reverse(l,2);
    cout<<"\nAfter the reverse operation"<<endl;
    print(l);
    return 0;
}

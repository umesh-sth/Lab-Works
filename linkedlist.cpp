#include<iostream>
#include "linkedlist.h"
#include<stddef.h>
using namespace std;


List::List(){
	HEAD = NULL;
	TAIL = NULL;
	
}

List::~List(){}
bool List::isEmpty(){
	if (HEAD==NULL && TAIL == NULL)
		cout<<"EMPTY LIST"<<endl;
	else
		cout<<"NOT EMPTY"<<endl;
}

void List::addToHead(int data){
	Node* newNode= new Node();
	newNode ->info = data;
	newNode ->next = HEAD;
	HEAD = newNode;
	if(TAIL==NULL)
		TAIL= HEAD;
	
}  

void List::traverse(){
	Node* temp = HEAD;
	
	while(temp==NULL){
		cout<< temp->info<< "   ";
		temp = temp-> next;
		
		
	}
	
}


int main(){
	List list1;
	list1.isEmpty();
	list1.addToHead(6);
	list1.addToHead(5);
	list1.traverse();
	return 0;
	
	
}

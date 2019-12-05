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
	
	while(temp!=NULL){
		cout<< temp->info<< "   ";
		temp = temp-> next;
		
		
	}
	
}
void List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	HEAD = nodeToDelete->next;
	
}

void List::remove(int data){
		if (HEAD==NULL && TAIL == NULL)
			return;
		if(HEAD ->info == data){
		
			List::removeFromHead();
			HEAD= NULL;
			TAIL = NULL;
	}
	else{
		Node* temp;
		temp = HEAD ->next;
		Node* prev;
		prev = HEAD;
		
		while(temp!= NULL){
			if(temp->info == data){
				prev->next = temp ->next;
				delete temp;
				break;
			}
				
			if(prev ->next== NULL){
				TAIL = prev;
			}
			else{
				prev = prev -> next;
				temp = temp -> next;
			}
		}
		
	}
			
}


int main(){
	List list1;
	list1.isEmpty();
	list1.addToHead(55);
	list1.addToHead(6);
	list1.addToHead(5);
	//list1.addToHead(8);
	list1.remove(55);
	
	//list1.traverse();
	list1.removeFromHead();
	list1.traverse();
	//list1.remove(5);
	//list1.traverse();
	return 0;
	
	
}

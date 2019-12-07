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
int List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	int num = HEAD->info;
	HEAD = nodeToDelete->next;
	return num;
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

bool List::search(int data){
		if (HEAD==NULL && TAIL == NULL)
			return false;
		Node* temp;
		temp= HEAD;
		while (temp!=NULL){
			if (temp->info == data){
				cout<<"Search FOUND"<<endl;
				return true;
			}
			else{
				temp= temp->next;
				
			}
			
		}
		return false;
	
}
void List::addToTail(int data){
	Node* newnode = new Node();
	newnode->info = data;
	newnode->next = NULL;
	TAIL->next = newnode;
	TAIL = newnode;
	
}
void List::add(int data, Node* predessor){
	Node* newNode = new Node();
	newNode->info = data;
	newNode->next = predessor->next;
	predessor->next = newNode;
}

bool List::retrieve(int data, Node * &outputptr) {
		Node* p = new Node();
	p = HEAD;
	while (p != NULL && p->info != data) {
		p = p->next;
	}
	if (p == NULL)	return false;
	else {
		outputptr = p;
		return true;
	}
}
/*int Stack::pop(){
	Node* nodeToDelete;
	nodeToDelete = ;
	int num = TAIL->info;
	TAIL = NULL;
	return num;
}*/
int main(){
	Node* ptr = new Node();
	List list1;
	for (int i = 10; i <= 20; i += 2) {
		list1.addToHead(i);
	}
	list1.isEmpty();
	list1.addToHead(55);
	list1.addToHead(6);
	list1.addToHead(5);
	list1.addToHead(15);
	list1.traverse();
	list1.remove(55);
	list1.removeFromHead();
	list1.search(6);
	list1.addToTail(88);
	list1.retrieve(6, ptr);
	list1.add(7, ptr);
	list1.traverse();
	
//IMPLEMETING STACK 
	cout<<" STACK  /n Implementing stack:"<<endl;
	Stack stack;
	for(int i=0;i<12;i+=2)
		stack.push(i);
	stack.top();

	//int a =stack.pop();
	//cout<<a<<endl;
	
//implementing queue
	cout<<"Queue Implementation:"<<endl;
	Queue queue;
	queue.enqueue(102);
	queue.enqueue(103);
	queue.enqueue(104);
	queue.dequeue();
	queue.showitems();
	
	
	return 0;
	
	
}

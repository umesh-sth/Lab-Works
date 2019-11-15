#include<iostream>
#include "queue.h"
using namespace std;
Queue::Queue(){
	rear=-1;
	front=-1;
}
Queue::~Queue(){}

void Queue::enqueue(char element){
	int new_rear = (rear+1)%MAX;
	if(front==new_rear)
		cout<<"Queue overflow"<<endl;
	else{
		rear= new_rear;
		elements[rear]= element;
	}
	
}
int Queue::dequeue(){
	if(front==rear)
		cout<<"QUeue underflow and cannnot"<<endl;
	else{
		front=(front+1)%MAX;
		return elements[front];
	}
}

int main(){
	Queue q;
	q.enqueue('a');
	q.enqueue('b');
	char a=q.dequeue();
	char b=q.dequeue();
	//cout<<a<<b;
	return 0;
}

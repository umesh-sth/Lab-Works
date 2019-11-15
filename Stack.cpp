#include<iostream>
#include "s.h"
Stack::Stack(){
	top=-1;
}
Stack::~Stack(){}
void Stack::push(int element){
	if(top>=MAX_STACK_SIZE-1){
		std::cout<<"CAnnot push element" << element << ".Stack is full" <<std::endl;
	}
	else{
		top++;
		this->elements[top] =  element;
	}
}
int Stack::pop(){
	if(top<0){
		std::cout<<"Stack is Empty."<<std::endl;
	}
	else {
		top--;
		int p=elements[top];
		return p;
	}
	
}

bool Stack::isEmpty(){
	if(top<0)
		return true;
	else
		return false;
}





int main(){
	Stack s;
	s.push(10);
	s.isEmpty();
	s.push(50);
	int a=s.pop();
	std::cout<<a;
	
}

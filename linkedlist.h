class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
		//functions
		
		bool isEmpty();
		void addToHead(int data);
		void traverse();
		void remove(int data);
		int removeFromHead();
		bool search(int data);
		void addToTail(int data);
		void add(int data, Node* predessor);
		bool retrieve ( int data, Node* &outputptr);
};
class Stack{
	private:
		List l;
	public:
		void push(int data){
			l.addToHead(data);
		}
		int top(){
			return l.removeFromHead();
			
			
		}
		int pop();
			
			
		
};
class Queue{
	private:
		List l;
	public:
		void enqueue(int data){
			l.addToHead(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
};

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
		void removeFromHead();
		bool search(int data);
};
/*class Stack{
	private:
		List l;
	public:
		void push(int data){
			l.addToHead(data);
		}
		int pop(){
			return l.removeFromHead();
			
		}
};*/

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
};

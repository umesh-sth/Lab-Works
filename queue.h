#define MAX 10
class Queue{
	public:
		Queue();
		~Queue();
		
		
		void enqueue(char element);
		int dequeue();
	private:
		int rear;
		int front;
		char elements[MAX];
		//char data;
};

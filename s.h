#define MAX_STACK_SIZE 100
class Stack{
	public:
		Stack();
		~Stack();
		
		void push(int element);
		int pop();
		int peak();
		bool isEmpty();
		
	private:
		int elements[MAX_STACK_SIZE];
		int top;
		
};

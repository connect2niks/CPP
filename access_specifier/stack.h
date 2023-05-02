class stack
{
	private:
		char *data;
		int top;

	public:
		stack();
		~stack();
		int empty();
		void push(char x);
		void pop();
		char top_();
	
};

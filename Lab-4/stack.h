#include<vector>

using namespace std;

template <typename T>
class Stack;

template <typename T>
Stack<T> operator+(Stack<T> stack1, Stack<T> stack2){

Stack<T> stack3 = stack1;
Stack<T> temp1 = stack2;
Stack<T> temp2;

while(!temp1.empty()){
	temp2.push(temp1.top());
	temp1.pop();
}

while(!temp2.empty()){
	stack3.push(temp2.top());
	temp2.pop();
} 

return stack3;

}


template <typename T>
class Stack{

friend Stack<T> operator+<>(Stack<T> stack1, Stack<T> stack2);

private:
vector<T> elements;

public:
bool empty() const { return (elements.size() == 0); }
void push(const T &item) { elements.push_back(item); }
const T &top() const {return elements.back(); }
void pop() { if( elements.size() ) elements.pop_back(); }
};


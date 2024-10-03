# 22.4 Container Adapters

Adapters are not first-class containers, because they do not privoide the actual data-structure implementation in which elements can be stored and because adapters do not support iterators

## 22.4.1 stack Adapter

Class stack enables insertions into and delections from the underlying data structure at one end.(commonly referred to as a last-in, first-out data structure)

The stack operations are `push` to insert an element at the top of the stack(implemented by calling function `push_back` of the underlying container), `pop` to remove the top element of the stack(implmented by calling fuction `pop_back` of the underlying container), `top` to get a reference to the top element of the stack(implmented by calling function back of the underlying, `empty` to determine whether the stack is empty(implmented by calling function empty of the underlying container) and size to get the number of elements in the stack(implemented by calling function size of the underlying container).

```cpp
#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

template<typename T> void pushElements(T& stackRef);
template<typename T> void popElements(T& stackRef);

int main() {
	stack<int> intDequeStack;
	stack<int, vector<int>> intVectorStack;
	stack<int, list<int>> intListStack;
	cout << "Pushing onto intDequeStack:";
	pushElements(intDequeStack);
	cout << "\nPushing onto intVectorStack:";
	pushElements(intListStack);
	cout << "\nPushing onto intListStack:";
	pushElements(intListStack);
	cout << endl << endl;

	cout << "Popping from intDequeStack:";
	popElements(intDequeStack);
	cout << "\nPopping from intVectorStack:";
	popElements(intVectorStack);
	cout << "\nPopping from intListStack:";
	popElements(intListStack);
	return 0;
}

	template<typename T> void pushElements(T & stackRef) {
		for (int i = 0; i < 10; i++) {
			stackRef.push(i);
			cout << stackRef.top() << ' ';
		}
	}
	template<typename T> void popElements(T & stackRef) {
			while (!stackRef.empty()) {
				cout << stackRef.top() << ' ';
				stackRef.pop();
			}
	}

```
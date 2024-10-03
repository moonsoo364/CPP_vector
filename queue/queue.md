## 22.4.2 queue Adapter

Class queue enables insertions at the back of the underlying data structure and delections from the front A queue can be implmented with STL datastructure list or deque. By default, a queue is implemented with a deque. The common queue operations are `push` to insert an element at the back of the queue `pop` tto remove the element at the front of the queue `front` to get a reference to the first element in the queue back to get a reference to the last element in the queue, empty to determine whether the queue is empty and size to get the number of elements in the queue

```cpp
#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<double> values;
	values.push(3.2);
	values.push(9.8);
	values.push(5.4);
	
	cout << "Popping from value";
	while(! values.empty()){
		cout << values.front() << ' ';
		values.pop();
	}
	cout << endl;
	return 0;
}
```
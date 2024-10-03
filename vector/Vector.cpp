#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;


void outputVector(const vector<int>&);//display the vector
void inputVector(vector<int>&);//input values into the vector

int main() {
	vector<int> integers1(7);
	vector<int> integers2(10);

	cout << "\n Size of vector integers is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers1);

	cout << "\n Size of vector integers2 is" << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers2);

	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1:" << endl;
	outputVector(integers1);
	cout << "integers:" << endl;
	outputVector(integers2);

	//use inequality (!=) operator with vector objects
	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;
	vector<int> integers3(integers1);

	// intergers3's memory address is different integers1
	cout << "\nSize of vector integers3 is " << integers3.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers3);

	//integers1's memory address is different integers2
	//right-hand side vector are copied into the left-han side vector
	//this copying process involves creating a new internal array in integers1 and 
	//copying the elements from integers end up the with the same elements 
	//but they still different memory address
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	// use equality (==) operator with vector objects
	cout << "\nEvaluating: integers1 == integers2" << endl;
	//integers1 and integers2 compared with call by value
	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	//use square brackets to create 1value
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	cout << "\nAttempt to assign 1000 to integers1.at(15)" << endl;
	integers1.at(15) = 1000;//Error Out of range

	return 0;

}

void outputVector(const vector<int>& array) {
	size_t i;

	for (i = 0; i < array.size(); i++) {
		cout << setw(12) << array[i];
		if ((i + 1) % 4 == 0)
			cout << endl;
	}

	if (i % 4 != 0)
		cout << endl;

}

void inputVector(vector<int>& array) {
	for (size_t i = 0; i < array.size(); i++) {
		cin >> array[i];
	}
}

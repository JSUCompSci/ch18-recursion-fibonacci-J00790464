/*
Fibonacci Recursion
By: Dakota Nichols
*/
#include <iostream>

using namespace std;

int FibonacciRecursion(int);
//Prototype
int main() {
	int number;
	cout << "List the number of recursions for the Fibonacci Sequence?" << endl;
	//Asks for Nth term in sequence
	cin >> number;
	cout << "Your Fibonacci number is: " << FibonacciRecursion(number) << endl;
	//Calls function and prints answer.
	return 0;

}

int FibonacciRecursion(int input) {
	if (input == 0) {
		return 0;
	} //Base case for 0 is equal to 0
	if (input == 1) {
		return 1;
	} //Base case for 1 is equal to 1
	return (FibonacciRecursion(input - 1) + FibonacciRecursion(input - 2));
	//Reruns the function until all units are in the form of the base cases,
	//Then takes the sum.
}
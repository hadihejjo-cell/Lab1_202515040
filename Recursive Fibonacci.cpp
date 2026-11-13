#include<iostream>
using namespace std;

long long fib(int n) {
	if (n <= 2)
		return n;
	return fib(n - 1) + fib(n - 2);
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "Fibonacci of " << n << " is: " << fib(n) << endl;
	return 0;
}
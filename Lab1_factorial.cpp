#include<iostream>
using namespace std;

long long factorialRec(int n) {
	if (n == 0) return 1;
	return n * factorialRec(n - 1);
}

long long factorialIter(int n) {
	long long result = 1;
	for (int i = 2; i <= n; i++) 
		result *= i;
	
	return result;
}
int main() {
	for (int n = 0; n <= 22; n++) {
		cout << n << "! = " << factorialRec(n);
	
	 cout << endl;
		
	}
	return 0;
	

}



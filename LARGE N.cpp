#include <iostream>
using namespace std;

unsigned long long factorialIter(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

unsigned long long factorialRec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRec(n - 1);
}

int main() {
  
    cout << "Testing small values:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Factorial of " << i << " is " << factorialIter(i) << endl;
    }
    int big;
    cout << "\nEnter a large n: ";
    cin >> big;

   cout << "iterative finished: " << factorialIter(big) << endl;
    //cout << "recursive finished: " << factorialRec(big) << endl;

    return 0;
}
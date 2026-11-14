// Generate N terms of Fibonacci series

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

void generateFibonacci(int n, int i = 0) {
    if (i == n) return;
    cout << fib(i) << " ";
    generateFibonacci(n, i + 1);
}

int main() {
    int n = 7;
    cout << "First " << n << " Fibonacci terms: ";
    generateFibonacci(n);
    cout << endl;
    return 0;
}
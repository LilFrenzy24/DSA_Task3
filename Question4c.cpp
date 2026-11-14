// Nth term of Fibonacci series

#include <iostream>
using namespace std;

int fibonacciTerm(int n) {
    if (n <= 1) return n;
    return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
}

int main() {
    int n = 6;
    cout << "Fibonacci term " << n << " is: " << fibonacciTerm(n) << endl;
    return 0;
}
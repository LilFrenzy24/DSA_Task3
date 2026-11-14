//  Sum of first N natural numbers


#include <iostream>
using namespace std;

int sumNatural(int n) {
    if (n <= 1) return n;
    return n + sumNatural(n - 1);
}

int main() {
    int n = 5;
    cout << "Sum of first " << n << " natural numbers is: " << sumNatural(n) << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;           // 0 and 1 are not prime
    if (n == 2) return true;            // 2 is prime
    if (n % 2 == 0) return false;       // Even numbers > 2 are not prime

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void Connect() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for (int num = start; num <= end; num++) {
        if (isPrime(num))
            cout << num << " ";
    }
    cout << endl;

}

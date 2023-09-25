#include<iostream>
#include<cmath>
using namespace std;

int num;

bool is_prime() {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime.
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;  // It's not prime if it's divisible by any number between 2 and sqrt(num).
        }
    }

    return true;  // It's prime if no divisors were found.
}

int main() {
    cout << "Enter the number you want to check for: ";
    cin >> num;

    if (is_prime())
        cout << num << " is prime";
    else
        cout << num << " is not prime";

    return 0;
}


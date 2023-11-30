#include<iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 370; n++) {
        int originalNumber = n;
        int sum = 0;
        
        while (originalNumber > 0) {
            int rem = originalNumber % 10;
            sum = sum + (rem * rem * rem);
            originalNumber = originalNumber / 10;
        }

        if (sum == n) {
            cout << n << " is an Armstrong number." << endl;
        }
    }

    return 0;
}

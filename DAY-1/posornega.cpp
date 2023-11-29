#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    cout << (a < 0 ? "Negative number" : "Positive number");
    return 0;
}

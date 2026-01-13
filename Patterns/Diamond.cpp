#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper half of the Diamond!

    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++)
        cout << " ";
        for(int j = 1; j <= (2*i -1); j++)
        cout << "*";
        cout << endl;
    }

    // Lower half of the Diamond!
    for (int i = n; i >= 1; i--) {
        for(int space = 1; space <= n - i; space++)
        cout << " ";
        for(int j = 1; j <= (2*i -1); j++)
        cout << "*";
        cout<< endl;
    }

    return 0;
}
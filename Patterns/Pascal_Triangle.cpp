#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value = 1; // First value in a line is always 1

        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); // Calculate next value in the line
        }
        cout << endl;
    }
    return 0;
}
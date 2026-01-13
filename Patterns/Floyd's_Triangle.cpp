#include<iostream>
using namespace std;

int main() {
    int n, number = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 1; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    return 0;
}
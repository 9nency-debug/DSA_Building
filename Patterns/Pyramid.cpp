#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - 1; space++) {
            cout << " ";
        }

        for(int j = 1; j <= i; j++) {
            cout << "*";
    }
    cout << endl;
}
return 0;
}

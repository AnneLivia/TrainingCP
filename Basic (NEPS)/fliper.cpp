#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a == 1) {
        if (b == 0) {
            cout << "B\n";
        } else {
            cout << "A\n";
        }
    } else {
        cout << "C\n";
    }

    return 0;
}


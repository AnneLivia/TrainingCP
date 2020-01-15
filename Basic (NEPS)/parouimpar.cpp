#include <iostream>
using namespace std;

int main() {

    int p1, p2;
    cin >> p1 >> p2;

    if((p1 + p2) % 2 == 0) {
        cout << "Bino\n";
    } else {
        cout << "Cino\n";
    }
    return 0;
}

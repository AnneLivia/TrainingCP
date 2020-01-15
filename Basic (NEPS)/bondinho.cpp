#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a + b <= 50) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}

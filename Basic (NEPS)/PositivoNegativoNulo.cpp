#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n > 0) {
        cout << "positivo\n";
    } else if (n < 0) {
        cout << "negativo\n";
    } else {
        cout << "nulo\n";
    }
    return 0;
}

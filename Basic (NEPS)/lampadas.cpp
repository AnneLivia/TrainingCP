#include <iostream>

using namespace std;

int main() {

    int a = 0, b = 0, n, l;
    cin >> n;
    while(n--) {
        cin >> l;
        if(l == 1) {
            a = !a;
        } else {
            a = !a; b = !b;
        }
    }

    cout << a << endl << b << endl;
    return 0;
}

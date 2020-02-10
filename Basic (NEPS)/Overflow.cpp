#include <iostream>
#include <vector>

using namespace std;

int main() {
    char op;
    int a, b, li;
    cin >> li >> a >> op >> b;

    int res;
    if(op == '+') {
        res = a + b;
    } else {
        res = a * b;
    }

    if(res > li)
        cout << "OVERFLOW\n";
    else
        cout << "OK\n";
    return 0;
}


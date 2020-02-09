#include <iostream>
using namespace std;

int fib(int a) {
    if(a <= 1)
        return 1;
    else
        return fib(a - 1) + fib(a - 2);
}

int main( ) {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int hanoi(int n) {
    return (int)(pow(2, n) - 1);
}

int main( ) {
    int n, t = 1;

    while(cin >> n && n) {
        cout << "Teste " << t++ << endl;
        cout << hanoi(n) << endl << endl;
    }
    return 0;
}

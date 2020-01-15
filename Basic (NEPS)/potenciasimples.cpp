#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long double n, x;
    cin >> n >> x;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << pow(n, x) << endl;


    return 0;
}

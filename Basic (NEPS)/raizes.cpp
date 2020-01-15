#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    float nn;
    cin >> n;
    while(n--) {
        cin >> nn;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(nn) << endl;
    }

    return 0;
}

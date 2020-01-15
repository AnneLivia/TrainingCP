#include <iostream>

using namespace std;

int main() {

    int  n, ca = 1, ct = 0, an, nn;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> nn;
        if(i == 1) {
            // if it's the first number , just save the current one
            an = nn;
        } else {
            // if currrent is equal last number, add up to ca;
            if(nn == an) {
                ca++;
                // update ct if is greater than it
                if(ca > ct) {
                    ct = ca;
                }
            } else {
                // start again
                ca = 1;
            }
            // new last  number
            an = nn;
        }
    }

    cout << ct << endl;
    return 0;
}

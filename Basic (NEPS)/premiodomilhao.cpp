#include <iostream>

using namespace std;

int main() {

    int d, a, tt = 0, t = 0;
    cin >> d;

    while(d--) {
        cin >> a;
        //  if the sum doesn't add up to 100000,
        // need to check if it's more than 1000000
        // and if the current total without current number is less than 1000000
        if((t + a <= 1000000) || (t + a > 1000000 && t < 1000000)) {
            tt++;
        }
        t+=a;
    }

    if(t >= 1000000)
        cout << tt << endl;
    return 0;
}

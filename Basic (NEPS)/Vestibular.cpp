#include <iostream>
using namespace std;

int main( ) {
    int n, t;
    string ga, us;
    cin >> n >> ga >> us;
    for (int i = 0; i < n; i++) {
        if(ga[i] == us[i])
            t++;
    }

    cout << t << endl;
    return 0;
}

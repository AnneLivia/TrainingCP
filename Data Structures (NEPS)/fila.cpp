#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a;

    cin >> n;
    vector<int>v(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> m;
    while(m--) {
        cin >> a;
        vector<int>::iterator it = find(v.begin(), v.end(), a);
        if(it != v.end()) {
            v.erase(it);
        }
    }

    for (int i = 0; i < (int)v.size(); i++) {
        if(i != 0)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
    return 0;
}

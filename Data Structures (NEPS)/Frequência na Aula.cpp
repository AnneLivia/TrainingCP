#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, t;
    set<int>s;
    cin >> n;
    while(n--) {
        cin >> t;
        s.insert(t);
    }
    cout << s.size() << endl;
    return 0;
}

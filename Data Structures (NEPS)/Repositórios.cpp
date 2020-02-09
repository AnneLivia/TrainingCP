#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, t, p, v;
    map<int,int> m, ans;
    cin >> n >> t;
    while(n--) {
        cin >> p >> v;
        m.insert({p,v});
    }

    while(t--) {
        cin >> p >> v;
        if(m.find(p) != m.end()) {
            if(m[p] < v) {
                m[p] = v;
                ans[p] = v;
            }
        } else {
            m.insert({p, v});
            ans.insert({p, v});
        }
    }

    for (auto i : ans) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

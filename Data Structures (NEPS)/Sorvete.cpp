#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int p, s;
    cin >> p >> s;

    vector<pair<int, int> > v(s, pair<int,int>());

    for (int i = 0; i < s; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    vector<pair<int,int> > ans;
    int disu = v[0].first, disv = v[0].second;
    for (int i = 1; i < s; i++) {
        if(v[i].first <= disv) {
            if(v[i].second > disv)
                disv = v[i].second;
        } else {
            ans.push_back({disu,disv});
            disu = v[i].first; disv = v[i].second;
        }
    }

    if(find(ans.begin(), ans.end(), make_pair(disu, disv)) == ans.end())
        ans.push_back({disu, disv});

    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    cout << "\n";

    return 0;
}

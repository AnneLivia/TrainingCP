#include <iostream>
#include <set>

using namespace std;

int main()
{
    int fab = 0, c, v;
    set<int>t;
    cin >> c;
    while(c--) {
        cin >> v;
        if(t.find(v) == t.end()) {
            fab+=2;
            t.insert(v);
        } else {
            t.erase(v);
        }
    }
    cout << fab << endl;
    return 0;
}

#include <vector>
#include <iostream>

using namespace std;

vector<int>id, ra;

int findd(int p) {
    if(id[p] == p)
        return p;
    return id[p]= findd(id[p]);
}

void unnion(int p, int q) {
    int idp = findd(p);
    int idq = findd(q);

    if(ra[idp] > ra[idq]) {
        id[idq] = idp;
    } else if (ra[idp] < ra[idq]) {
        id[idq] = idp;
    } else {
        id[idp] = idq;
        ra[idq]++;
    }
}

int main() {
    int n, k, t1, t2;
    char c;

    cin >> n >> k;

    id.assign(n + 1, 0);
    ra.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)
        id[i] = i;

    while(k--) {
        cin >> c >> t1 >> t2;
        if(c == 'C') {
            if(findd(t1) == findd(t2))
                cout << "S\n";
            else
                cout << "N\n";
        } else {
            if(findd(t1) != findd(t2))
                unnion(t1, t2);
        }
    }
    return 0;
}

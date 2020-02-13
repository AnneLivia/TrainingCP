#include <iostream>
#include <vector>

using namespace std;

vector<int>id, ra, pt;

int findd(int p) {
    if(id[p] == p) {
        return p;
    } else {
        pt[p] = pt[id[p]];
        return id[p] = findd(id[p]);
    }
}

void unionn(int p, int q) {
    int idp = findd(p);
    int idq = findd(q);

    if(ra[idp] < ra[idq]) {
        id[idp] = idq;
        pt[idq]+=pt[idp];
    } else if (ra[idp] > ra[idq]) {
        id[idq] = idp;
        pt[idp]+=pt[idq];
    } else {
        id[idp] = idq;
        ra[idp]++;
        pt[idq]+=pt[idp];
    }
}

int main() {

    int n, m, p, q, b, qtd;
    while(cin >> n >> m && n && m) {
        pt.assign(n, 0);
        id.assign(n, 0);
        ra.assign(n, 0);
        qtd = 0;
        for (int i = 0; i < n; i++) {
            id[i] = i;
            cin >> pt[i];
        }
        while(m--) {
            cin >> q >> p >> b;
            p--; b--;
            if(q == 1) {
                if(findd(p) != findd(b))
                    unionn(p,b);
            } else {
                int gr = findd(0);
                p = findd(p);
                b = findd(b);
                if(pt[p] > pt[b] && gr == findd(p)) {
                    qtd++;
                } else if (pt[p] < pt[b]&& gr == findd(b)) {
                    qtd++;
                }
            }
        }
        cout << qtd << endl;
    }
    return 0;
}

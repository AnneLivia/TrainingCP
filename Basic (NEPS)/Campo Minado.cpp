#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;
    vector<int> v(n, 0);
    vector<int> co(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    int cont;
    for(int i = 0; i < n; i++) {
        cont = 0;
        if(v[i] != 0)
            co[i]++;
        if(i - 1 >= 0 && v[i - 1] != 0)
            co[i]++;
        if(i + 1 < n && v[i + 1] != 0)
            co[i]++;
    }

    for (int i = 0; i < n; i++) {
        cout << co[i] << endl;
    }

    return 0;
}


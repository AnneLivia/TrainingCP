#include <iostream>
#include <vector>

using namespace std;

int main() {


    int n, sum = 0, aux;
    bool line = true, col = true, diag = true;

    cin >> n;

    vector<vector<int> >v(n, vector<int>(n, 0));


    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    // check all lines
    for (int i = 0; i < n; i++) {
        int aux = 0;
        for(int j = 0; j < n; j++) {
            aux+=v[i][j];
        }
        if(sum == 0)
            sum = aux;
        else {
            if(aux != sum) {
                line = false;
                break;
            }
        }
    }

    // check all coll
    for (int i = 0; i < n; i++) {
        aux = 0;
        for(int j = 0; j < n; j++) {
            aux+=v[j][i];
        }
        if(aux != sum) {
            col = false;
            break;
        }
    }

    // check all coll
    for (int i = 0; i < n; i++) {
        aux = 0;
        for(int j = 0; j < n; j++) {
            aux+=v[j][i];
        }
        if(aux != sum) {
            col = false;
            break;
        }
    }

    // check diag1

    aux = 0;
    for (int i = 0; i < n; i++) {
        aux+=v[i][i];
    }

    if(aux != sum)
        diag = false;
    else {
        // other diag
        int i = 0, j = n - 1, aux = 0;
        while(i < n && j >= 0) {
            aux+=v[i][j];
            i++; j--;
        }

        if(aux != sum)
            diag = false;
    }

    if(line && diag && col)
        cout << sum << endl;
    else
        cout << "-1\n";
    return 0;
}

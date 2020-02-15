#include <iostream>
#include <vector>


using namespace std;

int main() {


    int n;

    cin >> n;

    vector<int>v(n, 0);
    vector<int>resp(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {

        int contl = 0, contr = 0, foundl = 0, foundr = 0;

        if(v[i] == 0)
            resp[i] = 0;
        else {
            int j = i;
            for(int j = i - 1; j >= 0; j--) {
                if(v[j] != 0) {
                    contl++;
                } else {
                    contl++;
                    foundl = 1;
                    break;
                }
            }


           for(int j = i + 1; j < n; j++) {
                if(j >= n)
                    break;
                if(v[j] != 0) {
                    contr++;
                } else {
                    contr++;
                    foundr = 1;
                    break;
                }
            }

        }

        if(contl > 9)
            contl = 9;
        if(contr > 9)
            contr = 9;

        if(foundl && foundr)
            resp[i] = contl < contr ? contl : contr;
        else {
            if(foundl)
                resp[i] = contl;
            else
                resp[i] = contr;
        }
    }

    for (int i = 0; i < n; i++) {
        if(i != 0)
            cout << " ";
        cout << resp[i];
    }

    cout << endl;
    return 0;
}

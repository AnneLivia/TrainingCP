#include <iostream>
#include <string>
using namespace std;

bool isvowel(char c)  {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main( ) {

    string o;
    cin >> o;

    int i = 0, j = (int)o.size() - 1, iscool = 1;

    while(i <= j) {
        if(isvowel(o[i])) {
            if(isvowel(o[j])) {
                if(o[j] == o[i]) {
                    i++; j--;
                } else {
                    iscool = 0;
                    break;
                }
            } else {
                j--;
            }
        } else {
            i++;
        }
    }

    if(iscool) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}

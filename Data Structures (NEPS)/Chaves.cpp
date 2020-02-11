#include <iostream>
#include <stack>

using namespace std;

int main() {

    int n, bad = 0;
    string c;
    stack<char>s;
    cin >> n;
    cin.ignore();
    while(n--) {
        getline(cin, c);
        for (int i = 0; i < (int)c.size(); i++) {
            if(c[i] == '{') {
                s.push('{');
            } else if (c[i] == '}') {
                if(s.empty()) {
                    bad = 1;
                    break;
                }
                if(s.top() == '{') {
                    s.pop();
                } else {
                    bad = 1;
                    break;
                }
            }
        }
    }

    if(bad || !s.empty()) {
        cout << "N\n";
    } else {
        cout << "S\n";
    }
    return 0;
}

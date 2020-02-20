#include <iostream>

using namespace std;

string title(string f){
    for (int i = 0; i < (int)f.size(); i++) {
        if(i == 0 || f[i - 1] == ' ')
            f[i] = toupper(f[i]);
        else
            f[i] = tolower(f[i]);
    }
    return f;
}

int main(){
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}

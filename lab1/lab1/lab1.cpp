#include <iostream>
#include <string>
using namespace std;
string CorrectName(string& s) {
    int k = 0;
    char last = ' ';
    for (int i = 0; char c = s[i]; i++) {

        if (last == ' ') {
            if (c == ' ') continue;
            if (c >= 'a' && c <= 'z') c -= ' ';
        }
        else if (c <= 'Z' && c >= 'A') c += ' ';
        s[k++] = last = c;
    }

    return s;
}
int main() {
    string name; char c;
    int value = 0, i = 0;
    while (!value) {
        cout << "Nhap ho ten" << endl;
        getline(cin, name);
        for (i = 0; c = name[i]; i++) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' '))value = 0;
            else value = 1;
        }

        cout << "nhap lai ho ten chi gom cac chu cai" << endl;
        getline(cin, name);
    };

    string Name = CorrectName(name);

    cout << Name;

    return 0;
}


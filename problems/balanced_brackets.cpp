#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int balance = 0;
        bool possible = false;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '(')
                balance++;
            else
                balance--;

            if (balance == 0) {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}
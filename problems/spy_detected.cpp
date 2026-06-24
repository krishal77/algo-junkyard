#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int spy;

        
        if (a[0] == a[1] || a[0] == a[2]) {
            spy = a[0];
        } else {
            spy = a[1];
        }

       
        for (int i = 0; i < n; i++) {
            if (a[i] != spy) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
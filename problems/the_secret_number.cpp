#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int count = 0;
        long long p = 10;
        long long ans[18];

        for (int i = 1; i <= 18; i++) {
            long long d = p + 1; 

            if (n % d == 0) {
                ans[count++] = n / d;
            }

            p *= 10;
        }

        sort(ans, ans + count); 

        if (count == 0) {
            cout << 0 << "\n";
        } else {
            cout << count << "\n";
            for (int i = 0; i < count; i++) {
                cout << ans[i];
                if (i + 1 < count) cout << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
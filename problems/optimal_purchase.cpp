#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        if (3 * a <= b) {
            cout << n * a << "\n";
        } else {
            long long groups = n / 3;
            long long rem = n % 3;
            cout << groups * b + min(rem * a, b) << "\n";
        }
    }

    return 0;
}
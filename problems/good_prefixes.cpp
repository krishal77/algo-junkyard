#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
 while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        int ans = 0;
        unordered_map<long long, int> moves;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            sum += x;
            moves[x]++;

            if (sum%2 == 0 && moves.count(sum / 2))
                ans++;
        }
        cout << ans << endl;
    }
}
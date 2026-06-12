#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {

        int y, a;
        cin >> y >> a;

        int fuel[y];

        for (int i = 0; i < y; i++) {
            cin >> fuel[i];
        }
        int maxFuel = 0;


        for (int i = 0; i < y - 1; i++) {

            if ((fuel[i + 1] - fuel[i]) > maxFuel) {
                maxFuel = fuel[i + 1] - fuel[i];
            }
        }

        if ((fuel[0] - 0) > maxFuel) {
            maxFuel = fuel[0];
        }
     if ((a - fuel[y - 1]) * 2 > maxFuel) {
            maxFuel = (a - fuel[y - 1]) * 2;
        }

        cout << maxFuel << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

bool isDistinct(int y) {
    int freq[10] = {0};
    
    while (y > 0) {
        int digit = y % 10;
        if (freq[digit] > 0) return false;
        freq[digit]++;
        y /= 10;
    }
    
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (isDistinct(y)) {
            cout << y << "\n";
            break;
        }
    }

    return 0;
}
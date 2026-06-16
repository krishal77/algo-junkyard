#include <iostream>
using namespace std;

int main() {
    int rn, sn, in;
    cin >> rn >> sn >> in;

    int rl[rn], sl[sn];
    string instruction;

    for(int i = 0; i < rn; i++) {
        cin >> rl[i];
    }

    for(int i = 0; i < sn; i++) {
        cin >> sl[i];
    }

    cin >> instruction;

    int robot = rn;

    for(int i = 0; i < in; i++) {

        if(instruction[i] == 'L') {
            for(int j = 0; j < rn; j++) {
                rl[j]--;
            }
        } 
        else {
            for(int j = 0; j < rn; j++) {
                rl[j]++;
            }
        }

        for(int j = 0; j < rn; j++) {
            for(int k=0;k<sn;k++){
            if(rl[j] == sl[k]) {
                robot--;
                rl[j]=1000000;
            }
            }
            
        }

        cout << robot << endl;
    }

    return 0;
}
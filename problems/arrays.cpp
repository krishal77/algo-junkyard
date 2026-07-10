#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> arr1(n);
        for(int q = 0; q < n; q++){
            cin >> arr1[q];
        }

        vector<int> ansArr(n, 0);

        for(int i = 0; i < n; i++){
            int bigCnt = 0;
            int smolCnt = 0;
            long long curVal = arr1[i];
            for(int j = i+1; j < n; j++){
                if(arr1[j] > curVal){
                    bigCnt++;
                } else if(arr1[j] < curVal){
                    smolCnt++;
                }
            }

            int bestOne = bigCnt;
            if(smolCnt > bestOne) bestOne = smolCnt;

            ansArr[i] = bestOne;
        }

        for(int i = 0; i < n; i++){
            cout << ansArr[i];
            if(i != n-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
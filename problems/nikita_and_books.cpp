#include<iostream>
using namespace std;

void sort(int n, long long arr[]){
    long long prev = 0;

    for(int i = 0; i < n; i++){
        long long need = prev + 1;

        if(arr[i] < need){
            cout << "NO\n";
            return;
        }

        if(i + 1 < n)
            arr[i + 1] += arr[i] - need;

        prev = need;
    }

    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(n, arr);
    }

    return 0;
}
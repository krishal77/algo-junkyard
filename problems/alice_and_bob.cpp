#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
    cin >> t;

    while(t--) {
    int n; long long a;
        cin >> n >> a;

  vector<long long> v(n);
        for(int i=0;i<n;i++)   cin >> v[i];

        long long x = a;

    int left=lower_bound(v.begin(), v.end(),x)-v.begin();
int right=n-(upper_bound(v.begin(),v.end(),x)-v.begin());

        if(right>left){
        cout << a+1 << endl;
        }
        else{
    cout << a-1 << endl;
        }
    }

return 0;
}
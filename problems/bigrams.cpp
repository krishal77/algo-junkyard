#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;
    int maxx=0;
    int count=0;

for (int i = 0; i < k; i++) {
    int x;
    cin >> x;
    maxx = max(maxx, x);
    if (x >= 2) count++;
        }

        if (maxx >= 3 || count >= 2)
            cout << "YES"<<endl;
        else
            cout << "NO" <<endl;
}
return 0;
}
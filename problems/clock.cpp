#include <iostream>
using namespace std;

int main(){
 int t;
  cin>>t;
while(t--){
    int a,b,c,d,ans = 0;
cin >>a>>b>>c>> d;
int i = a;
while (true) {
    if (i == c) ans++;
    else if (i == d) ans++;

    if (i == b) break;

    i++;
    if (i == 13) {
        i = 1;
    }  
}

if (ans == 1) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}

}
return 0;
}

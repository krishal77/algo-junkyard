#include <iostream>
using namespace std;

int main(){
    int t,a,b,c;
    int ans;
    cin>> t;
    while(t>0){
        cin>>a>>b;
        c=a;
        ans=(c-a)+(b-c);
        t--;
        cout<<ans<<endl;
    }

    return 0;
}
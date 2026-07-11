#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int k;
cin>>k;
string coins;
cin>>coins;
int alice=0;
for(int i=0;i<k;i++){
if(coins[i]=='U'){
alice++;
}
}
if(alice%2==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
    }
    return 0;
}
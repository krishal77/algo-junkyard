#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    int n,count=0;
    long long sum=0;
    cin>>n;
long long arr[n];
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){
       sum+=arr[i];
       if(arr[i]==1){
        count++;
       }
    }

    if(sum >= count+n && n>1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int k,ans=1;
    cin>>k;
    vector <int> vec(k);
    for(int i=0;i<k;i++){
        cin>>vec[i];
    }
    for(int i=0;i<k;i++){
       for(int j=i+1;j<k;j++){
       if(vec[i]==vec[j]){
        ans=0;
        break;
       }
    }
    }
    if(ans==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
        return 0;
}
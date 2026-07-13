#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long t,sum=0,missing=0,num=0;
    cin>>t;
    sum=(t*(t+1))/2;
    vector <int> vec (t);
    for(int i=0;i<t-1;i++){
        cin>>vec[i];
        missing+=vec[i];
    }
    num=sum-missing;
    cout<<num;
    return 0;

}
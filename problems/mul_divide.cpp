#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=0,c2=0;
        while(n%2==0){
            n/=2;
            ++c1;
        }
        while(n%3==0){
            n/=3;
            ++c2;
        }
        if(n==1 &&c1<=c2){
            cout<< 2*c2-c1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
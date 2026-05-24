#include <iostream>
using namespace std;

int pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
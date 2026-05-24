#include <iostream>
using namespace std;

int pattern(int n){
    int space=2*(n-1);
    for(int i=0;i<n;i++){
        for(int j=1;j<i+1;j++){
        cout<<j;
    }
    for(int j=0;j<space;j++){
        cout<<" ";
    
     }
    for(int j=i;j>0;j--){
        cout<<j;
    }
     cout<<endl;
     space=space-2;
    }
}
int main(){
    int n;
    //cin>>n;
    pattern(5);
    return 0;
}
#include<iostream>
using namespace std;

int pattern(int n){
for(int i=0;i<n;i++){
//upper part
    for(int j=0;j<(n-i);j++){
        cout<<"*";
    }
    
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    for(int j=0;j<(n-i);j++){
        cout<<"*";
    }
    cout<<endl;
}
int space=8;
for(int i=0;i<n;i++){
    //lower part
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    
    for(int j=0;j<space;j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    space=space-2;
    cout<<endl;
}


}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
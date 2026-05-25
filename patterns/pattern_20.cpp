#include<iostream>
using namespace std;

int pattern(int n){
    int space=8;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
   
    for(int j=0;j<space;j++){
        cout<<" ";
    }

    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    space=space-2;
}
//lower part
int spac=2;
for(int i=0;i<n;i++){
    for(int j=0;j<(n-i-1);j++){
        cout<<"*";
    }
   
    for(int j=0;j<spac;j++){
        cout<<" ";
    }

    for(int j=0;j<(n-i-1);j++){
        cout<<"*";
    }
    cout<<endl;
    spac=spac+2;
}
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
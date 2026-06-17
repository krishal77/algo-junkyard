#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sereja=0,dima=0;
    int k=0;
    int l=n-1;
    int a;
    if(n%2==0){
        a=n/2;
    }
    else{
        a=(n/2)+1;
    }
while(a>0){
    if(k<=l){
    if(arr[k]>arr[l]){
        sereja=sereja+arr[k];
        k++;
    }

    else{
        sereja=sereja+arr[l];
        l--;
    }
}
if(k<=l){
    if(arr[k]>arr[l]){
        dima=dima+arr[k];
        k++;
    }
    else{
        dima=dima+arr[l];
        l--;
    }
}
a--;
}
    

cout<<sereja<<endl<<dima;
return 0;
}
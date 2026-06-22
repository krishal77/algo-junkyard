#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
        arr[j]=arr[i];
        break;
        }
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    t--;
}
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    int indices=0;
    long int sub=1000000000;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
   
     for(int i=0;i<t-1;i++){
        if(abs(arr[i]-arr[i+1])<sub){
            sub=abs(arr[i]-arr[i+1]);
            indices=i;
        }
     }
     
    if (abs(arr[0] - arr[t-1]) < sub){
        cout<<"1"<<" "<<t;
     }else{
     cout<<indices+1<<" "<<(indices+2);
     }
     return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int moves=0;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        if(arr[i]==1){
            moves++;
            break;
        }
    }
        if(moves==1){
            cout<<"HARD";
        }else{
            cout<<"EASY";
        }

    
    return 0;
}
    
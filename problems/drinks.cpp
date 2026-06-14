#include <iostream>
using namespace std;

int main(){
    float orange=0;
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
  float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    for(int i=0;i<n;i++){
        if(abs(arr[i]) < 1e-9){
            orange=orange+0;
        }
        else{
            orange=orange+(arr[i]/100);
        }
       
    }
   

    cout<<((orange/n)*100) ;
    return 0;

}
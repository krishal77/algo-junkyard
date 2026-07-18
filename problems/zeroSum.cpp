#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;
    int arr[k],count=0;
    for (int i=0;i<k;i++){
        cin>>arr[i];
        if (arr[i]== -1)
                count++;
        }
    
    if(k%2== 1){
        cout<<"NO"<<endl;
    }
     else if (count % 2 == (k / 2) % 2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
}
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
   cin>>t;
 while(t>0){
    int k;
    cin >> k;
    long long arr[k];

    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }

    int l = 0;
    int h = 1;

    while(h < (k)){
        if(arr[h] < arr[l]){
            int temp = arr[h];         
            arr[h] = arr[l] + arr[h];   
            arr[l] = temp;             
        }
        h++;
        l++;
    }

    cout << arr[k-1]<<endl;
    t--;
   
}
return 0;
}
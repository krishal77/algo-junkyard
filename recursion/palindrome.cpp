#include <iostream>
#include <utility>
using namespace std;

bool reverse(int arr[],int n,int i) {
if(arr[i]!=arr[n]) {
    return false;
}
//swap(arr[i],arr[n]);
 reverse(arr,n-1,i+1);
return true;
}

int main() {
    int n;
    cin >> n;

    int arr[50];  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
cout<<reverse(arr,n-1,0) ;

    
    return 0;
}
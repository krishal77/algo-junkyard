#include <iostream>
#include <utility>
using namespace std;

void reverse(int arr[],int n,int i) {
if(i>=n) return ;
swap(arr[i],arr[n]);
 reverse(arr,n-1,i+1);

}

int main() {
    int n;
    cin >> n;

    int arr[50];  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
reverse(arr,n-1,0) ;

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}
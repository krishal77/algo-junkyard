// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void shiftElement(int n, int arr[],int position){
for(int i=position;i<n-1;i++){
    arr[i]=arr[i+1];
}
for(int i=0;i<n-1;i++){
        cout<<arr[i];
    }
}
int main() {
    int n,position;
    cout<<"Enter no of elements"<<endl<<"position"<<endl;
    cin>>n>>position;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shiftElement(n,arr,position);
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void shiftElement(int n, int arr[],int position,int element){
for(int i=n-1;i>=position;i--){
    arr[i+1]=arr[i];
}
arr[position]=element;
for(int i=0;i<n+1;i++){
        cout<<arr[i];
    }
}
int main() {
    int n,position,element;
    cout<<"Enter no of elements"<<endl<<"position"<<endl<<"elements"<<endl;
    cin>>n>>position>>element;
    int arr[n+2];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shiftElement(n,arr,position,element);
    return 0;
}
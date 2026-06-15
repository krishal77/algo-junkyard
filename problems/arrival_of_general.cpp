#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int max = arr[0];
int indexa=0, indexb=n-1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max =arr[i];
            indexa=i;
        }
    }


        int min = arr[n-1];
      
for(int i = n-1; i >= 0; i--) {
    if(arr[i] < min) {
        min = arr[i];
        indexb = i;
    }
}
    if(indexa>indexb){
        indexb=abs(n-2-indexb);
    }
    else{
        indexb=abs(n-indexb-1);
    }

  cout<<indexa+indexb;
}
   
   
   

#include <iostream>
using namespace std;

int main(){
 int arr[4];
 int moves=0;
 for(int i=0;i<4;i++){
    cin>>arr[i];
 }
for(int i=0;i<4;i++){
  if(arr[i]==arr[i+1]){
    moves++;
  }
}
cout<<moves;
return 0;
}
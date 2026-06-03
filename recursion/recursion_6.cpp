#include <iostream>
using namespace std;
 
void printName(int i,int sum){
   
   if(i<1){
  cout<<sum<<endl;
  return;
   }
   printName(i-1,sum+i);
   
}

int main(){
    int n;
    cin>>n;
    printName(n,0);
}
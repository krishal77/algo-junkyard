#include <iostream>
using namespace std;

int pattern(int n){
   for(int i=0;i<n;i++){
    for(char ch='A';ch<('A'-i+n); ch++){
        cout<<ch<<" ";
        }
        cout<<endl;
   }
}

int main (){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
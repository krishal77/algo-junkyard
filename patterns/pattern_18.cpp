#include <iostream>
using namespace std;

int pattern(int n){
   for(int i=0;i<n;i++){
        char ch='E'-i;
    for(int j=i;j>=0;j--){
        char ch='E'-j;
        cout<<ch;
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
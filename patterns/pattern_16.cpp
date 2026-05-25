#include <iostream>
using namespace std;

int pattern(int n){
   for(int i=0;i<=n;i++){
    char cha='A';
    for(int ch=0;ch<i; ch++){
        char k= (cha+i-1);
        cout<<k<<" ";
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
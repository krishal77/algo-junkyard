#include <iostream>
using namespace std;

int main(){
    int t,a,b,sum=0;
    cin>>t;
    string check;
while(t>0){
    cin>>check;
    a=check[0]-'0';
    b=check[2]-'0';
    sum=a+b;
    cout<<sum<<endl;

t--;  
}

     
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
    string n;
    cin>>n;
    int suma=0,sumb=0;
   for(int i=0;i<3;i++){
    suma=suma+n[i];
   }
    for(int i=5;i>=3;i--){
    sumb=sumb+n[i];
   }

   if(suma==sumb){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   t--;
}
}
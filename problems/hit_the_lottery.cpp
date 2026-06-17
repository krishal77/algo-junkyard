#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=0;
    while(n>0){
    if(n>=100){
      n=n-100;
      counter++;
    }
    else if(n>=20 && n<100){
        n=n-20;
        counter++;
    }
    else if(n>=10 && n< 20){
        n=n-10;
        counter++;
    }
    else if(n>=5 && n<10){
        n=n-5;
        counter++;
    }
    else{
        n=n-1;
        counter++;
    }
    }
    cout<<counter;
}
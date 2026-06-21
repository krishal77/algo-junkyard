#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
    int a,b,c;
    cin>>a>>b>>c;
    int avg=0,moves=0;
    float mx,difference;
    avg=(a+b)/2;
    mx=max(a,b);
    difference= abs(mx-avg);
    while(difference>0){
        difference=difference-c;
        moves++;
    }

    
cout<<moves<<endl;
t--;
    }


}
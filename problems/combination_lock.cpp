#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0,a,b;
    string original;
    string final;
   cin>>original;
   cin>>final;
    for(int i=0;i<t;i++){
     int diff = abs(original[i] - final[i]);

if (diff > 5) {
    diff = 10 - diff;   
}

sum += diff;
    }
    
cout<<sum;
 
}
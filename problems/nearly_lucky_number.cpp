#include<iostream>
using namespace std;

int main(){
    int rem,counter=0;
    long long n;
    cin>>n;
    while(n>0){
        rem=n%10;
        n=n/10;
        if(rem==4 || rem==7){
            counter++;
        }
    }
 if(counter == 4 || counter == 7){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
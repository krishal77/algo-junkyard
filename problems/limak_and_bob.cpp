#include <iostream>
using namespace std;
int main(){
    int limak, bob;
    cin>>limak>>bob;
    int counter=0;
    while(bob>=limak){
        limak=limak*3;
        bob=bob*2;
        counter++;
    }
    cout<<counter;
    return 0;
}
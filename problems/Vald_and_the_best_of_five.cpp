#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string words;
    while(t>0){
   cin>>words;
 int a=0,b=0;
    for(int i=0;i<5;i++){
        if(words[i]=='A'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
    t--;
}

}
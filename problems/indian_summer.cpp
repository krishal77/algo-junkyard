#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_set<string> leaves;
    for(int i=0;i<t;i++){
        string tree,color;
        cin>>tree>>color;
        leaves.insert(tree + " " + color);
    }
    
    cout<<leaves.size()<<endl;



}
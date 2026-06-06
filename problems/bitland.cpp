#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    string s[n];
     for(int i = 0; i < n; i++){
        cin >> s[i];      
                       
    }
    for(int i=0;i<n;i++){

        if(s[i][0]=='+' || s[i][1]=='+'){
    x++;
}
else if (s[i][0]=='-' || s[i][1]=='-'){
    x--;
}
}

cout<<x;

}
#include <iostream>
using namespace std;

int main(){
    int check=0,sum=0;
    int n;
    cin>>n;
int  arr[n][3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
}
}
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==1){
            check+=1;
        }
    }
    if(check>=2){
            sum+=1;
        }
        check=0;
}
cout<<sum;

}


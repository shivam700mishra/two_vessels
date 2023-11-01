#include<iostream>
using namespace std;
int main(){
int n;

int ans;
cin>>n;
float x;
float a,b,c;
for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    if(a>b){
        x=(a-b)/2;
    }
    else if(b>a){
        x=(b-a)/2;
    }
    else{
        ans = 0;
    }
    // if(x % c!=0){
    //     ans=(int)(x/c)+1;
    // }
    // else{
    //     ans=(x/c);
    // }
    // cout<<ans<<endl;
    if(x <= c){
        ans = 1 ;
    }
    else{
        if(x%c)
        

    }
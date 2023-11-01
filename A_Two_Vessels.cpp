#include<bits/stdc++.h>
using namespace std;
bool isInteger(double N)
{
 
    
    int X = N;
 
    double temp2 = N - X;
 
    
    if (temp2 > 0) {
        return false;
    }
    return true;
}

int main(){
    int t ; cin>>t;
    while(t--){
        int ff;  // tells numbe rof moves of cup 
        float a , b; int c ;
        cin>>a>>b; cin>>c;
        float e = max(a , b);
        float w = min(a , b);
        auto ans = (e-w)/2; // tells the difference in volume of water in cups 
        if(ans == 0){
            ff = 0;
        }
        if(isInteger(ans) == false){
            ans = int(ans)+1;

        }
        if((int)ans % c ==0){
            ff = int(ans)/c ;
        }
        else{
            ff = (int(ans)/c) + 1 ;
        }
        cout<<ff<<endl;
        



    }
    return 0;


}
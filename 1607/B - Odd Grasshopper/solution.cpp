#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
        ll c;
        if(n%4==1){
            c=-n;
        }else if(n%4==2){
            c=1;
        }else if(n%4==3){
            c=n+1;
        }else{
            c=0;
        }
        if(x%2==0){
            c=x+c;
        }else{
            c=x-c;
        }
        cout<<c<<endl;
    }
}
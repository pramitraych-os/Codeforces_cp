#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll g=x-1;
        ll n=k*y+k-1;
        ll c=0;
        c+=(g+n-1)/g;
        c+=k;
        cout<<c<<endl;
    }    
}
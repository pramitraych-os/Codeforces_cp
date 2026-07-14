#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=true;
        ll m=gcd(x,y);
        for(int i=0;i<n;i++){
            if((a[i]-(i+1))%m!=0){
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
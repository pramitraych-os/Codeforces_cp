#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b){
    if(b==0ll){
        return 0ll;
    }
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(abs(a-b)==1){
            cout<<1<<" "<<0<<endl;
            continue;
        }
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll d=abs(a-b);
        double f=(double)a/d,c=(double)b/d;
        ll lw=floor(f);
        ll u=ceil(c);
        cout<<d<<" "<<min(abs(lw*d-a),abs(u*d-b))<<endl;
    }
}
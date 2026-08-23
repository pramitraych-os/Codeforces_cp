#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll n;cin>>n;
        string str;cin>>str;
        set<char>s;
        vector<ll>pre(n+1,0);
        vector<ll>suf(n+1,0);
        for(ll i=1;i<=n;i++){
            s.insert(str[i-1]);
            pre[i]=s.size();
        }
        s.clear();
        for(ll i=n;i>=1;i--){
            s.insert(str[i-1]);
            suf[i]=s.size();
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            ans=max(ans,pre[i]+suf[i+1]);
        }
        cout<<ans<<endl;
    }
}
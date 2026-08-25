#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<ll,ll>>seg(n);
        for(int i=0;i<n;i++){
            seg[i]={a[i]-x,a[i]+x};
        }
        ll ans=0;
        ll l=seg[0].first;
        ll r=seg[0].second;
        for(int i=1;i<n;i++){
            l=max(l,seg[i].first);
            r=min(r,seg[i].second);
            if(l>r){
                ans++;
                l=seg[i].first;
                r=seg[i].second;
            }
        }
        cout<<ans<<endl;
    }
}
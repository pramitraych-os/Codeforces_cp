#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll n;
        cin>>n;
        vector<int>b;
        ll mn=INT_MAX;
        for(int i=0;i<n;i++){
            ll m;
            cin>>m;
            vector<ll>a(m);
            for(auto &j:a){
                cin>>j;
            }
            sort(a.begin(),a.end());
            b.push_back(a[1]);
            mn=min(mn,a[0]);
        }
        sort(b.begin(),b.end());
        ll s=accumulate(b.begin(),b.end(),0ll);
        ll c=b[0];
        ll ans=mn+s-c;
        cout<<ans<<endl;
    }
}
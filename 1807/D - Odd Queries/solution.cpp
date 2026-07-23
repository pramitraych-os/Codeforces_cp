#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>p(n+1,0);
        for(int i=0;i<n;i++){
            p[i+1]=p[i]+a[i];
        }
        ll s=p[n];
        while(q--){
            int l,r;
            ll k;
            cin>>l>>r>>k;
            ll rsum=p[r]-p[l-1];
            ll c=r-l+1;
            ll sum=s-rsum+c*k;
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }    
}
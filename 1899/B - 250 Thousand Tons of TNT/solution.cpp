#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>a(n),p(n);
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    p[0]=a[0];
	    for(ll i=1;i<n;i++){
	        p[i]=p[i-1]+a[i];
	    }
	    ll ans=0;
	    for(ll k=1;k<=n;k++){
	        if(n%k!=0){
	            continue;
	        }
	        ll l=p[k-1];
	        ll mx=l;
	        ll mn=l;
	        for(ll i=k-1+k;i<n;i+=k){
	            ll sum=p[i]-p[i-k];
	            mx=max(mx,sum);
	            mn=min(mn,sum);
	        }
	        ans=max(ans,mx-mn);
	    }
	    cout<<ans<<endl;
	}
}
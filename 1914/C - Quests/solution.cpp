#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll>a(n),b(n);
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=0;i<n;i++){
	        cin>>b[i];
	    }
	    ll sum=0;
	    ll mx=0;
	    ll ans=0;
	    for(ll i=0;i<min(n,k);i++){
	        sum+=a[i];
	        mx=max(mx,b[i]);
	        ans=max(ans,sum+(k-i-1)*mx);
	    }
	    cout<<ans<<endl;
	}
}
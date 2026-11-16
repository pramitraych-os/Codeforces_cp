#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    vector<ll>p(n+1,0);
	    for(int i=0;i<n;i++){
	        p[i+1]=p[i]+a[i];
	    }
	    ll sum=0;
	    for(int i=0;i<=k;i++){
	        int l=2*i;
	        int r=k-i;
	        ll cur=p[n-r]-p[l];
	        sum=max(sum,cur);
	    }
	    cout<<sum<<endl;
	}
}
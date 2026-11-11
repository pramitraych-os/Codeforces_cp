#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a;
	    cin>>b;
	    ll n=a.size(),m=b.size();
	    ll len=0;
	    for(ll k=0;k<=min(n,m);k++){
	        for(ll i=0;i+k<=n;i++){
	            for(ll j=0;j+k<=m;j++){
	                string sa=a.substr(i,k);
	                string sb=b.substr(j,k);
	                if(sa==sb){
	                    len=max(len,k);
	                }
	            }
	        }
	    }
	    ll op=n+m-2*len;
	    cout<<op<<endl;
	}
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll s=(1ll<<(n-(k-1)))+2*(k-1);
	    if(n==k){
	        cout<<2*k<<endl;
	    }else if(n!=1&&k==1){
	        cout<<(1ll<<n)<<endl;
	    }
	    else{
	        cout<<s<<endl;
	    }
	}
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<ll>a(n);
	    int sum=0;
	    for(int i=0;i<n;i++){
	        int e;
	        cin>>e;
	        a[i]=1ll<<e;
	        sum+=a[i];
	    }
	    sort(a.rbegin(),a.rend());
	    ll cur=0;
	    for(ll i:a){
	        if(2*(cur+i)<=sum){
	            cur+=i;
	        }
	    }
	    cout<<cur*(sum-cur)<<endl;
	}
}
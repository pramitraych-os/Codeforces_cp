#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll sum=a[0],mx=a[0];
	    for(int i=1;i<n;i++){
	        if(abs(a[i])%2!=abs(a[i-1])%2){
	            sum=max(a[i],sum+a[i]);
	        }else{
	            sum=a[i];
	        }
	        mx=max(sum,mx);
	    }
	    cout<<mx<<endl;
	}
}
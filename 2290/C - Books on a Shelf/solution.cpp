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
	    sort(a.begin(),a.end());
	    vector<ll>b;
	    vector<ll>c,d;
	    for(int i=0;i<n;){
	        int j=i;
	        while(j<n&&a[j]==a[i]){
	            j++;
	        }
	        b.push_back(a[i]);
	        if(j-i>=2){
	            c.push_back(a[i]);
	        }
	        for(int k=i+2;k<j;k++){
	            d.push_back(a[i]);
	        }
	        i=j;
	    }
	    reverse(c.begin(),c.end());
	    int ans=b.size()+c.size();
	    cout<<ans<<endl;
	    for(int i:b)cout<<i<<" ";
	    for(int i:d)cout<<i<<" ";
	    for(int i:c)cout<<i<<" ";
	    cout<<endl;
	}
}
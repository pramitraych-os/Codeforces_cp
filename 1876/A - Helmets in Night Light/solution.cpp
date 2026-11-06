#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,p;
	    cin>>n>>p;
	    vector<pair<ll,ll>>v(n);
	    vector<int>a(n),b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        v[i]={b[i],a[i]};
	    }
	    sort(v.begin(),v.end());
	    ll mp=p;
	    ll sh=1;
	    for(auto i:v){
	        ll c=i.second;
	        ll d=i.first;
	        if(d>=p){
	            break;
	        }
	        if(sh+c>n){
	            mp+=(n-sh)*d;
	            sh=n;
	            break;
	        }else{
	            mp+=c*d;
	            sh+=c;
	        }
	    }
	    mp+=(n-sh)*p;
	    cout<<mp<<endl;
	}
}
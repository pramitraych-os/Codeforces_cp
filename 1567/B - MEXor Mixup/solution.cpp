#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll xr(ll n){
    if(n%4==0){
        return n;
    }else if(n%4==1){
        return 1;
    }else if(n%4==2){
        return n+1;
    }else{
        return 0;
    }
}
int main() {
	int t;cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    ll x=xr(a-1);
	    if(x==b){
	        cout<<a<<endl;
	    }else if((x^b)!=a){
	        cout<<a+1<<endl;
	    }else{
	        cout<<a+2<<endl;
	    }
	}
}
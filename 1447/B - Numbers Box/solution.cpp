#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    vector<vector<ll>>a(n,vector<ll>(m));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    ll sum=0;
	    ll neg=INT_MAX;
	    ll nc=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(a[i][j]<0){
	                nc++;
	            }
	            neg=min(neg,abs(a[i][j]));
	            sum+=abs(a[i][j]);
	        }
	    }
	    if(nc%2==0){
	        cout<<sum<<endl;
	    }else{
	        cout<<sum-2*neg<<endl;
	    }
	}
}
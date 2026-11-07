#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    n--;
	    ll m=log2(n);
	    ll num=pow(2,m)-1;
	    vector<int>res;
	    while(num>=0){
	        res.push_back(num);
	        num--;
	    }
	    num=pow(2,m);
	    while(num<=n){
	        res.push_back(num);
	        num++;
	    }
	    for(int i:res){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
}
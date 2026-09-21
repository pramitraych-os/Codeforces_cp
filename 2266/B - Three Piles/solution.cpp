#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int ts;
	cin>>ts;
	while(ts--){
	    ll a,b,c;
	    cin>>a>>b>>c;
	    ll s1=abs(a-b);
	    ll s2=abs(a+c-b);
	    cout<<max(s1,s2)<<endl;
	}
}
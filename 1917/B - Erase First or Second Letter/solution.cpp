#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll sum=0,cnt=0;
	    unordered_map<char,int>m;
	    for(int i=0;i<n;i++){
	        m[s[i]]++;
	        if(m[s[i]]==1){
	            cnt++;
	        }
	        sum+=cnt;
	    }
	    cout<<sum<<endl;
	}
}
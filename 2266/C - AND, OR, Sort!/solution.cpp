#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int ts;
	cin>>ts;
	while(ts--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int z=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            z++;
	        }
	    }
	    if(s[0]=='1'){
	        cout<<z<<endl;
	        continue;
	    }
	    int ind=-1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            ind=i;
	            break;
	        }
	    }
	    if(ind==-1){
	        cout<<0<<endl;
	        continue;
	    }
	    ll b=LLONG_MAX;
	    ll o=0,z1=ind;
	    
	    for(int i=ind;i<=n;i++){
	        ll c=o+(z-z1);
	        b=min(b,c);
	        if(i<n){
	            if(s[i]=='1'){
	                o++;
	            }else{
	                z1++;
	            }
	        }
	    }
	    cout<<b<<endl;
	}
}
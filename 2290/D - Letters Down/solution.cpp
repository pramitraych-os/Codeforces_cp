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
	    int cnt=0;
	    for(char c='z';c>='a';c--){
	        bool f=false;
        	    for(int i=0;i<n/2;i++){
        	        if(s[i]!=s[n-i-1]&&max(s[i],s[n-i-1])==c){
        	            f=true;
        	            break;
        	        }
        	    }
        	    if(f){
        	        for(int i=0;i<n;i++){
        	            if(s[i]==c){
        	                s[i]--;
        	            }
        	        }
        	        cnt++;
        	        c++;
        	    }
	    }
	    cout<<cnt<<endl;
	}
}
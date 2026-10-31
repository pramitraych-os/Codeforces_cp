#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    string p,q;
	    cin>>p>>q;
	    vector<int>a(26,0);
	    vector<int>b(26,0);
	    for(char c:p){
	        a[c-'a']++;
	    }
	    for(char c:q){
	        b[c-'a']++;
	    }
	    bool f=true;
	    for(int i=0;i<26;i++){
	        char c='a'+i;
	        int d=a[i]-b[i];
	        if(c=='i'||c=='x'||c=='s'){
	            if(d!=1){
	                f=false;
	                break;
	            }
	        }else{
	            if(d!=0){
	                f=false;
	                break;
	            }
	        }
	    }
	    if(f){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}
}
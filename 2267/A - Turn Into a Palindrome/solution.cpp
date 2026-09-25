#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int ts;
	cin>>ts;
	while(ts--){
	    int n;
	    char c;
	    cin>>n>>c;
	    string s;cin>>s;
	    int cnt=0;
	    for(int i=0;i<n/2;i++){
	        char l=s[i];
	        char r=s[n-i-1];
	        if(l!=r){
	            if(l==c||r==c){
	                cnt++;
	            }else{
	                cnt+=2;
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}
}
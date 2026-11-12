#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    char c='R';
	    int cnt=0;
	    for(char i:s){
	        if(i!=c){
	            cnt++;
	            c=i;
	        }
	        if(c=='R'){
	            c='B';
	        }else{
	            c='R';
	        }
	    }
	    cout<<cnt<<endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ind=-1;
	for(int i=0;i<n-1;i++){
	    if(s[i]>s[i+1]){
	        ind=i;
	        break;
	    }
	}
	if(ind==-1){
	    cout<<"NO"<<endl;
	}else{
	    cout<<"YES"<<endl;
	    cout<<ind+1<<" "<<ind+2<<endl; 
	}
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    ll s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        s+=a[i];
	    }
	    bool f=false;
	    for(int i=1;i<n-1;i++){
	        if(a[i]>=2){
	            f=true;
	            break;
	        }
	    }
	    if(f){
	        cout<<s-1<<endl;
	    }else if(a[0]>=2||a[n-1]>=2){
	        cout<<a[0]+a[n-1]-1<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
}
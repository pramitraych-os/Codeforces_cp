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
	    vector<int>p(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    iota(p.begin(),p.end(),1);
	    int i=0;
	    bool f=true;
	    while(i<n){
	        int j=i;
	        while(j<n&&a[i]==a[j]){
	            j++;
	        }
	        int len=j-i;
	        if(len==1){
	            f=false;
	            break;
	        }
	        int temp=p[j-1];
	        for(int k=j-1;k>i;k--){
	            p[k]=p[k-1];
	        }
	        p[i]=temp;
	        i=j;
	    }
	    if(!f){
	        cout<<-1<<endl;
	    }else{
	        for(int i:p){
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
	}
}
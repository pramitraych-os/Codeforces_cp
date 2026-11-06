#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
	ll n,d;
	cin>>n>>d;
	vector<int>p(n);
	for(int i=0;i<n;i++){
	    cin>>p[i];
	}
	sort(p.begin(),p.end());
	int c=0;
	ll l=-1,r=n-1;
	ll sz=1;
	while(l<r){
	    if(p[r]*sz<=d&&l<r){
	        sz++;
	        l++;
	    }else{
	        sz=1;
	        c++;
	        r--;
	    }
	}
	cout<<c<<endl;
}
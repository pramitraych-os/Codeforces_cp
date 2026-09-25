#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main() {
	int ts;
	cin>>ts;
	while(ts--){
	    int n;cin>>n;
	    vector<int>freq(101,0);
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        freq[a]++;
	    }
	    vector<int>ans;
	    while(true){
	        vector<int>a;
	        for(int i=1;i<=100;i++){
	            if(freq[i]>0){
	                a.push_back(i);
	            }
	        }
	        if(a.empty()){
	            break;
	        }
	        sort(a.rbegin(),a.rend());
	        for(int i:a){
	            ans.push_back(i);
	            freq[i]--;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(i>0){
	            cout<<" ";
	        }
	        cout<<ans[i];
	    }
	    cout<<endl;
	}
}
 
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll a,b,c;
        cin>>a>>b>>c;
        vector<int>ans;
        ans.push_back(a);ans.push_back(b);ans.push_back(c);
        sort(ans.begin(),ans.end());
        int mn=ans[2]-ans[0];
        ans[2]=ans[1]+ans[0];
        cout<<min(mn,ans[2]-ans[0])<<endl;
    }    
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int o(string n,string ps){
    int c=0;
    int sz=ps.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==ps[sz]){
            sz--;
            if(sz<0){
                break;
            }
        }else{
            c++;
        }
    }
    if(sz>=0){
        c=INT_MAX;
    }
    return c;
}
int main(){
    int t;cin>>t;
    while(t--){
        string n;cin>>n;
        vector<string>a={"00","25","50","75"};
        int ans=INT_MAX;
        for(auto c:a){
            ans=min(ans,o(n,c));
        }
        cout<<ans<<endl;
    }    
}
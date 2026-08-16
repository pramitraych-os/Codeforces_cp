#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll a,b;
        cin>>a>>b;
        ll ans=INT_MAX;
        for(int i=0;i<32;i++){
            ll o=i;
            ll d=b+i;
            if(d==1){
                continue;
            }
            ll c=a;
            while(c!=0){
                c/=d;
                o++;
            }
            ans=min(ans,o);
        }
        cout<<ans<<endl;
    }    
}
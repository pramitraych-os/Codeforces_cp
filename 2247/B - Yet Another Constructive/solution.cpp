#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                ll a=i%k;
                ll b=(i-1)%k;
                ll c=(a-b+m)%m;
                if(c==0){
                    c=m;
                }
                cout<<c;
                if(i<n){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
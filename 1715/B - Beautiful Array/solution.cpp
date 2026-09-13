#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll mn=k*b,mx=k*b+n*(k-1);
        if(mn<=s&&s<=mx){
            vector<ll>a(n,0);
            a[0]=mn;
            ll d=s-(ll)k*b;
            for(int i=0;i<n&&d>=0;i++){
                if(d<k-1){
                    a[i]+=d;
                    break;
                }else{
                    a[i]+=k-1;
                    d-=k-1;
                }
            }
            for(ll i:a){
                cout<<i<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }    
}
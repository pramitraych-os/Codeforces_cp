#include<bits/stdc++.h>
#include<cmath>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll a,b;
        cin>>a>>b;
        ll ra=a;
        ll rb=b;
        while(ra%2==0){
            ra/=2;
        }
        while(rb%2==0){
            rb/=2;
        }
        if(ra!=rb){
            cout<<-1<<endl;
        }else{
            a/=ra;
            b/=rb;
            ll x=(ll)log2(a);
            ll y=(ll)log2(b);
            ll c=ceil(abs(x-y)/3.0);
            cout<<c<<endl;
        }
    }
}
#include<bits/stdc++.h>
#include<numeric>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        ll n;cin>>n;
        ll a=1,b=n-1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                b=n-a;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
    }    
}
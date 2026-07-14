#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool f=true;
        ll s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
            int j=i+1;
            ll mn=(1LL*j*(j+1))/2;
            if(s<mn){
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
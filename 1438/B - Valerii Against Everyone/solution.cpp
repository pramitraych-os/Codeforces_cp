#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        ll n;cin>>n;
        vector<ll>b(n);
        set<ll>s;
        for(int i=0;i<n;i++){
            cin>>b[i];
            s.insert(b[i]);
        }
        if(s.size()<n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }    
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        bool ans=false;
        ll d=2*b-c;
        ll e=(a+c)/2;
        ll f=2*b-a;
        if((d/a)>0&&d%a==0){
            ans=true;
        }
        if((e/b)>0&&e%b==0&&(c-a)%2==0){
            ans=true;
        }
        if((f/c)>0&&f%c==0){
            ans=true;
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
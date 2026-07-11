#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
        }else{
            bool f=false;
            while(n>1){
                if(n%2!=0){
                    f=true;
                    break;
                }
                n/=2;
            }
            if(f){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll sz=n*k;
        vector<int>a(sz);
        ll s=0;
        for(int i=0;i<n*k;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(n==1){
            cout<<s<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        int x=n/2;
        int d=(n+2)/2;
        ll sum=0;
        for(int i=sz-x-1;i>=0;i-=d){
            if(k==0){
                break;
            }
            sum+=a[i];
            k--;
        }
        cout<<sum<<endl;
    }    
}
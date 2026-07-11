#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll c=0,c1=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c++;
            }else if(a[i]==1){
                c1++;
            }
        }
        ll p=(ll)pow(2,c);
        ll ans=c1*p;
        cout<<ans<<endl;
    }
}
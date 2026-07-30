#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>m1(2*(n+1),0),m2(2*(n+1),0);
        int len=0;
        for(int i=0;i<n;i++){
            len++;
            if(i==n-1||(a[i]!=a[i+1])){
                m1[a[i]]=max(m1[a[i]],len);
                len=0;
            }
        }
        len=0;
        for(int i=0;i<n;i++){
            len++;
            if(i==n-1||(b[i]!=b[i+1])){
                m2[b[i]]=max(m2[b[i]],len);
                len=0;
            }
        }
        int ans=0;
        for(int i=0;i<=2*n;i++){
            ans=max(ans,m1[i]+m2[i]);
        }
        cout<<ans<<endl;
    }
}
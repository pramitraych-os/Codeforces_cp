#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                a[i]=1;
            }
        }
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        int ans=k-sum;
        for(int i=k;i<n;i++){
            sum+=(a[i]-a[i-k]);
            ans=min(ans,k-sum);
        }
        cout<<ans<<endl;
    }
}
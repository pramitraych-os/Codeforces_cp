#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n,m;cin>>n>>m;
        vector<int>a(n),freq(2*m+2,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int mx=0;
        int s=0;
        for(int i=m;i>=1;i--){
            s+=freq[i];
            int c=s+freq[2*i];
            mx=max(mx,c);
        }
        cout<<mx<<endl;
    }
}
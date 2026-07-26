#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2!=0){
            cout<<"NO"<<endl;
        }else{
            int mn=INT_MAX;
            int mx=0;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    mn=min(mn,a[i]);
                }else{
                    mx=max(mx,a[i]);
                }
            }
            if(mx+1<mn){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
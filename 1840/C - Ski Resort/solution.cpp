#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll len=0,c=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                len++;
                if(len>=k){
                    c+=len-k+1;
                }
            }else{
                len=0;
            }
        }
        cout<<c<<endl;
    }
}
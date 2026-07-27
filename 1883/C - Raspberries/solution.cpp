#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool f=false;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%k==0){
                f=true;
            }
        }
        if(f){
            cout<<0<<endl;
        }else{
            int c=INT_MAX;
            int e=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    e++;
                }
                c=min(c,(k-a[i]%k));
            }
            if(k==4){
                if(e>=2){
                    cout<<min(c,0)<<endl;
                }else if(e==1){
                    cout<<min(c,1)<<endl;
                }else{
                    cout<<min(c,2)<<endl;
                }
            }else{
                cout<<c<<endl;
            }
        }
    }
}
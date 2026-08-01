#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(n<2*m){
            cout<<"NO"<<endl;
            continue;
        }
        bool f=true;
        for(int i=0;i<m;i++){
            if((a[i]>b[i])||a[n-m+i]<b[i]){
                cout<<"NO"<<endl;
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
    }
}
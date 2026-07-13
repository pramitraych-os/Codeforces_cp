#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<int>a(n);
        ll mx=0,mn=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn+=a[i];
            double r=(double)a[i]/x;
            mx+=ceil(r);
        }
        double d=(double)mn/x;
        ll min=ceil(d);
        cout<<min<<" "<<mx<<endl;
    }
}
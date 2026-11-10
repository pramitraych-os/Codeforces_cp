#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<pair<ll,ll>>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i].first=a[i];
            b[i].second=i+1;
        }
        sort(b.begin(),b.end(),[](const pair<ll,ll>&a,const pair<ll,ll>&b){
            return a.first>b.first;
        });
        vector<pair<ll,ll>>p(n);
        int ind=1;
        ll tot=0;
        for(int i=0;i<n;i++){
            ll c;
            if(i%2==0){
                c=ind;
            }else{
                c=-ind;
                ind++;
            }
            tot+=(ll)2*b[i].first*abs(c);
            p[i]={b[i].second,c};
        }
        sort(p.begin(),p.end());
        cout<<tot<<endl;
        cout<<0<<" ";
        for(auto x:p){
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
}
 
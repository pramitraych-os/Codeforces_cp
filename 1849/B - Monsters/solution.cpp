#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>ans;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=a[i]%k;
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                ans.push_back(i+1);
            }
        }
        vector<pair<int,int>>ind;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                continue;
            }
            ind.push_back({a[i],i+1});
        }
        sort(ind.begin(),ind.end(),[](const auto &a,const auto &b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first>b.first;
        });
        for(auto const &p:ind){
            ans.push_back(p.second);
        }
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }    
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }    
}
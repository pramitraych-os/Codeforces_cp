#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n;
        cin>>n;
        vector<ll>a(n);
        int o=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                o++;
            }else if(a[i]%4==0){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        cout<<max(o,max(cnt1,cnt2))<<endl;
    }    
}
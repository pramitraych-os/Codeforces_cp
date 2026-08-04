#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
 
    int ts;cin>>ts;
    while(ts--){
        ll n;cin>>n;
        string a,b;
        cin>>a;cin>>b;
        int ea=0,oa=0,eb=0,ob=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(i%2==0){
                    ea++;
                }else{
                    oa++;
                }
            }
            if(b[i]=='1'){
                if(i%2==0){
                    eb++;
                }else{
                    ob++;
                }
            }
        }
        if(ea==eb&&oa==ob){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
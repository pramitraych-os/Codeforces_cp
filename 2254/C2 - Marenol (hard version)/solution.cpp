#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll n;cin>>n;
        string a,b;
        cin>>a;cin>>b;
        vector<int>c,d,e,f;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]=='1'){
                    c.push_back(i/2);
                }
                if(b[i]=='1'){
                    d.push_back(i/2);
                }
            }else{
                if(a[i]=='1'){
                    e.push_back(i/2);
                }
                if(b[i]=='1'){
                    f.push_back(i/2);
                }
            }
        }
        if(c.size()!=d.size()||e.size()!=f.size()){
            cout<<-1<<endl;
            continue;
        }
        ll o=0;
        for(int i=0;i<c.size();i++){
            o+=abs(c[i]-d[i]);
        }
        for(int i=0;i<e.size();i++){
            o+=abs(e[i]-f[i]);
        }
        cout<<o<<endl;
    }
}
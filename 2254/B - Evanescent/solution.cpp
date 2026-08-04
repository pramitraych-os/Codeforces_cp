#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll n;cin>>n;
        string s;cin>>s;
        vector<pair<char,int>>str;
        for(char c:s){
            if(!str.empty()&&str.back().first==c){
                str.back().second++;
            }else{
                str.push_back({c,1});
            }
        }
        int k=str.size();
        if(k==1){
            cout<<1<<endl;
            continue;
        }
        int c=k;
        for(int i=1;i<=k-2;i++){
            if(str[i].second==1){
                if(str[i-1].first==str[i+1].first){
                    c=min(c,k-2);
                }else{
                    c=min(c,k-1);
                }
            }
        }
        cout<<c<<endl;
    }
}
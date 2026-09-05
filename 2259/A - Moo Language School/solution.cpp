#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i+=k){
            bool f=true;
            for(int j=i;j<i+k;j++){
                if(s[j]=='0'){
                    f=false;
                    break;
                }
            }
            if(f){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }    
}
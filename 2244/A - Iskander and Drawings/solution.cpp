#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ml=0,l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                l++;
                ml=max(l,ml);
            }else{
                l=0;
            }
        }
        if(ml==0){
            cout<<0<<endl;
        }else{
            cout<<(ml+1)/2<<endl;
        }
    }
}
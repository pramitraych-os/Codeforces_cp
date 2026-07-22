#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int n=s.length(),m=t.length();
        map<char,int>freq;
        for(char c:t){
            freq[c]++;
        }
        for(int i=n-1;i>=0;i--){
            if(freq[s[i]]>0){
                freq[s[i]]--;
                
            }else{
                s[i]='.';
            }
        }
        string f="";
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                f+=s[i];
            }
        }
        if(f==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }    
}
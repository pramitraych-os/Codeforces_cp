#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        string s;cin>>s;
        int o=0,z=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'&&o>0){
                c++;
                o--;
            }else if(s[i]=='1'&&z>0){
                c++;
                z--;
            }else{
                break;
            }
        }
        cout<<s.length()-c<<endl;
    }
}
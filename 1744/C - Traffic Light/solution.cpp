#include<bits/stdc++.h>
#include<numeric>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n;char c;cin>>n>>c;
        string s;cin>>s;
        s+=s;
        n*=2;
        int ind=-1;
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='g'){
                ind=i;
            }
            if(s[i]==c){
                int d=ind-i;
                mx=max(mx,d);
            }
        }
        cout<<mx<<endl;
    }    
}
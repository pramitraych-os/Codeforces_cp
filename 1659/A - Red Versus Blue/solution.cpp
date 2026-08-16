#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n,r,b;
        cin>>n>>r>>b;
        vector<string>s(n);
 
        int groups=b+1;
        int q=r/groups, rem=r%groups; 
        int gidx=0;
        int cap;
        if(gidx<rem){
            cap=q+1;
        }else{
            cap=q;
        }
 
        int c=0;
        int i=0;
        while(i<n){
            if(c<cap && r>0){
                s[i]="R";
                i++;
                c++;
                r--;
            }
            else{
                c=0;
                gidx++;
                if(gidx<rem){
                    cap=q+1;
                }else{
                    cap=q;
                }
                if(b!=0){
                    s[i]="B";
                    b--;
                    i++;
                }else if(r>0){
                    s[i]="R";
                    r--;
                    i++;
                }
            }
        }
        for(auto str:s){
            cout<<str;
        }
        cout<<endl;
    }    
}
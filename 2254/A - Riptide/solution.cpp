#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        ll a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        while((a!=b)&&(b!=c)&&(a!=c)){
            if(a>b&&a>c){
                a--;
                if(b<c){
                    b++;
                }else{
                    c++;
                }
            }else if(b>a&&b>c){
                b--;
                if(a<c){
                    a++;
                }else{
                    c++;
                }
            }else{
                c--;
                if(a<b){
                    a++;
                }else{
                    b++;
                }
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n;cin>>n;
        string str;cin>>str;
        int c=0;
        int s=0;
        for(int i=0;i<n;i++){
            if(str[i]=='('){
                s++;
            }else{
                s--;
            }
            if(s<0){
                c++;
                s=0;
            }
        }
        cout<<c<<endl;
    }    
}
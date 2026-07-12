#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int c2=0,c3=0;
        while(n>0&&n%3==0){
            c3++;
            n/=3;
        }
        while(n>0&&n%2==0){
            c2++;
            n/=2;
        }
        if(n>1||c2>c3){
            cout<<-1<<endl;
        }else{
            cout<<2*c3-c2<<endl;
        }
    }
}
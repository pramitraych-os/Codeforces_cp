#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int ts;cin>>ts;
    while(ts--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
        }else{
            int m=gcd(a[0],a[n-1]);
            cout<<m<<endl;
        }
    }
}
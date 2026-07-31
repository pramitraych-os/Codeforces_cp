#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isf(ll n){
    ll m=n;
    while(m!=0){
        int rem=m%10;
        if(rem!=0&&n%rem!=0){
            return false;
        }
        m/=10;
    }
    return true;
}
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        ll n;cin>>n;
        while(!isf(n)){
            n++;
        }
        cout<<n<<endl;
    }
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int nxtp(int n){
    while(!isprime(n)){
        n++;
    }
    return n;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int d;
	    cin>>d;
	    int p1=nxtp(1+d);
	    int p2=nxtp(p1+d);
	    long long ans=(long long)p1*p2;
	    cout<<ans<<endl;
	}
}
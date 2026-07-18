#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int rc=n/2;
        int c=0,d=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c++;
            }else{
                d++;
            }
        }
        if(abs(rc-c)%2==0&&abs(rc-d)%2==0){
            if(abs(rc-c)==abs(rc-d)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n;
        cin>>n;
        vector<int>a(n);
        int c1=0,c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c++;
            }else{
                c1++;
            }
        }
        if(c1>=c){
            cout<<"Bessie"<<endl;
        }else{
            cout<<"Elsie"<<endl;
        }
    }    
}
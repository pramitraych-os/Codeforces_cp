#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=1,k;
        bool ans=false;
        while(i<n&&j<n){
            if(arr[i]<arr[j]){
                int a=i+1;
                k=j+1;
                while(j<n&&k<n){
                    if(arr[j]>arr[k]){
                        cout<<"YES"<<endl;
                        cout<<a<<" "<<j+1<<" "<<k+1<<endl;
                        ans=true;
                        break;
                    }else{
                        j++;k++;
                    }
                }
                break;
            }else{
                i++;
                j++;
            }
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
    }
}
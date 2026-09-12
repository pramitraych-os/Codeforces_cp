#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        int n,k;
        cin>>n>>k;
        if(k<n||k>2*n-1){
            cout<<-1<<endl;
            continue;
        }
        int o=2*n-k;
        vector<vector<int> >a(n,vector<int>(n,0));
        int c=1;
        for(int i=n-o;i<n;i++){
            a[i][i]=c++;
        }
        int r=n-o;
        for(int i=0;i<r;i++){
            a[i][n-1]=c++;
        }
        for(int i=0;i<r;i++){
            a[n-1][i]=c++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    a[i][j]=c++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j];
                if(j<n-1){
                    cout<<" ";
                }
            }
            cout<<"
";
        }
    }    
}
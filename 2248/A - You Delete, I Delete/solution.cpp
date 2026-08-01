#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
        string s;
        cin>>s;
        int z=s.find('0');
        s.erase(s.begin()+z);
        int o=s.find('1');
        s.erase(s.begin()+o);
        cout<<s<<endl;
    }
}
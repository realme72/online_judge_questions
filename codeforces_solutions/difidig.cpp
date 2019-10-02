#include"bits/stdc++.h"
using namespace std;
#define All(x) (x).begin(),(x).end()

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int i,l,r;cin>>l>>r;
    bool ok=false;
    
    for(i=l;i<=r;i++){
        string s=to_string(i);
        if(set<char>(All(s)).size()==s.size()){
            ok=true; break;
        }
    }
    cout<<(ok?i:-1)<<endl;
}
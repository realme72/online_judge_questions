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


// another solution
#include"bits/stdc++.h"
using namespace std;

int main() {
  int L,R;cin>>L>>R;
  for(int i=L;i<=R;i++){
    string s=to_string(i);
    string t=s;
    sort(begin(s), end(s));
    s.erase(unique(begin(s), end(s)), end(s));
    if(s.size() != t.size()) continue;
    cout<<i<<endl;
    return 0;
  }
  cout << -1 << endl;
}

//another one
#include"bits/stdc++.h"
using namespace std;

bool check(int x){
	vector < int > a(10);
	while (x){
		if (a[x % 10] != 0)
			return 0;
		a[x % 10] = 1;
		x /= 10;
	}
	return 1;
}
 
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int l,r,ans=-1;cin>>l>>r;
	for (int i = l; i <= r; i++){
		if (check(i)){
			cout << i;
			return 0;
		}
	}
	cout << ans;
	return 0;
} 

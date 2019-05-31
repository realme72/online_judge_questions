#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool prime[10000002];
int main(){
	int t,i,j;
	cin>>t;
	ll x,y;

	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;

	for(i=2;i*i<=10000002;++i)
		if(prime[i]){
			for(j=i*i;j<=10000002;j+=i)
				prime[j]=false;
		}

	for(i=0;i<t;++i){
		cin>>x;
		y=(ll)sqrt(x);
		if(x==y*y && prime[y]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool prime[100006];

int main(){
	int t,i,j;
	cin>>t;
	ll m,n;

	prime[1]=true;
	for(i=2;i*i<=100005;++i){
		if(!prime[i]){
			for(j=i*i;j<=100005;j+=i){
				prime[j]=true;
			}
		}
	}

	for(i=0;i<t;++i){
		cin>>m>>n;
		for(j=m;j<=n;++j){
			if(!prime[j])
				cout<<j<<endl;
		}
		cout<<endl;
	}

	return 0;
}


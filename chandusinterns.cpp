#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	long long int x,i,j,count;

	for(i=0;i<t;++i){
		cin>>x;
		count=0;
		for(j=1;j*j<x;++j){
			if(x%j==0) count+=2;
			if(count>=3) break;	
		}
		if(count>=3) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
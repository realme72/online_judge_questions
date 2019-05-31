#include <bits/stdc++.h>
using namespace std;

void almost_prime(int n);

int main(){
	int n;
	cin>>n;
	almost_prime(n);

	return 0;
}

void almost_prime(int n){
	int p,i,aprime,count,ans=0;
	bool prime[n+1];

	memset(prime,true,sizeof(prime));

	for(p=2; p*p<=n; ++p){
		if(prime[p]){
			for(i=p*2; i<=n; i+=p) prime[i]=false;
		}
	}

	for(aprime=6; aprime <= n; ++aprime){	
		count=0;
		for(p=2; p <= aprime; ++p){			
			if(aprime%p==0 && prime[p]) ++count;
		}
					
		if(count==2) ++ans;
	}
	
	cout<<ans<<"\n";

}
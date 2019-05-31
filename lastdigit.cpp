#include <bits/stdc++.h>
using namespace std;

long long exponentiation(long long a, long long b);

int main(){

	int t,answer,i;
	cin >> t;

	int a[t],b[t];

	for (i=0; i<t; i++){

		cin >> a[i];
		cin >> b[i];

		answer = exponentiation(a[i],b[i]);
		cout << answer << endl;
	}

}

long long exponentiation(long long a, long long b) {
        int ans=1;
        while(b != 0) {
                if(b%2 == 1)
                    ans=(ans*a)%10;

                a=(a*a)%10;
                b /= 2;
        }
        return ans;
 }
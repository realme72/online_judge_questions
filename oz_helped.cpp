#include"bits/stdc++.h"
using namespace std;
int GCD(int a, int b) {
    while(a!=b)
        if(a>b) a-=b;
        else b-=a;
    return a;
}

int main(){
    int n; scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int min=a[0];
    for(i=0;i<n;i++)
        if(min>a[i]) min=a[i];
    int diff[n-1];
        for(i=0,j=0;i<n;i++)
            if(a[i]!=min) diff[j++]=a[i]-min;

    int g=(n==2)?diff[0]:GCD(diff[0],diff[1]);
    for(i=2;i<n-1;i++) g=GCD(g,diff[i]);
    for(i=2;i<=g;i++) if(g%i==0)printf("%d ",i);
return 0;
}

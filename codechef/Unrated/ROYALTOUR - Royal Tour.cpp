#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long n,m,r,c;
	    cin>>n>>m;
	    cin>>r>>c;
	    long long d = min({max(r-1,c-1),max(r-1,m-c),max(n-r,c-1),max(n-r,m-c)});
	    long long b =  n+m + min(n,m) - 3;
	    cout<<d+b<<endl;
	}
}

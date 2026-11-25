#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	std::cin >> test;
	while(test--){
	    int n;
	    cin>>n;
	    std::vector<long long>  v(n);
	    long long sum = 0,b = 0;
	    for(int i=0;i<n;i++) {
	        cin>>v[i];
	        sum += v[i];
	        b = max(b,v[i]);
	    }
	    long long res = sum - b;
	    for(int i=0;i<n;i++){
	        long long h = sum + v[i];
	        long long j = max(b,2*v[i]);
	        res = max(res,h-j);
	    }
	    cout<<res<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    std::vector<long long> v(n);
	     long long m = LLONG_MAX,sum  = 0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        m = min(m,v[i]);
	        sum += v[i];
	    }
	    cout<<sum - m<<endl;
	}
}

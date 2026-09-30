#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        m[v[i]-i]++;
	    }
	    int res = 0;
	    for(auto x:m){
	        res= max(res,x.second);
	    }
	    cout<<n-res<<endl;
	}
}

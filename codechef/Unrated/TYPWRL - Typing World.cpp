#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n, m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    map<char,int> s;
	    for(int i=0;i<b.size();i++){
	        s[b[i]]++;
	    }
	    int res = 0,l = 0,r = 0;
	    for(int i=0;i<n;i++){
	        if(s[a[i]]!=0){
	            l++;
	            r = 0;
	            res = max(res,l);
	        }
	        else{
	            r++;
	            l = 0;
	            res = max(res,r);
	        }
	    }
	    cout<<res<<endl;
	}
}

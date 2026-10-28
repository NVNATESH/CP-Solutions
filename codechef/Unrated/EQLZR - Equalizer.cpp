#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    std::vector<int> v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    int i = 1,res = 0;
	    for(int j=1;j<n;j++){
	        if(v[j-1]==v[j]) res++;
	    }
	    int d = 0;
	    int e =0,z = res,b = 0;
	    for(int i=0;i<n;i++){
	           // d = 0;  
	            if(i>0 && v[i]+1==v[i-1]){
	                d = 1;
	            }
	            e = 0;
	            if(i+1<n && v[i]+1==v[i+1]){
	                e = 1;
	            }
	            if(i+1<n && v[i]==v[i+1]){
	                e = -1;
	            }
	            z = max(z,res+d+e);
	    }
	    cout<<z<<endl;
	}
}

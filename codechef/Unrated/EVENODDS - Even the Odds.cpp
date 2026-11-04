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
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	       // cout<<v[i]<<" ";
	    }
	   // cout<<endl;
	    int res = 0;
	    for(int i=0;i<n;i++){
	        for(int j = i;j<n;j++){
	            int e = 0;
	            for(int k=i;k<=j;k++){
	                if(v[k]%2!=0) e++;
	            }
	            if(e%2==0) res = max(res,j-i+1);
	        }
	    }
	    cout<<res<<endl;
	}
}

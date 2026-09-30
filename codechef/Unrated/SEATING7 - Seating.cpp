#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int> v(n+1,0);
	    for(int i=0;i<m;i++){
	        int a;
	        cin>>a;
	        v[a] = 1;
	    }
	    for(int i=1;k>0;i++){
	        if(v[i]==0){
	            cout<<i<<" ";
	            k--;
	        }
	    }
	    cout<<endl;
	}
}

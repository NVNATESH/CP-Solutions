#include <bits/stdc++.h>
using namespace std;    

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b,res = 1;
	    cin>>a>>b;
	    vector<string> v(a);
	    vector<pair<int,int>> m;
	    int d = a,e = b,f = -1,g = -1;
	    for(int i=0;i<a;i++) cin>>v[i];
	    for(int i=0;i<a;i++){
	        for(int j = 0;j<b;j++){
	            if(v[i][j]=='1'){
	                d = min(d,i);
	                e = min(e,j);
	                f = max(f,i);
	                g = max(g,j);
	            }
	        }
	    }
	    res = (f-d+1)*(g-e+1);
	    cout<<res<<endl;
	}
}

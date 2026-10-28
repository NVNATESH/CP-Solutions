#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    string s;
	    cin>>s;
	    int res = 0;
	    for(int i=a-1;i>=0;){
	        if(s[i]=='0'){
	            i--;
	            continue;
	        }
	        else{
	            res++;
	            i -= b+1;
	        }
	    }
	    cout<<res<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    string s,t;
	    cin>>s;
	    cin>>t;
	    int a= 0,b = 0,c = 0,d = 0;
	    for(int i=0;i<n;i++){
	        if(s[i]!=t[i]) a++;
	        else b++;
	        if(t[i]=='0') c++;
	        else d++;
	    }
	    if(a%2==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}

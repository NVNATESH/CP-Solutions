#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    long long a = 0,b = 0,c = 0,d = 0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='U')a++;
	        else if(s[i]=='D') b++;
	        else if(s[i]=='R') c++;
	        else d++;
	    }
	    
	    if(a==b && abs(c-d)==2) cout<<"YES"<<endl;
	    else if(abs(a-b)==2 && c==d) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}

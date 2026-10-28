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
	    int a = 1,res = 0;
	    for(int i=1;i<n;i++){
	        if(s[i-1]==s[i]){
	            a++;
	        }
	        else{
	            a = 1;
	        }
	        if(a==3){
	            res++;
	            i++;
	            a = 1;
	        }
	    }
	    cout<<res<<endl;
	}
}

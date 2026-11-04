#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s[n-1]=='0'){
	        int res = 0;
	        for(int i=0;i<n;i++){
	            if(s[i]=='1') res++;
	        }
	        cout<<res<<endl;
	    }
	    else{
	        int a= 0,b = 0;
	        for(int i=n-1;i>=0;i--){
	            if(s[i]=='0'){
	                a++;
	            }
	        }
	        int c = a;
	        for(int j = 0;j<n;j++){
	            if(s[j]=='1'){
	                a++;
	            }
	            else{
	                b--;
	            }
	            c = min(c,a+b);
	        }
	        cout<<c<<endl;
	    }
	}
}

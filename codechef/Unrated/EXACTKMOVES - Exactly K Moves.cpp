#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    if(b>a && b*2<a){
	        cout<<"NO"<<endl;
	    }
	    else if(a>= b && a<=2*b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}

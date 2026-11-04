#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long a,b,z;
	    cin>>a>>b>>z;
	    long long d = max(a,b),c = min(a,b);
	    for(long long i=d;;i+=d){
	        long long e = i/c * c;
	        long long d = (i/c+1)*c;
	        if(i==e || (i-e)<=z){
	            cout<<i<<endl;
	            break;
	        }
	        else if(i==d || (d-i)<=z){
	            cout<<d<<endl;
	            break;
	        }
	    }
	}
}

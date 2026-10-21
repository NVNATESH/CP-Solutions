#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long n ,d;
	    cin>>n>>d;
	    while(1){
	        long long t = n,p = 1,b = 0;
	        while(t>0){
	            if(t%10==d){
	                b = p;
	            }
	            t /= 10;
	            p *=10;
	        }
	        if(b==0){
	            break;
	        }
	        n = (n/b+1)*b;
	    }
	    cout<<n<<endl;
	}
}

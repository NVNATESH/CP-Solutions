#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    std::vector<string> v(a,string(b,'.')) ;
	    int r = 0,c = 0;
	    int k = 0;
	    while(r<a && c<b){
	        int x = a - r;
	        int y = b - c;
	        if(x+y >= 3){
	            if(x>=y){
	               v[r][c] = 'R';
	               v[r+1][c] = 'R';
	               r += 2;
	               c += 1;
	               k += 2;
	            }
	            else{
	                v[r][c] = 'R';
	                v[r][c+1] = 'R';
	                r += 1;
	                c += 2;
	                k += 2;
	            }
	        }
	        else{
	            v[r][c] = 'R';
	            r+= 1;
	            c += 1;
	            k += 1;
	        }
	    }
	    cout<< k<<endl;
	    for(int i=0;i<a;i++) cout<<v[i]<<endl;
	}
}

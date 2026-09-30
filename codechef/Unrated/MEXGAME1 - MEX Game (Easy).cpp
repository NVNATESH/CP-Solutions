#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    vector<int> v(n),u(102,0);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        u[v[i]]++;
	    }
	    int a = -1;
	    for(int i=0;i<=101;i++){
	        if(u[i]==0){
	            a = i;
	            break;
	        }
	    }
	    long long c = (a*(a-1))/2,t = 0;
	    for(int i=0;i<a;i++){
	        if(u[i]>0){
	            t += (u[i])*i;
	        }
	    }
	    for(int i=a+1;i<101;i++){
	        if(u[i]>0){
	            t += u[i]*(i-a-1);
	        }
	    }
	    t -= c;
	    if(t%2!=0) cout<<"Alice"<<endl;
	    else cout<<"Bob"<<endl;
	}
}

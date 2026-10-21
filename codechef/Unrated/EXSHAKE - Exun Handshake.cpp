#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n,b;
	    cin>>n>>b;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    sort(v.begin(),v.end());
	    long long res = 0,a = 0;
	    for(int i=0;i<n;i++){
	        if(i==0){
	            long long c = (v[i]*(v[i]-1))/2;
	            if(c>b){
	                break;
	            }
	            else{
	                res += v[i];
	                a++;
	            }
	        }
	        else{
	            res += v[i];
	            long long c = (res*(res-1))/2;
	           // cout<<c<<" "<<res<<endl;
	            if(c>b){
	                break;
	            }
	            else{
	                a++;
	            }
	        }
	    }
	    cout<<a<<endl;
	}
}

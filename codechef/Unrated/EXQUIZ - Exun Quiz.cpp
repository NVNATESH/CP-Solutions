#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    if(b%4==0 && b/4 >= a){
	        cout<<b/4<<endl;
	    }
	    else if(b==0){
	        cout<<0<<endl;
	    }
	    else{
	        int c = (b/4+1);
	        int d = 4 - b%4;
	        if(c+d <= a){
	            cout<<c+d<<endl;
	        }
	        else{
	            cout<<-1<<endl;
	        }
	    }
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    int test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        cout<<(int)(-1 + sqrt(1+8*n))/2<<endl;
    }
    return 0;
}
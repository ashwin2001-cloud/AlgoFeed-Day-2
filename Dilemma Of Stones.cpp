#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin>>t;
    
    while(t--){
        ll x, y, z, n;
        cin>>x>>y>>z>>n;
        
        ll maximum= max(x, max(y, z));
        ll a= (maximum-x) + (maximum-y) + (maximum-z);
        
        if(a<=n && a%3==n%3){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin>>n>>m;
    
    ll cost[n];
    for(ll i=0;i<n;i++){
        cin>>cost[i];
    }
    
    bool** matching= new bool*[n];
    for(int i=0;i<n;i++){
        matching[i]= new bool[n]();
    }
    
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        matching[x-1][y-1]= true;
        matching[y-1][x-1]= true;
    }
    
    ll ans= LLONG_MAX;
    
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            for(ll k=j+1;k<n;k++){
                if(matching[i][j] && matching[j][k] && matching[k][i]){
                    ans= min(ans, cost[i]+cost[j]+cost[k]);
                }
            }
        }
    }
    
    if(ans==LLONG_MAX){
        ans=-1;
    }
    cout<<ans<<endl;
    return 0;
}

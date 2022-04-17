#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n, m;
        cin>>n>>m;
        
        int ans= n*(m/3);
        if(m%3==1){
            ans+=n/3;
            if(n%3!=0){
                ans++;
            }
        }
        else if(m%3==2){
            ans+=2*(n/3);
            if(n%3==1){
                ans++;
            }
            else if(n%3==2){
                ans+=2;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}

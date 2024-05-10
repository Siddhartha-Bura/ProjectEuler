#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll ans = 1;
    ll k = 20;
    for(ll i=1;i<=k;i++) ans *= i;
    for(ll i=k;i>=1;i--){
        if(ans%i == 0){
            ll x = ans/i;
            bool flag = true;
            for(ll i=k;i>=1;i--) if(x%i != 0) {flag = false; break;}
            if(flag && x<ans) ans = x;
        }
    }
    cout<<ans;
}

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    // Write C++ code here
    ll n = 600851475143;
    vector<int> pn(int(sqrt(n)),1);
    pn[0] = pn[1] = 0;
    for(ll i=2;i*i<=pn.size();i++){
        if(pn[i] == 1)
        for(ll j=2*i;j<pn.size();j+=i)
            pn[j] = 0;
    }
    ll ans = 2;
    for(ll i=2;i<pn.size();i++)
        if(pn[i] == 1 && n%i == 0) ans = max(ans,i);
        
    cout<<ans;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n = 10001;
    vector<int> pn(n*n, 1);
    pn[0] = pn[1] = 0;
    for(ll i=2;i<n;i++)
        if(pn[i] == 1)
        for(ll j=i*i;j<n*n;j+=i)
            pn[j] = 0;
    ll cnt = 0;
    for(ll i=2;i<pn.size();i++){
        if(pn[i]) ++cnt;
        if(cnt == n) {cout<<i; break;}
    }
}

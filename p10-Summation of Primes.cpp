#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n = 2000000;
    vector<int> pn(n,1);
    pn[0] = pn[1] = 0;
    for(ll i=2;i*i<=n;i++)
        if(pn[i] == 1)
        for(ll j=i*i;j<n;j+=i)
            pn[j] = 0;
    ll sum = 0;
    for(int i=2;i<n;i++) if(pn[i]) sum+=i;
    cout<<sum;
    return 0;
}

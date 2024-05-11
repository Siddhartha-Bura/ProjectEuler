#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n = 1000;
    for(int a=1;a<=n-2;a++)
        for(int b=a;b+a<n;b++)
            if(pow(a,2) + pow(b,2) == pow(n - a - b,2))
                cout<<a*b*(n-a-b);
    return 0;
}

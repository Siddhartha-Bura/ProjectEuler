#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check_palin(string ans){
    int i = 0, j = ans.size() -1;
    while(i<j)
        if(ans[i++] != ans[j--]) return false;
    return true;
}
int main() {
    int ans = 0;
    for(int i=999;i>=100;i--)
        for(int j=i;j>=100;j--)
            if(check_palin(to_string(i*j)) && (i*j)>ans) ans = (i*j);
    cout<<ans;
    return 0;
}

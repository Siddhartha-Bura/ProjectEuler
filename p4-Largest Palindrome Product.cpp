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
    bool found = false;
    for(int i=999;i>=100;i--){
        for(int j=i;j>=100;j--){
            int pr = i * j;
            string x = to_string(pr);
            found = check_palin(x);
            if(found && pr>ans) ans = pr;
        }
    }
    cout<<ans;
    return 0;
}

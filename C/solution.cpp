#include<bits/stdc++.h>
using namespace std;

#define int long long
int n, k, tmp, comps, ans;
string s;

signed main(){
	freopen("C_30.in", "r", stdin);
	freopen("C_30.ans", "w", stdout);
    tmp = 1;
    cin >> n >> k >> s;
    if(n >= 2 && s[1] == '1' && s[0] == '0') comps = 1;
    for(int i = 0; i < s.length(); i++){
        if(tmp < n - 1) tmp++;
        if(i >= 1 && s[i] == '1' && s[i - 1] == '0') comps--;
        //cout << comps << " ";
        while(comps <= k && tmp < n){
            if(s[tmp] == '0' && s[tmp - 1] == '1' && comps == k){
                //cout << tmp << " ";
                tmp--;
                break;
            }
            if(s[tmp] == '1' && s[tmp - 1] == '0') comps++;
            tmp++;
        }
        if(tmp == n) tmp--;
        //cout << tmp << " ";
        ans = max(ans, tmp - i + 1);
        //cout << tmp - i + 1 << "\n";
    }
    cout << ans;
}

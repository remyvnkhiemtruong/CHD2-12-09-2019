#include<bits/stdc++.h>
using namespace std;
 
#define int long long
int n, a[100005], b[100005], dp[100005][2], mx;
 
signed main(){
	freopen("D_30.in", "r", stdin);
	freopen("D_30.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) cin >> b[i];
	dp[1][0] = a[1];
	dp[1][1] = b[1];
	for(int i = 2; i <= n; i++){
		dp[i][0] = max(mx, dp[i - 1][1]) + a[i];
		dp[i][1] = max(mx, dp[i - 1][0]) + b[i];
		mx = max(mx, max(dp[i - 1][0], dp[i - 1][1]));
	}
	cout << max(dp[n][0], dp[n][1]);
}

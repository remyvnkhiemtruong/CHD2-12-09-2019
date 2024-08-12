#include<bits/stdc++.h>
using namespace std;
 
#define int long long
int a[3001], b[3001], c[3001], x, y, z, k;
vector<int> sum1, sum2;
 
signed main(){
	freopen("A_30.in", "r", stdin);
	freopen("A_30.ans", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin >> x >> y >> z >> k;
	for(int i = 1; i <= x; i++) cin >> a[i];
	for(int i = 1; i <= y; i++) cin >> b[i];
	for(int i = 1; i <= z; i++) cin >> c[i];
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			sum1.push_back(a[i] + b[j]);
		}
	}
	sort(sum1.begin(), sum1.end());
	for(int i = sum1.size() - 1; i >= max((long long)(sum1.size() - k), 0LL); i--){
		for(int j = 1; j <= z; j++){
			sum2.push_back(sum1[i] + c[j]);
		}
	}
	sort(sum2.begin(), sum2.end());
	for(int i = sum2.size() - 1; i >= (long long)(sum2.size() - k); i--) cout << sum2[i] << "\n";
}

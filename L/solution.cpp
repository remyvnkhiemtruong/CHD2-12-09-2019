/***
 *      __  __            _    _       _
 *     |  \/  |          | |  | |     | |
 *     | \  / |_ __      | |  | |_ __ | | ___ __   _____      ___ __
 *     | |\/| | '__|     | |  | | '_ \| |/ / '_ \ / _ \ \ /\ / / '_ \
 *     | |  | | |     _  | |__| | | | |   <| | | | (_) \ V  V /| | | |
 *     |_|  |_|_|    (_)  \____/|_| |_|_|\_\_| |_|\___/ \_/\_/ |_| |_|
 *
 *
***/
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define int long long
/*---------------for_stuff-------------------*/
#define f(i,a,b) for (int i=a;i<=b;i++)
#define f_(i,a,b) for (int i=a;i>=b;i--)
 
int n,k,a[200005],id;
signed main() {
//	freopen("","r",stdin);
//	freopen("","w",stdout);
	scanf("%lld %lld", &n, &k);
	f(i,1,n) scanf("%lld", &a[i]);
	sort(a+1,a+1+n);
	id=n/2+1;
	f(i,id+1,n) {
		if (k>(a[i]-a[i-1])*(i-id)) {
			k-=(a[i]-a[i-1])*(i-id);
			a[id]+=a[i]-a[i-1];
		} else {
			a[id]+=(k/(i-id));
			k=0;
			break;
		}
	}
	if (k>0) {
		a[id]+=(k/(n-id+1));
	} 
	printf("%lld", a[id]);
	return 0;
}

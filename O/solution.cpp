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
#define ll unsigned long long
/*---------------for_stuff-------------------*/
#define f(i,a,b) for (int i=a;i<=b;i++)
#define f_(i,a,b) for (int i=a;i>=b;i--)
/*---------------pair_stuff------------------*/
#define MP make_pair
#define ii pair<int,int>
#define Iii pair<int,ii>
#define ill pair<int,ll>
#define lli pair<ll,int>
#define iiI pair<ii,int>
#define llll pair<ll,ll>
#define fi first
#define se second
/*--------------vector_stuff-----------------*/
#define pb push_back
#define ppb pop_back
/*--------------const_stuff-----------------*/
const ll mod=1000000007;
/*--------------map_stuff--------------------*/
// why do you think I should write something in this part? :v

ll a[2005][1005];
ll n;
int main() {
	freopen("input.in","r",stdin);
	freopen("output.ans","w",stdout);
	cin>>n;
	if (n==0) {
		cout<<"1";
		return 0;
	}
	for (ll i=1;i<=2*n;i++) {
		for (ll j=0;j<=min(i,n);j++) {
			if (i==1) a[i][j]=1;
			else {
				a[i][j]=a[i-1][j+1]+a[i-1][j-1];
				a[i][j]%=mod;
			}
		}
	}
	cout<<a[2*n][0];
	return 0;
}

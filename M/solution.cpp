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
#include<time.h>
using namespace std;
#define ll long long
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

int a[100],n;
bool b[100];
void back(int pos) {
	if (pos==n+1) {
		f(i,1,n) printf("%d ", a[i]);
		printf("\n");
		return ;
	}
	int dis=1;
	if (pos==1) dis++;
	for (int i=1;i<=n;i+=dis) {
		if (!b[i]) {
			b[i]=true;
			a[pos]=i;
			back(pos+1);
			b[i]=false;
		}
	}
}
int main() {
	freopen("input.in","r",stdin);
	freopen("output.ans","w",stdout);
//	clock_t t;
//	t=clock();
	scanf("%d", &n);
	back(1);
//	t=clock()-t;
//	printf("thuat chay mat %d ms", t);
	return 0;
}


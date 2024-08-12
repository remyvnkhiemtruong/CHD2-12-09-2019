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

int n,dem=0;
char c[100];
void back(int pos) {
	if (pos==(n<<1)+1) {
		if (dem!=0) return ;
		for (int i=1;i<=(n<<1);i++) printf("%c", c[i]);
		printf("\n");
		return ;
	}
	if (2*n-pos+1>=dem) {
		c[pos]='(';
		dem++;
		back(pos+1);
		dem--;
	}
	if (dem>0) {
		c[pos]=')';
		dem--;
		back(pos+1);
		dem++;
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
//	printf("code chay mat %d ms", t);
	return 0;
}


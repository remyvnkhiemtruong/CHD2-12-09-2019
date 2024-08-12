#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vt vector
#define ii pair<int,int>
#define mp make_pair
#define vi vt<int>
#define vvi vt<vi>
#define vii vt<ii>
#define vvii vt<vii>
#define For(i,a,b) for(int i = a; i < b; i++)
#define foR(i,a,b) for(int i = a; i <= b; i++)
#define roF(i,a,b) for(int i = a - 1; i >= b; i--)
#define Rof(i,a,b) for(int i = a; i >= b; i--)
#define NEW 0
#define FOUNDED 1
#define CHECKED 2
#define pb push_back
#define pob pop_back
#define mset(a,b) memset(a,b,sizeof(a))

template<class T1, class T2> ostream& operator<< (ostream& the, pair<T1, T2> a){
	the << a.first << "\t" << a.second << "\n";
	return the;
}
template<class T1> ostream& operator<< (ostream& the, vt<T1> a){
	For(i,0,a.size()) {
		the << a[i] << "\n";
	}
	return the;
}

int v[4], t[4];

signed main () {
	freopen("D:\\Program\\CHD2\\input.in","r",stdin);
	freopen("D:\\Program\\CHD2\\J\\output.ans","w",stdout);
	int k, n, m, ti, s, e;
	cin >> k >> n >> m;
	For(i,0,k){
		cin >> v[i];
	}
	For(i,0,m){
		cin >> ti >> s >> e;
		int chose = 0, mymin = LLONG_MAX, tim;
		For(i,0,k){
			tim = max(t[i],ti)+llabs(v[i]-s);
			if(tim < mymin){
				mymin = tim;
				chose = i;
			}
		}
		t[chose] = mymin+llabs(s-e);
		v[chose] = e;
		cout << chose+1 << " " << mymin << "\n";
	}
}



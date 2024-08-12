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
int d[8][3] = {{1,2,4},{0,3,5},{0,3,6},{1,2,7},{0,5,6},{1,4,7},{2,4,7},{3,5,6}};
int v[8];
bool dc[8];
int chose[8];
int mymaxi[8];
int mymax = LLONG_MIN;
int sum;
void back(int b){
	if(b == 8){
		sum = 0;
		For(i,0,8){
			sum += i*v[chose[i]];
		}
		if(sum > mymax){
			mymax = sum;
			For(i,0,8){
				mymaxi[i] = chose[i];
			}
		}
		return;
	}
	if(b == 0){
		For(i,0,8){
			dc[i] = true;
			chose[0] = i;
			back(b+1);
			dc[i] = false;
		}
		return;
	}
	For(i,0,3){
		if(!dc[d[chose[b-1]][i]]){
			dc[d[chose[b-1]][i]] = true;
			chose[b] = d[chose[b-1]][i];
			back(b+1);
			dc[d[chose[b-1]][i]] = false;
		}
	}
}

signed main () {
	freopen("D:\\Program\\CHD2\\input.in","r",stdin);
	freopen("D:\\Program\\CHD2\\I\\output.ans","w",stdout);
	For(i,0,8){
		cin >> v[i];
	}
	back(0);
	cout << mymax << "\n";
	For(i,0,8){
		cout << mymaxi[i]+1 << " ";
	}
	
}



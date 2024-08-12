#include<bits/stdc++.h>
using namespace std;

// Optimization
//#pragma GCC optimize("O3")
#define endl '\n'

// Shortcut

//#define int long long
#define eb emplace_back
#define pb push_back
#define pob pop_back
#define mp make_pair
#define upb upper_bound
#define lwb lower_bound
#define fi first
#define se second
#define For(i, l, r) for (int i = l; i < r; i++)
#define ForE(i, l, r) for (int i = l; i <= r; i++)
#define Ford(i, r, l) for (int i = r; i > l; i--)
#define FordE(i, r, l) for (int i = r; i >= l; i--)
#define Fora(i, a) for (auto i : a)

// I/O & Debug

#define PrintV(a) for (int iiii = 0; iiii < a.size(); iiii++) cout << a[iiii] << ' ';
#define PrintVl(a) for (int iiii = 0; iiii < a.size(); iiii++) cout << a[iiii] << endl;
#define PrintA(a, n) for (int iiii = 0; iiii < n; iiii++) cout << a[iiii] << ' ';
#define PrintAl(a, n) for (int iiii = 0; iiii < n; iiii++) cout << a[iiii] << endl;
#define Ptest(x) return cout << x, 0;
#define gl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
/*
#define debug(args...){ string _sDEB = #args; replace(_sDEB.begin(), _sDEB.end(), ',', ' '); stringstream _ssDEB(_sDEB); istream_iterator<string> _itDEB(_ssDEB); DEB(_itDEB, args); }
void DEB(istream_iterator<string> it) {}
template<typename T, typename... Args>
void DEB(istream_iterator<string> it, T a, Args... args){
    cout << *it << " = " << a << endl;
    DEB(++it, args...);
}
*/

// Functions

//#define isvowel(a) (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define mset(a) memset(a, 0, sizeof(a))
#define m1set(a) memset(a, 1, sizeof(a))
#define mn1set(a) memset(a, -1, sizeof(a))
#define mmset(a) memset(a, 0x3f, sizeof(a))
#define gcd __gcd
#define __builtin_popcount __builtin_popcountll
//mt19937 rando(chrono::steady_clock::now().time_since_epoch().count());

// Data Structure

#define pque priority_queue
#define mts multiset
#define y0 _y0_
#define y1 _y1_
#define div divi
typedef long long ll;
typedef long double ld;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <ld> vld;
typedef vector <string> vs;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef vector <vi > vvi;
typedef vector <vll > vvll;
typedef vector <pii > vpii;
typedef vector <pll > vpll;

const int N = 12, mod = 1e9 + 7, mod1 = 998242353, mod2 = 1e9 + 9;
const ll inf = 1e18 + 7;

int n;
ll ans;
bool ck[N];
int a[N];
int fact[N];

void bt(int u){
	//cout << u << endl;
	//ForE(i, 1, n){
	//	cout << a[i] << ' ';
	//}
	//cout << endl;
	if (u == n + 1) return;
	ForE(i, 1, n){
		if (!ck[i]){
			a[u] = i;
			ck[i] = 1;
			if (u >= 3 && a[u] + a[u - 2] == 2 * a[u - 1]){
				ans = ans + fact[n - u];
				ck[i] = 0;
				//a[u] = 0;
				return;
			}
			bt(u + 1);
			ck[i] = 0;
			//a[u] = 0;
		}
	}
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.in", "r", stdin);
    freopen("output.ans", "w", stdout);
    fact[0] = 1;
    fact[1] = 1;
    ForE(i, 2, 11){
    	fact[i] = fact[i - 1] * i;
	}
	cin >> n;
	if (n <= 2) Ptest(0);
	bt(1);
	cout << ans;
}

/*
==================================+
INPUT:                            |
------------------------------    |

------------------------------    |
==================================+
OUTPUT:                           |
------------------------------    |

------------------------------    |
==================================+
*/


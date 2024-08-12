#include<bits/stdc++.h>
#include<dir.h>
#include<process.h>
using namespace std;

// Optimization
//#pragma GCC optimize("O3")
#define endl '\n'

// Shortcut

#define int long long
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
mt19937 rando(chrono::steady_clock::now().time_since_epoch().count());

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

const int N = 1e3 + 5, mod = 1e9 + 7, mod1 = 998242353, mod2 = 1e9 + 9, inf = 1e9 + 7;
const ll infll = 1e18 + 7;

string tos(int x){
    string ans;
    ans += (char)('0' + x / 10);
    ans += (char)('0' + x % 10);
    return ans;
}

int randt(int x, int y){
	return (rando() % (y - x + 1)) + x;
}

signed main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    //int seed = 7390709; // The seed (in PROBLEM_SEED.txt file)
    int tests = 30; // The number of test
    //mt19937 generator(seed);
    /* Input style:
	n k
    */
	/*
    ForE(test, 1, tests){
    	mkdir(("TEST" + tos(test)).c_str());
    }
    exit(0);
	*/
    ofstream out;
    ForE(test, 1, tests){
        string com1 = "move /y \"C:\\Users\\Ki Thuat 88\\Desktop\\E\\input.in\" \"C:\\Users\\Ki Thuat 88\\Desktop\\E\\TEST00\"";
        string com2 = "move /y \"C:\\Users\\Ki Thuat 88\\Desktop\\E\\output.ans\" \"C:\\Users\\Ki Thuat 88\\Desktop\\E\\TEST00\"";
        // Real string: move \y "C:\Users\Ki Thuat 88\Desktop\E\input.txt" "C:\Users\Ki Thuat 88\Desktop\E\TEST00"
        com1[com1.length() - 3] = (char)('0' + test / 10);
        com1[com1.length() - 2] = (char)('0' + test % 10);
        com2[com2.length() - 3] = (char)('0' + test / 10);
        com2[com2.length() - 2] = (char)('0' + test % 10);
        out.open("input.in");
        // GENERATING TESTS
        int n, k;
		if (1 <= test && test <= 5){
			n = randt(4, 30);
		}
		else if (6 <= test && test <= 10){
			n = randt(31, 1000);
		}
		else if (11 <= test && test <= 15){
			n = randt(1001, 500000);
		}
		else if (16 <= test && test <= 20){
			n = randt(500001, 500000000);
		}
		else if (21 <= test && test <= 27){
			n = randt(999000000, 999999999);
		}
		else if (test == 28){
			n = 1000000000;
		}
		else if (test == 29){
			n = 3;
		}
		else if (test == 30){
			n = 2;
		}
		if (1 <= test && test <= 5){
			k = 4;
		}
		else if (6 <= test && test <= 15){
			k = randt(5, 1000000);
		}
		else if (16 <= test && test <= 20){
			k = randt(1000001, 500000000);
		}
		else if (21 <= test && test <= 25){
			k = randt(999000000, 999999999);
		}
		else if (26 <= test && test <= 30){
			k = 1000000000;
		}
		out << n << ' ' << k << endl;
        // END GENERATING
        out.close();
        system("solution.exe");
        system(com1.c_str()); // Move .inp file to the corresponding folder
        system(com2.c_str()); // Move .out file to the corresponding folder
        cout << com1 << endl << com2 << endl;
        cout << "SUCCESSFULLY CREATE TEST " << tos(test) << endl;
    }
    exit(0);
}

/*
----------------------------------+
INPUT:                            |
==============================    |

==============================    |
----------------------------------+
OUTPUT:                           |
==============================    |

==============================    |
----------------------------------+
*/

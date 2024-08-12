#include<bits/stdc++.h>
#include<dir.h>
#include<process.h>
#include<windows.h>
#include<random>
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
vector<pair<int,pair<int,int> > > v;
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
        string com1 = "move /y \"D:\\Program\\CHD2\\input.in\" \"D:\\Program\\CHD2\\J\\TEST00\"";
        string com2 = "move /y \"D:\\Program\\CHD2\\J\\output.ans\" \"D:\\Program\\CHD2\\J\\TEST00\"";
        string com3 = "D:\\Program\\CHD2\\J\\TEST00";
        // Real string: move \y "C:\Users\Ki Thuat 88\Desktop\E\input.txt" "C:\Users\Ki Thuat 88\Desktop\E\TEST00"
        com1[com1.length() - 3] = (char)('0' + test / 10);
        com1[com1.length() - 2] = (char)('0' + test % 10);
        com3[com3.length() - 2] = (char)('0' + test / 10);
        com3[com3.length() - 1] = (char)('0' + test % 10);
        com2[com2.length() - 3] = (char)('0' + test / 10);
        com2[com2.length() - 2] = (char)('0' + test % 10);
        mkdir(com3.c_str());
        out.open("input.in");
        // GENERATING TESTS
        int k, n, m;
        if(test <= 7){
        	k = 1;
		}else if(test <= 15){
			k = 2;
		}else if(test <= 22){
			k = 3;
		}else{
			k = 4;
		}
		if(test%3 == 0){
			m = randt(5,100);
		}else if(test%3 == 1){
			m = randt(100,10000);
		}else{
			m = randt(10000,100000);
		}
		n = randt(50,1000000000);
		out << k << " " << n << " " << m << "\n";
		For(i,0,k){
			out << randt(1,n) << " ";
		}
		out << "\n";
		For(i,0,m){
			v.pb(mp(randt(0,1000000000),mp(randt(1,n),randt(1,n))));
			if(v.back().se.fi == v.back().se.se){
				v.pop_back();
				i--;
			}
		}
		sort(v.begin(),v.end());
		For(i,0,m){
			out<< v[i].fi << " " << v[i].second.fi << " " << v[i].second.se << "\n";
		}
        // END GENERATING
        out.close();
        system("solJ.exe");
        system(com1.c_str()); // Move .inp file to the corresponding folder
        system(com2.c_str()); // Move .out file to the corresponding folder
        cout << com1 << endl << com2 << endl;
        cout << "SUCCESSFULLY CREATE TEST " << tos(test) << endl;
    }
//    exit(0);
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

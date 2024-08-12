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

const int N = 1e3 + 5, mod = 1e9 + 7, mod1 = 998242353, mod2 = 1e9 + 9, inf = 1e9;
const ll infll = 1e18 + 7;

struct Point{
    int x, y;
};

int dist(Point a, Point b){
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

bool test(Point a, Point b, Point c, Point d){
    Point m;
    m.x = (a.x + b.x + c.x + d.x) / 4;
    m.y = (a.y + b.y + c.y + d.y) / 4;
    Point p[4];
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    if (dist(m, p[0]) == 0)
        return false;
    for (int i = 0; i < 4; i++)
        if (dist(m, p[i]) != dist(m, p[0]))
            return false;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
        {
            if (dist(p[i], p[j]) == 0)
                return false;
            long long smul = (p[i].x - m.x) * (p[j].x - m.x) + (p[i].y - m.y) * (p[j].y - m.y);
            long long vmul = (p[i].x - m.x) * (p[j].y - m.y) - (p[i].y - m.y) * (p[j].x - m.x);
            if (smul != 0 && vmul != 0)
                return false;
        }
    return true;
}

string tos(int x){
    string ans;
    ans += (char)('0' + x / 10);
    ans += (char)('0' + x % 10);
    return ans;
}

int randt(int x, int y){
	return (rando() % (y - x + 1)) + x;
}

int randmod(int x){
	return rando() % x;
}

bool isinlimit(int x, int y){
	return x >= 1 && x <= inf && y >= 1 && y <= inf;
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
        string com1 = "move /y \"C:\\Users\\Ki Thuat 88\\Desktop\\F\\input.in\" \"C:\\Users\\Ki Thuat 88\\Desktop\\F\\TEST00\"";
        string com2 = "move /y \"C:\\Users\\Ki Thuat 88\\Desktop\\F\\output.ans\" \"C:\\Users\\Ki Thuat 88\\Desktop\\F\\TEST00\"";
        // Real string: move \y "C:\Users\Ki Thuat 88\Desktop\F\input.txt" "C:\Users\Ki Thuat 88\Desktop\F\TEST00"
        com1[com1.length() - 3] = (char)('0' + test / 10);
        com1[com1.length() - 2] = (char)('0' + test % 10);
        com2[com2.length() - 3] = (char)('0' + test / 10);
        com2[com2.length() - 2] = (char)('0' + test % 10);
        out.open("input.in");
        // GENERATING TESTS
        int t;
        int a[6][6];
        if (1 <= test && test <= 10){
        	t = 10;
		}
		else if (11 <= test && test <= 20){
			t = 100;
		}
		else if (21 <= test && test <= 30){
			t = 1000;
		}
		out << t << endl;
		ForE(ttttt, 1, t){
			int isyes = randt(1, 3);
			if (isyes == 1 || isyes == 2){
				int xx1 = randt(1, inf / 2), yy1 = randt(1, inf / 2), len = randt(1, inf / 2);
				vpii rancoordinate = {{xx1, yy1}, {xx1 + len, yy1}, {xx1, yy1 + len}, {xx1 + len, yy1 + len}};
				random_shuffle(bend(rancoordinate), randmod);
				For(i, 0, 4){
					do{
						int xx2 = rancoordinate[i].fi + randt(1, inf / 100) * (randt(0, 1) == 1 ? 1 : -1), yy2 = rancoordinate[i].se + randt(1, inf / 100) * (randt(0, 1) == 1 ? 1 : -1);
						if (!isinlimit(xx2, yy2)){
							continue;
						}
						vpii ttmmpp2;
						For(j, 0, 4){
							if (isinlimit(rancoordinate[i].fi, rancoordinate[i].se)){
								ttmmpp2.pb({rancoordinate[i].fi, rancoordinate[i].se});
							}
							int txx1 = xx2 - (rancoordinate[i].se - yy2), tyy1 = yy2 + (rancoordinate[i].fi - xx2);
							rancoordinate[i].fi = txx1;
							rancoordinate[i].se = tyy1;
						}
						int randidx = randmod(ttmmpp2.size());
						a[i + 1][1] = ttmmpp2[randidx].fi;
						a[i + 1][2] = ttmmpp2[randidx].se;
						a[i + 1][3] = xx2;
						a[i + 1][4] = yy2;
						break;
					} while (1);
				}
				ForE(i, 1, 4){
					ForE(j, 1, 4){
						out << a[i][j] << ' ';
					}
					out << endl;
				}
			}
			else{
				ForE(i, 1, 4){
					ForE(j, 1, 4){
						out << randt(1, inf) << ' ';
					}
					out << endl;
				}
			}
		}
        // END GENERATING
        out.close();
        int tim = clock();
        system("solution.exe");
        cout << "TIME: " << clock() - tim << endl;
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

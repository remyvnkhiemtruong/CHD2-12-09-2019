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
#include<process.h>
#include<dir.h>
#include<bits/stdc++.h>
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


signed main() {
//	freopen("","r",stdin);
//	freopen("","w",stdout);
	ofstream out;
	f(test,1,12) {
		string com1="move /y \"D:\\Mr.Unknown\\ratestCHD\\input.in\" \"D:\\Mr.Unknown\\ratestCHD\\TEST00\"";
		string com2="move /y \"D:\\Mr.Unknown\\ratestCHD\\output.ans\" \"D:\\Mr.Unknown\\ratestCHD\\TEST00\"";
		com1[com1.length()-3]=(char)('0'+test/10);
        com1[com1.length()-2]=(char)('0'+test%10);
        com2[com2.length()-3]=(char)('0'+test/10);
        com2[com2.length()-2]=(char)('0'+test%10);
        out.open("input.in");
        out<<test<<"\n";
        out.close();
        system("solution.exe");
        system(com1.c_str());
        system(com2.c_str());
        cout<<com1<<"\n"<<com2<<"\n"<<"congratulation onii-chan for successfully generated test "<<test<<"\n";
	}
	exit(0);
}

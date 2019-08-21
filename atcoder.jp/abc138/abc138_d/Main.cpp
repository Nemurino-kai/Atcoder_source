#define _CRT_SECURE_NO_WARNINGS

#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) std::sort(v, v+n);
#define VSORT(v) std::sort(v.begin(), v.end());
#define VRSORT(v) std::sort(v.rbegin(), v.rend());
#define ll long long
#define pb(a) push_back(a)
#define ALL(obj) (obj).begin(),(obj).end()

using namespace std;

const int INF = 99999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

#include "stdio.h"
ll h, w;
char mass[1001][1001] = {};
char neomass[1001][1001] = {};

ll n, q;
ll score[210000] = {};
std::list<ll> num[210000] = {};

void dfs(ll p,ll x,ll parent) {
	//親ノードにx点を足し、さらに親自身が持つ得点を次に渡していく
	score[p] += x;
	//子ノードにもx点を追加していく
	for (auto itr = num[p].begin(); itr != num[p].end(); ++itr) {
		if (parent != *itr) { dfs(*itr, score[p], p); };
	}

}

int main() {
	cin >> n >> q;
	   
	//リストに追加する
	REP(i, n-1) {
	ll tmp1,tmp2;
	cin >> tmp1>>tmp2;
	num[tmp1-1].push_back(tmp2-1);
	num[tmp2 - 1].push_back(tmp1 - 1);
	}

	//点数を足す
	REP(i, q) {
		ll ptmp, xtmp;
		cin >> ptmp >> xtmp;
		score[ptmp - 1] += xtmp;
	}
	dfs(0, 0, -1);
	REP(i, n) {
		cout << score[i];
		if (i != n - 1) { cout << " "; }
	}
	return 0;
}
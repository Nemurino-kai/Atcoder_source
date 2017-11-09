//ABC 077
#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define ALL(obj) (obj).begin(),(obj).end()

using namespace std;

const int INF = 99999999;
const ll LINF = 9999999999999;

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
int vx[4] = { 0,1,0,-1 };
int vy[4] = { 1,0,-1,0 };

int n;
vector<ll> a, b, c;
//bの上にのる数、cの上に載る数を格納
ll bup[100010] = {}, cup[100010] = {};


signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n;
	ll kari;
	REP(i, n) {
		cin >> kari;
		a.push_back(kari);
	}
	REP(i, n) {
		cin >> kari;
		b.push_back(kari);
	}
	REP(i, n) {
		cin >> kari;
		c.push_back(kari);
	}

	VSORT(a);
	VSORT(b);
	VSORT(c);

	ll ans = 0;
	REP(i, n) {
		ans += distance(a.begin(), lower_bound(ALL(a), b[i]))*distance(upper_bound(ALL(c), b[i]), c.end());
	}

	cout << ans << endl;






	return 0;
}
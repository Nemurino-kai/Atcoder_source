//ABC074 D Restoring Road Network

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

int a[300][300];
int after[300][300];

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n;

	REP(i, n)REP(j, n) {
		cin >> a[i][j];
		after[i][j] = a[i][j];
	}

	REP(i, n)REP(j, n)REP(k, n) after[i][j] = min(after[i][j], after[i][k] + after[k][j]);

	REP(i, n)REP(j, n) {
		if (after[i][j] != a[i][j]) {
			cout << -1 << endl;
			return 0;
		}
	}

	//最短距離だとわかった、続いて道路の和を計算
	ll ans = 0;
	 REP(i,n) {
		REP(j,i) {
			bool need = true;
			REP(k,n) {
				if (k != i and k != j and a[i][j] == a[i][k] + a[k][j])
					need = false;
			}
			if (need) ans += a[i][j];
		}
	}

	 cout << ans << endl;


	return 0;
}

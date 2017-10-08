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

int n, m;
vector<ll> d, t;

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	ll tmp;

	cin >> n;
	REP(i, n) {
		cin >> tmp;
		d.push_back(tmp);
	}
	cin >> m;
	REP(i, m) {
		cin >> tmp;
		t.push_back(tmp);
	}

	VSORT(d);
	VSORT(t);

	ll nowNum=0;
	ll ok = 0;
	REP(i, m) {
		FOR(j, nowNum, n) {
			if (d[j] == t[i]) {
				nowNum = j+1;
				ok++;
				break;
			}
		}
	}

	if (ok == m) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;

	}

	return 0;

}
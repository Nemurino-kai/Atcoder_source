//ABC030 C 飛行機乗り

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

ll n, m, x, y;
ll now=0,fly=0;
vector<ll> a, b;

void AtoBflying();

void BtoAflying() {
	//もし現在の時間より後の飛行時間があれば
	auto iter = lower_bound(ALL(b), now);
	if (iter != b.end()) {
		//時間を経過させ
		now = *iter + y;
		//往復回数を増やす
		fly++;
		AtoBflying();
	}
	else {
		return;
	}
}

void AtoBflying() {
	auto iter = lower_bound(ALL(a), now);
	if (iter != a.end()) {
		now = *iter + x;
		BtoAflying();
	}
	else {
		return;
	}
}

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> n >> m >> x >> y;
	ll tmp;
	REP(i, n) {
		cin >> tmp;
		a.push_back(tmp);
	}
	REP(i, m) {
		cin >> tmp;
		b.push_back(tmp);
	}

	now = a[0] + x;

	BtoAflying();
	
	cout << fly << endl;

	return 0;
}
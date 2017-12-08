#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i< (n);i++)
#define REPR(i, n) for(int i = (n);i >= 0;i--)
#define FOR(i, m, n) for(int i = (m);i < (n);i++)
#define FORR(i, m, n) for(int i = (m);i >= (n);i--)
#define SORT(v) sort(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define ALL(obj) (obj).begin(),(obj).end()

using namespace std;

const int INF = 99999999;
const ll LINF = 1145141919810;


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
int vx[4] = { 0,1,0,-1 };
int vy[4] = { 1,0,-1,0 };

bool zikan[31][100001] = {};
ll n, c;
signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> n >> c;
	REP(i, n) {
		ll start, end, ch;
		cin >> start >> end >> ch;
		for (int i = start; i <= end; i++) {
			zikan[ch][i] = true;
		}
	}

	ll maxch = 0;

	REP(i, 100001) {
		ll num = 0;
		REP(j, 31) {
			if (zikan[j][i])num++;
		}
		maxch = max(maxch, num);
	}

	cout << maxch << endl;


	return 0;
}
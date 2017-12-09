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

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	ll n, x;
	string s;
	ll time[100010];

	cin >> n >> x >> s;
	REP(i, n) { cin >> time[i]; }
	ll total = 0;
	REP(i, n) {
		if (s[i] == '0') { total += time[i]; }
		else { total += min(time[i], x); }
	}

	cout << total;
	return 0;
}
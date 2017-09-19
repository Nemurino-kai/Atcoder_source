//TDC B ゲーム

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
int a,b;
//左の山にi個、右の山にj個あるとき、先手が得られる最大価値
int dp[1001][1001] = {};
int aValue[1001] = {}, bValue[1001] = {};

bool senko(int geted) {
	return (geted % 2 == 0);
}

signed main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	cin >> a >> b;
	
	FOR(i, 1, a + 1) {
		cin >> aValue[i];
	}
	FOR(i, 1, b + 1) {
		cin >> bValue[i];
	}

	dp[0][0] = 0;
	
	FOR(j, 1, b + 1) {
		if (senko(a + b - j)) {
			dp[0][j]=dp[0][j - 1] + bValue[b + 1 - j];
		}
		else {
			dp[0][j]=dp[0][j - 1];
		}
	}

	FOR(i, 1, a + 1) {
		if (senko(a + b - i)) {
			dp[i][0]=dp[i-1][0] + aValue[a + 1 - i];
		}
		else {
			dp[i][0] = dp[i-1][0];
		}
	}

	FOR(i, 1, a + 1) {
		FOR(j, 1, b + 1) {
			if (senko(a + b - i - j)) {
				dp[i][j]=max(dp[i - 1][j] + aValue[a + 1 - i], dp[i][j - 1] + bValue[b + 1 - j]);
			}
			else {
				dp[i][j] = min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	cout << dp[a][b] << endl;

	return 0;
}
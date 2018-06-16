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



static ll dp[180000];

int main() {
	ll n;
	cin >> n;

	REP(i, 180000) {
		dp[i] = INF;
	}

	dp[0] = 0;
	REP(i, 100001) {
		dp[i + 1] = min(dp[i] + 1, dp[i+1]);
		
		dp[i + 6] = min(dp[i] + 1, dp[i + 6]);
		dp[i + 36] = min(dp[i] + 1, dp[i + 36]);
		dp[i + 216] = min(dp[i] + 1, dp[i + 216]);
		dp[i + 1296] = min(dp[i] + 1, dp[i + 1296]);
		dp[i + 7776] = min(dp[i] + 1, dp[i + 7776]);
		dp[i + 46656] = min(dp[i] + 1, dp[i + 46656]);

		dp[i + 9] = min(dp[i] + 1, dp[i + 9]);
		dp[i + 81] = min(dp[i] + 1, dp[i + 81]);
		dp[i + 729] = min(dp[i] + 1, dp[i + 729]);
		dp[i + 6561] = min(dp[i] + 1, dp[i + 6561]);
		dp[i + 59049] = min(dp[i] + 1, dp[i + 59049]);

	}

	cout << dp[n] << endl;
	

	return 0;
}